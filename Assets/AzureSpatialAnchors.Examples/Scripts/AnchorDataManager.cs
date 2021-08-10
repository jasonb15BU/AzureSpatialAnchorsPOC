using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.Azure.SpatialAnchors.Unity.Examples;
#if WINDOWS_UWP || UNITY_WSA
using UnityEngine.XR.WindowsMR;
#endif

#if UNITY_ANDROID || UNITY_IOS
using UnityEngine.XR.ARFoundation;
#endif

public class AnchorDataManager : MonoBehaviour
{
#if UNITY_ANDROID || UNITY_IOS
    ARRaycastManager arRaycastManager;
#endif
    /// <summary>
    /// Start is called on the frame when a script is enabled just before any
    /// of the Update methods are called the first time.
    /// </summary>

    //list of anchors and associated data
    public List<AnchorFormData> anchorList;
    public Camera cam;
    public Text dataText;
    public GameObject displaySheet;
    //object in all our projects
    public GameObject XRCameraParent;
    
    // Start is called before the first frame update
    void Start()
    {
        //cam = GetComponent<Camera>();
        cam = XRCameraParent.GetComponent<XRCameraPicker>().EditorCameraTree.GetComponent<Camera>();
        Debug.Log("found cam" + cam.name);
        displaySheet = GameObject.Find("DisplayDataUI");
        Debug.Log("found display" + displaySheet.name);
        dataText = displaySheet.transform.GetChild(0).GetComponent<Text>();
        Debug.Log("found display" + dataText.text);


#if UNITY_ANDROID || UNITY_IOS
        arRaycastManager = FindObjectOfType<ARRaycastManager>();
        if (arRaycastManager == null)
        {
            Debug.Log("Missing ARRaycastManager in scene");
        }
    }
#endif
    }

    // Update is called once per frame
    void Update()
    {
        Ray ray = Camera.main.ViewportPointToRay(new Vector3(0.5F, 0.5F, 0));
        RaycastHit hit;
        Debug.Log("raycast here");
        //if (Physics.Raycast(ray, out hit))// && (hit.transform.gameObject.tag == "anchor"))
        if (Physics.Raycast(ray, out hit))
        {
            if (hit.transform.gameObject.tag == "anchor")
            {
                Debug.Log("anchor" + hit.transform.gameObject.name);
            }
            else
            {
                Debug.Log("not anchor" + hit.transform.gameObject.name);
            }
        }
        else
        {
            Debug.Log("none");
            ClearData();
        }
    }

    public void DisplayData(AnchorFormData anchor)
    {
        displaySheet.SetActive(true);
        dataText.text = anchor.ADataText;
    }

    public void ClearData()
    {
        displaySheet.SetActive(false);
        dataText.text = "";
    }
}
