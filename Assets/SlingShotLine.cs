using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlingShotLine : MonoBehaviour {

    [SerializeField] Transform izquierda;

    [SerializeField] Transform derecha;

    [SerializeField] Transform centro;

    [SerializeField] Transform masIzquierda;

    [SerializeField] Transform masDerecha;

    LineRenderer lr;

    bool isPressed;
	// Use this for initialization
	void Start () {
        lr = GetComponent<LineRenderer>();
        lr.enabled = false;
        isPressed = false;
	}
	
	// Update is called once per frame
	void Update () {
        if (isPressed)
            SetLines();
	}

    void SetLines()
    {
        Vector3[] positions = new Vector3[5];
        positions[0] = masIzquierda.position;
        positions[1] = izquierda.position;
        positions[2] = centro.position;
        positions[3] = derecha.position;
        positions[4] = masDerecha.position;
        lr.SetPositions(positions);
    }

    public void Press()
    {
        isPressed = true;
        lr.enabled = true;
    }

    public void Dissapear()
    {
        isPressed = false;
        lr.enabled = false;
    }

    public void ResetLine()
    {
        lr.enabled = true;
        isPressed = true;
        SetLines();
    }


}
