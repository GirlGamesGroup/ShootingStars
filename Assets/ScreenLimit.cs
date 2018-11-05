using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenLimit : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log("Pasa por el collider");
        Vector2 direction = collision.gameObject.GetComponent<Rigidbody2D>().velocity;
        NetworkClientUI.SendControllerInfo(direction);
    }
}
