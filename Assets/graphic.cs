using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class graphic : MonoBehaviour
{
    public GameObject dataDisplay;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void ToggleData()
    {
        dataDisplay.SetActive(!dataDisplay.activeSelf);
    }
}
