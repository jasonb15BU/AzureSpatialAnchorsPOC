using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UserProfile : MonoBehaviour
{
    public string Name;
    public string Department;
    public string Owner;
    public string OwnerDepartment;
    public string IMTQAContact;
    public string Team;
    //public string IssueStatus;
    public string LocationSystem;
    public int anchorNumber;

    //autofill on pressing the button
    //use the Sharepoint?
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

    //subscribe to spawned anchor event

    void FillSheet()
    {
        FillField("Name", Name);
        FillField("Department", Department);
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

    /*
    public void GetAllValues()
    {
        //get all values from the input whenever saved is called.
        //then associate list with the object
        List<string> textFromMyInputs = new List<string>();
        foreach (InputField inputField in dataDisplay.GetComponentsInChildren<InputField>())
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
    */
}