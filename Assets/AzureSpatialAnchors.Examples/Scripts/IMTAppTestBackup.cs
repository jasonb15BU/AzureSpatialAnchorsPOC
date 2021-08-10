// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

namespace Microsoft.Azure.SpatialAnchors.Unity.Examples
{
    public class IMTAppTestBackup : DemoScriptBase
    {
        public bool isSpawned;
        public GameObject tempMenu;
        internal enum AppState
        {
            InitSession = 0,
            CreateSession,
            StartSession,
            DemoStepCreateLocalAnchor,
            EditAnchor,
            CreateWatcher,
            DemoStepSaveCloudAnchor,
            DemoStepSavingCloudAnchor,
            DemoStepStopSession,
            DemoStepDestroySession,
            DemoStepCreateSessionForQuery,
            DemoStepStartSessionForQuery,
            DemoStepLookForAnchor,
            DemoStepLookingForAnchor,
            DemoStepDeleteFoundAnchor,
            DemoStepStopSessionForQuery,
            DemoStepComplete,
            DemoStepBusy
        }

        private readonly Dictionary<AppState, DemoStepParams> stateParams = new Dictionary<AppState, DemoStepParams>
        {
            { AppState.InitSession,new DemoStepParams() { StepMessage = "Init", StepColor = Color.clear }},
            { AppState.CreateSession,new DemoStepParams() { StepMessage = "Create", StepColor = Color.blue }},
            { AppState.StartSession,new DemoStepParams() { StepMessage = "Start.", StepColor = Color.blue }},
            { AppState.DemoStepCreateLocalAnchor,new DemoStepParams() { StepMessage = "CreateLocalAnchor", StepColor = Color.blue }},
            { AppState.EditAnchor,new DemoStepParams() { StepMessage = "Edit", StepColor = Color.blue }},
            { AppState.CreateWatcher,new DemoStepParams() { StepMessage = "Watcher", StepColor = Color.blue }},
            { AppState.DemoStepSaveCloudAnchor,new DemoStepParams() { StepMessage = "Next: Save Local Anchor to cloud", StepColor = Color.yellow }},
            { AppState.DemoStepSavingCloudAnchor,new DemoStepParams() { StepMessage = "Saving local Anchor to cloud...", StepColor = Color.yellow }},
            { AppState.DemoStepStopSession,new DemoStepParams() { StepMessage = "Next: Stop Azure Spatial Anchors Session", StepColor = Color.green }},
            { AppState.DemoStepCreateSessionForQuery,new DemoStepParams() { StepMessage = "Next: Create Azure Spatial Anchors Session for query", StepColor = Color.clear }},
            { AppState.DemoStepStartSessionForQuery,new DemoStepParams() { StepMessage = "Next: Start Azure Spatial Anchors Session for query", StepColor = Color.clear }},
            { AppState.DemoStepLookForAnchor,new DemoStepParams() { StepMessage = "Next: Look for Anchor", StepColor = Color.clear }},
            { AppState.DemoStepLookingForAnchor,new DemoStepParams() { StepMessage = "Looking for Anchor...", StepColor = Color.clear }},
            { AppState.DemoStepDeleteFoundAnchor,new DemoStepParams() { StepMessage = "Next: Delete Anchor", StepColor = Color.yellow }},
            { AppState.DemoStepStopSessionForQuery,new DemoStepParams() { StepMessage = "Next: Stop Azure Spatial Anchors Session for query", StepColor = Color.grey }},
            { AppState.DemoStepComplete,new DemoStepParams() { StepMessage = "Next: Restart demo", StepColor = Color.clear }},
            { AppState.DemoStepBusy,new DemoStepParams() { StepMessage = "Processing...", StepColor = Color.clear }}
        };

        private AppState _currentAppState = AppState.InitSession;

        AppState currentAppState
        {
            get
            {
                return _currentAppState;
            }
            set
            {
                if (_currentAppState != value)
                {
                    Debug.LogFormat("State from {0} to {1}", _currentAppState, value);
                    _currentAppState = value;
                    if (spawnedObjectMat != null)
                    {
                        spawnedObjectMat.color = stateParams[_currentAppState].StepColor;
                    }

                    if (!isErrorActive)
                    {
                        feedbackBox.text = stateParams[_currentAppState].StepMessage;
                    }
                }
            }
        }

        private string currentAnchorId = "";

        /// <summary>
        /// Start is called on the frame when a script is enabled just before any
        /// of the Update methods are called the first time.
        /// </summary>
        public override void Start()
        {
            isSpawned = (spawnedObject != null);
            Debug.Log(">>Azure Spatial Anchors Demo Script Start");

            base.Start();

            if (!SanityCheckAccessConfiguration())
            {
                return;
            }
            feedbackBox.text = stateParams[currentAppState].StepMessage;

            Debug.Log("Azure Spatial Anchors Demo script started");
        }

        /*
        public async Task SetSession() 
        {
            Debug.Log("SetSessionStart");
            await CreateSession();
            Debug.Log("CreateSessionDone");
            ConfigureSession();
            Debug.Log("ConfiguredSessionDone");
            await CloudManager.StartSessionAsync();
            //added to skip init
            await AdvanceDemoAsync();
        }
        */
        protected override void OnCloudAnchorLocated(AnchorLocatedEventArgs args)
        {
            base.OnCloudAnchorLocated(args);

            if (args.Status == LocateAnchorStatus.Located)
            {
                currentCloudAnchor = args.Anchor;

                UnityDispatcher.InvokeOnAppThread(() =>
                {
                    Pose anchorPose = Pose.identity;

                    anchorPose = currentCloudAnchor.GetPose();

                    SpawnOrMoveCurrentAnchoredObject(anchorPose.position, anchorPose.rotation);
                    currentAppState = AppState.DemoStepDeleteFoundAnchor;
                });
            }
        }

        /// <summary>
        /// Update is called every frame, if the MonoBehaviour is enabled.
        /// </summary>
        public override void Update()
        {
            base.Update();

            if (spawnedObjectMat != null)
            {
                float rat = 0.1f;
                float createProgress = 0f;
                if (CloudManager.SessionStatus != null)
                {
                    createProgress = CloudManager.SessionStatus.RecommendedForCreateProgress;
                }
                rat += (Mathf.Min(createProgress, 1) * 0.9f);
                spawnedObjectMat.color = GetStepColor() * rat;
            }
        }

        protected override bool IsPlacingObject()
        {
            return currentAppState == AppState.DemoStepCreateLocalAnchor;
        }

        protected override Color GetStepColor()
        {
            return stateParams[currentAppState].StepColor;
        }

        protected override async Task OnSaveCloudAnchorSuccessfulAsync()
        {
            await base.OnSaveCloudAnchorSuccessfulAsync();

            Debug.Log("Anchor created, yay!");

            currentAnchorId = currentCloudAnchor.Identifier;

            // Sanity check that the object is still where we expect
            Pose anchorPose = currentCloudAnchor.GetPose();

            SpawnOrMoveCurrentAnchoredObject(anchorPose.position, anchorPose.rotation);

            currentAppState = AppState.DemoStepStopSession;
        }

        protected override void OnSaveCloudAnchorFailed(Exception exception)
        {
            base.OnSaveCloudAnchorFailed(exception);

            currentAnchorId = string.Empty;
        }

        /*
        public async Task CreateSession()
        {
            if (CloudManager.Session == null)
            {
                await CloudManager.CreateSessionAsync();
            }
            currentAnchorId = "";
            currentCloudAnchor = null;
        }
        
        public async Task AppCreateWatcher()
        {
            if (currentWatcher != null)
            {
                currentWatcher.Stop();
                currentWatcher = null;
            }
            currentWatcher = CreateWatcher();
            if (currentWatcher == null)
            {
                Debug.Log("Either cloudmanager or session is null, should not be here!");
                feedbackBox.text = "YIKES - couldn't create watcher!";
            }
        }
        */
        public async override Task AdvanceDemoAsync()
        {
            switch (currentAppState)
            {
                case AppState.InitSession:
                    currentAppState = AppState.DemoStepBusy;
                    Debug.Log("initing");
                    if (CloudManager.Session == null)
                    {
                        await CloudManager.CreateSessionAsync();
                    }
                    currentAnchorId = "";
                    currentCloudAnchor = null;
                    Debug.Log("started");
                    currentAppState = AppState.CreateSession;
                    break;
                case AppState.CreateSession:
                    currentAppState = AppState.DemoStepBusy;
                    Debug.Log("created");
                    ConfigureSession();
                    currentAppState = AppState.StartSession;
                    break;
                case AppState.StartSession:
                    currentAppState = AppState.DemoStepBusy;
                    Debug.Log("configed");
                    await CloudManager.StartSessionAsync();
                    currentAppState = AppState.DemoStepCreateLocalAnchor;
                    break;
                case AppState.DemoStepCreateLocalAnchor:
                    currentAppState = AppState.DemoStepBusy;
                    //Debug.Log(isSpawned);
                    //Debug.Log(spawnedObject);
                    if (spawnedObject != null)
                    {
                        isSpawned = true;
                        //Debug.Log("hello:" + isSpawned);
                        //tempMenu.SetActive(true);
                        //await SaveCurrentObjectAnchorToCloudAsync();
                        currentAppState = AppState.EditAnchor;
                        //await AdvanceDemoAsync();
                    }
                    else
                    {
                        currentAppState = AppState.DemoStepCreateLocalAnchor;
                    }
                    break;
                case AppState.EditAnchor:
                    currentAppState = AppState.DemoStepBusy;
                    tempMenu.SetActive(true);
                    //receive values
                    /*
                    if (!tempMenu.activeSelf)
                    {
                        //Debug.Log("hello:" + isSpawned);
                        //tempMenu.SetActive(true);
                        //await SaveCurrentObjectAnchorToCloudAsync();
                        
                        //await AdvanceDemoAsync();
                    }
                    else
                    {
                        currentAppState = AppState.EditAnchor;
                    }
                    */
                    currentAppState = AppState.DemoStepSaveCloudAnchor;
                    break;
                case AppState.DemoStepSaveCloudAnchor:
                    currentAppState = AppState.DemoStepSavingCloudAnchor;
                    await SaveCurrentObjectAnchorToCloudAsync();
                    currentAppState = AppState.DemoStepCreateLocalAnchor;
                    //await AdvanceDemoAsync();
                    break;
                case AppState.DemoStepStopSession:
                    currentAppState = AppState.DemoStepBusy;
                    CloudManager.StopSession();
                    CleanupSpawnedObjects();
                    await CloudManager.ResetSessionAsync();
                    currentAppState = AppState.DemoStepCreateSessionForQuery;
                    break;
                case AppState.DemoStepCreateSessionForQuery:
                    ConfigureSession();
                    currentAppState = AppState.DemoStepStartSessionForQuery;
                    break;
                case AppState.DemoStepStartSessionForQuery:
                    currentAppState = AppState.DemoStepBusy;
                    await CloudManager.StartSessionAsync();
                    currentAppState = AppState.DemoStepLookForAnchor;
                    break;
                case AppState.DemoStepLookForAnchor:
                    currentAppState = AppState.DemoStepLookingForAnchor;
                    if (currentWatcher != null)
                    {
                        currentWatcher.Stop();
                        currentWatcher = null;
                    }
                    currentWatcher = CreateWatcher();
                    if (currentWatcher == null)
                    {
                        Debug.Log("Either cloudmanager or session is null, should not be here!");
                        feedbackBox.text = "YIKES - couldn't create watcher!";
                        currentAppState = AppState.DemoStepLookForAnchor;
                    }
                    break;
                case AppState.DemoStepLookingForAnchor:
                    break;
                case AppState.DemoStepDeleteFoundAnchor:
                    currentAppState = AppState.DemoStepBusy;
                    await CloudManager.DeleteAnchorAsync(currentCloudAnchor);
                    CleanupSpawnedObjects();
                    currentAppState = AppState.DemoStepStopSessionForQuery;
                    break;
                case AppState.DemoStepStopSessionForQuery:
                    currentAppState = AppState.DemoStepBusy;
                    CloudManager.StopSession();
                    currentWatcher = null;
                    currentAppState = AppState.DemoStepComplete;
                    break;
                case AppState.DemoStepComplete:
                    currentAppState = AppState.DemoStepBusy;
                    currentCloudAnchor = null;
                    CleanupSpawnedObjects();
                    currentAppState = AppState.InitSession;
                    break;
                case AppState.DemoStepBusy:
                    break;
                default:
                    Debug.Log("Shouldn't get here for app state " + currentAppState.ToString());
                    break;
            }
        }

        private void ConfigureSession()
        {
            List<string> anchorsToFind = new List<string>();
            if (currentAppState == AppState.DemoStepCreateSessionForQuery)
            {
                anchorsToFind.Add(currentAnchorId);
            }

            SetAnchorIdsToLocate(anchorsToFind);
        }
    }
}
