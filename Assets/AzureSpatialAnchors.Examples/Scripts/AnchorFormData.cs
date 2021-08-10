using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnchorFormData : MonoBehaviour
{
    public string FormType;
    public GameObject AnchorMenu;
    //data stored within strings for now
    public Hashtable AnchorData;
    // Start is called before the first frame update
    public string ADataText;

    
    void Start()
    {
        /*
        Debug.Log("printing data...");
        FormType = FormMenu.name;
        Debug.Log(FormType);
        grabAllData(FormMenu);
        */
        //Debug.Log(grabAllData(FormMenu));
        AnchorMenu = GameObject.Find("AnchorMenu");
        Debug.Log("found FormMenu" + AnchorMenu.name);
    }
    void Update()
    {
        
    }


    // grab data from the children (InputFields) of a form
    public void grabAllData(GameObject appMenu)
    {
        Hashtable textFromMyInputs = new Hashtable();

        //find active form
        for (int i = 0; i < AnchorMenu.gameObject.transform.childCount; i++)
        {
            if (AnchorMenu.gameObject.transform.GetChild(i).gameObject.activeSelf == true)
            {
                appMenu = AnchorMenu.gameObject.transform.GetChild(i).gameObject;
            }
        }

        foreach (Transform child in appMenu.transform)
        {
            foreach (Text text in child.GetComponentsInChildren<Text>())
            {
                if (text.gameObject.name != "Placeholder")
                {
                    textFromMyInputs.Add(child.name, text.text);
                    Debug.Log(child.name + " " + text.text);
                }
            }
        }

        convertDataToString();
        AnchorData = textFromMyInputs;
    }

    public void convertDataToString()
    {
        foreach (KeyValuePair<string,string> attr in AnchorData)
        {
            ADataText += attr.Key + ":" + attr.Value + "\n";
        }
    }

    public string getStringField(InputField stringField)
    {
        return stringField.text;
    }

    public string getStringLabel(Dropdown dropdownField)
    {
        return (dropdownField.options[dropdownField.value].text);
    }

    public void displayData()
    {

    }
    void printStrings()
    {

    }
}
