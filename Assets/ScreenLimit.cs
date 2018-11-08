using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenLimit : MonoBehaviour {

    RainbowProjectile rp;
	// Use this for initialization
	void Start () {
        rp = FindObjectOfType<RainbowProjectile>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        Vector2 direction = collision.gameObject.GetComponent<Rigidbody2D>().velocity;
        NetworkClientUI.SendControllerInfo(direction);
        if(rp != null)
        {
            rp.Hide();
        }
    }
}
