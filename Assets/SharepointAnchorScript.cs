using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit.Experimental.UI;
using TMPro;
public class SharepointAnchorScript : MonoBehaviour
{
    public GameObject dataDisplay;
    public GameObject anchor;
    public UserProfile userProfile;
    public Renderer anchorRenderer;

    public enum Criticality
    {
        None,
        Low,
        Medium,
        High
    }
    public Criticality crit;
    // Start is called before the first frame update
    void Start()
    {
        anchorRenderer = gameObject.GetComponent<Renderer>();
        Debug.Log(anchorRenderer);
        userProfile = GameObject.Find("UserProfile").GetComponent<UserProfile>();
        AutoFillSharepoint();
    }

    // Update is called once per frame
    void Update()
    {
        AlterColor();
    }

    public void ToggleData()
    {
        if (dataDisplay.activeSelf){
            dataDisplay.SetActive(false);
        } else
        {
            dataDisplay.SetActive(true);
        }
    }

    public void SetCrit(string critLevel)
    {
        Criticality critlev = (Criticality)System.Enum.Parse(typeof(Criticality), critLevel);
        crit = critlev;
        Debug.Log("crit done");
        Debug.Log(critlev);
        Debug.Log(crit);
    }

    public void AlterColor()
    {
        switch (crit)
        {
            case Criticality.None:
                break;
            case Criticality.Low:
                anchorRenderer.material.color = Color.green;
                break;
            case Criticality.Medium:
                anchorRenderer.material.color = Color.yellow;
                break;
            case Criticality.High:
                anchorRenderer.material.color = Color.red;
                break;
            default:
                break;
        }
    }

    //utilizing a user profile object
    //find from the main session
    public void AutoFillSharepoint()
    {
        userProfile.anchorNumber += 1;
        //Debug.Log(userProfile.anchorNumber);
        FillField("Issue ID", userProfile.anchorNumber.ToString());
        //Debug.Log("issue ID");
        FillField("Owner", userProfile.Owner);
        FillField("Owner Department", userProfile.OwnerDepartment);
        FillField("Date", System.DateTime.Now.ToString("dd MMMM yyyy"));
        FillField("Time", System.DateTime.Now.ToString("H:mm:ss"));
        FillField("Team", userProfile.Team);
        FillField("Location/System", userProfile.LocationSystem);
        FillField("IMT/QA Contact", userProfile.IMTQAContact);
        //FillField("Issue Status", "Unresolved");
        
    }
    /*
    void OnActive()
    {
        if (gameObject.activeSelf)
        {
            FillSheet();
        }
    }
    */
    // Start is called before the first frame update

    void FillField(string fieldName, string input)
    {
        Debug.Log("fillField");
        MRTKTMPInputField fillField;
        fillField = GetField(fieldName);
        Debug.Log(fillField);
        Debug.Log("getFieldCompleted");
        fillField.text = input;
        Debug.Log("fieldName:" + fieldName + fillField.text + "," + " should be " + input);
    }

    public MRTKTMPInputField GetField(string fieldName)
    {
        //Debug.Log("testField");
        Debug.Log("getField");
        Debug.Log(dataDisplay.gameObject.transform.Find(fieldName).GetChild(0).GetComponent<MRTKTMPInputField>());
        return dataDisplay.gameObject.transform.Find(fieldName).GetChild(0).GetComponent<MRTKTMPInputField>();
        
    }

}

