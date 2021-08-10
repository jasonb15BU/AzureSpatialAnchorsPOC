using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.Azure.SpatialAnchors.Unity.Examples;

public class TempMenu : MonoBehaviour
{
    public GameObject appMenu;
    public UserProfile userProf;
    //public UserProfile userProf;
    public delegate bool SpawnedAnchor();
    public static event SpawnedAnchor OnClicked;
    //public IMTTempTest imt;
    public IMTAppTest imt;
    private bool filled;

    void OnSpawnedAnchor()
    {
        //Debug.Log("on spawned anchor");
        //when an anchor is placed and not active, start this menu
        if (imt.isSpawned && !appMenu.activeSelf)
        {
            Debug.Log("object placed");
            //fill sheet
            appMenu.SetActive(true);
            if (!filled)
            {
                FillSheet();
                filled = true;
            }
        }
    }

    //on active in multi-anchor version
    void OnActive()
    {
        if (gameObject.activeSelf)
        {
            FillSheet();
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("test0");
        filled = false;
        Debug.Log("test1");
        //Debug.Log("fieldName:" + "Name" + GetField("Name").text + "," + " should be " + userProf.Name);
        Debug.Log("test2");
        //Debug.Log("fieldName:" + "Department" + GetField("Department").text + "," + " should be " + userProf.Department);
        Debug.Log("test3");
    }

    // Update is called once per frame
    void Update()
    {
        //OnSpawnedAnchor();
        OnActive();
    }

    //subscribe to spawned anchor event

    void FillSheet()
    {
        FillField("Name", userProf.Name);
        FillField("Department", userProf.Department);
        FillField("Date", System.DateTime.Now.ToString("dd MMMM yyyy"));
        FillField("Time", System.DateTime.Now.ToString("H:mm:ss"));
    }

    void FillField(string fieldName, string input)
    {
        InputField fillField;
        fillField = GetField(fieldName);
        fillField.text = input;
        Debug.Log("fieldName:" + fieldName + fillField.text + "," + " should be " + input);
    }

    public InputField GetField(string fieldName)
    {
        Debug.Log("testField");
        //error is here
        /*
        Debug.Log(gameObject);
        Debug.Log(gameObject.transform);
        Debug.Log(gameObject.transform.Find(fieldName));
        Debug.Log(gameObject.transform.Find(fieldName).GetComponent<InputField>());
        Debug.Log(gameObject.transform.Find(fieldName).GetComponent<InputField>().text);
        */
        Debug.Log("completed");
        return gameObject.transform.Find(fieldName).GetComponent<InputField>();
    }

    public void GetAllValues()
    {
        //get all values from the input whenever saved is called.
        //then associate list with the object
        List<string> textFromMyInputs = new List<string>();
        foreach (InputField inputField in appMenu.GetComponentsInChildren<InputField>())
        {
            foreach (Text text in inputField.GetComponentsInChildren<Text>())
            {
                if (text.gameObject.name != "Placeholder")
                    textFromMyInputs.Add(text.text);
            }
        }

        foreach (string s in textFromMyInputs)
        {
            Debug.Log(s);
        }
    }
    
    //save the anchor
    public void SaveAnchor()
    {

    }

    //cancel making the anchor
    public void CancelAnchor()
    {

    }
}
