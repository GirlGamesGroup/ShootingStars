using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BalloonBehavior : MonoBehaviour {

    // Update is called once per frame
    private Vector3 temp;

  
    void Update () {

        temp = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        temp.z = 0;
        transform.position = temp;
        if(Input.GetMouseButton(0))
        {
            GetComponent<BalloonAreaCollision>().GetCollision();
        }
	}
}
