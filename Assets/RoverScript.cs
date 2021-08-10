using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoverScript : MonoBehaviour
{
    public GameObject Rover;
    public GameObject RoverExploded;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ToggleExploded()
    {
        if (Rover.activeSelf)
        {
            Rover.SetActive(false);
            RoverExploded.SetActive(true);
        }
        else
        {
            RoverExploded.SetActive(false);
            Rover.SetActive(true);
        }
    }
}
