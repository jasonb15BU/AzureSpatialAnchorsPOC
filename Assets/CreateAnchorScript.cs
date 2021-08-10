using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateAnchorScript : MonoBehaviour
{
    public GameObject LocalAnchorPrefab;
    public GameObject CADAnchorPrefab;
    public GameObject LocalAnchorPresentation;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PlaceAnchor()
    {
        // Instantiate at position (0, 0, 0) and zero rotation.
        Instantiate(LocalAnchorPrefab, transform.position, Quaternion.identity);
    }

    public void PlaceCAD()
    {
        // Instantiate at position (0, 0, 0) and zero rotation.
        Instantiate(CADAnchorPrefab, transform.position, Quaternion.identity);
    }

    public void PlacePresentation()
    {
        // Instantiate at position (0, 0, 0) and zero rotation.
        Instantiate(LocalAnchorPresentation, transform.position, Quaternion.identity);
    }
}
