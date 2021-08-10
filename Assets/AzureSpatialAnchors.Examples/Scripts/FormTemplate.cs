using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


//template for forms
//collection of inputfields to place on the UI
public class FormTemplate : MonoBehaviour
{
    //stores the fields
    List<string> formFields;
    //form object itself
    GameObject formMenu;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /// <summary>
    /// upon activation add the fields to the list
    /// </summary>
    void addFields()
    {
        /*
        for (int field = 0; field < formFields.Count; field++)
        {
            GameObject formFieldObj = Instantiate(inputField);
            formFields[field];
        }*/
    }

    public InputField GetField(string fieldName)
    {
        Debug.Log("testField");
        //error is here
        Debug.Log(formMenu);
        Debug.Log(formMenu.transform);
        Debug.Log(formMenu.transform.Find(fieldName));
        Debug.Log(formMenu.transform.Find(fieldName).GetComponent<InputField>());
        Debug.Log(formMenu.transform.Find(fieldName).GetComponent<InputField>().text);
        Debug.Log("completed");
        return formMenu.transform.Find(fieldName).GetComponent<InputField>();
    }

    /// <summary>
    /// needs to be adapted to 
    /// </summary>
    /// <param name="fieldName"></param>
    /// <param name="input"></param>
    void FillField(string fieldName, string input)
    {
        InputField fillField;
        fillField = GetField(fieldName);
        fillField.text = input;
        Debug.Log("fieldName:" + fieldName + fillField.text + "," + " should be " + input);
    }
}
