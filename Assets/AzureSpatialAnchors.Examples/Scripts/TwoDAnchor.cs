using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Azure.SpatialAnchors.Unity.Examples;

public class TwoDAnchor: MonoBehaviour
{
    // child object of anchors object
    // Start is called before the first frame update

    private GameObject XRCamera;
    private Transform XRCamTrans;
    void Start()
    {
        XRCamera = GameObject.Find("CameraParent");
        //XRCamTrans = XRCamera.GetComponent<XRCameraPicker>().EditorCameraTree.DefaultCamera.transform;
        XRCamTrans = GameObject.Find("CameraParent").GetComponent<XRCameraPicker>().ARFoundationCameraTree.transform.GetChild(0).transform;
    }

    // Update is called once per frame
    //face the user
    void Update()
    {
        //import from other assets folder
        //transform.LookAt(XRCamTrans);
        transform.LookAt(Camera.main.transform.position); //-Vector3.up
    }

}

/*
Vector3 targ = staticCompassTarget.transform.position;
targ.z = 0f;

Vector3 objectPos = transform.position;
targ.x = targ.x - objectPos.x;
targ.y = targ.y - objectPos.y;

float angle = Mathf.Atan2(targ.y, targ.x) * Mathf.Rad2Deg;
transform.rotation = Quaternion.Euler(new Vector3(0, 0, angle));
*/

//transform.LookAt(Camera.transform);

/*
 * If you set the World Center Mode to Camera on the Vuforia Configuration, the ARCamera will always be at 0,0,0. 
 * You can then rotate any objects in your world to point towards the camera to make them always be looking at the ARCamera.
 */