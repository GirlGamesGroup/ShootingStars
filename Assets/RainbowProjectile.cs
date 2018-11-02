using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RainbowProjectile : MonoBehaviour {

    bool isPressed = false;

    private float releaseDelay;

    public float maxDragDistance;

    private Rigidbody2D attachedBody;

    private Rigidbody2D rb;

    private SpringJoint2D sj;

    private LineRenderer lr;

    private Vector3 initialPosition;

    private float jointDistance;

    void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        initialPosition = rb.position;
        sj = GetComponent<SpringJoint2D>();
        attachedBody = sj.connectedBody;
        jointDistance = sj.distance;
        releaseDelay = 1 / (sj.frequency * 4);
        lr = GetComponent<LineRenderer>();
        Vector3[] initialPositions = new Vector3[2];
        initialPositions[0] = rb.position;
        initialPositions[1] = rb.position;
        lr.SetPositions(initialPositions);
    }
    // Update is called once per frame
	void Update () {
        if(isPressed)
        {
            DragBall();
        }
	}

    private void DragBall()
    {
        SetLineRendererPositions();
        Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        float distance = Vector2.Distance(mousePosition, attachedBody.position);
        if(distance > maxDragDistance )
        {
            Vector2 direction = (mousePosition - attachedBody.position).normalized;
            rb.position = attachedBody.position + direction * maxDragDistance; 
        }
        else{
            rb.position = mousePosition;
        }
    }

    private void SetLineRendererPositions()
    {
        Vector3[] positions = new Vector3[2];
        positions[0] = rb.position;
        positions[1] = attachedBody.position;
        lr.SetPositions(positions); 
    }

    private void OnMouseDown()
    {
        isPressed = true;
        rb.isKinematic = true;
        lr.enabled = true;
    }

    private void OnMouseUp()
    {
        isPressed = false;
        rb.isKinematic = false;
        lr.enabled = false;
        StartCoroutine(Release());
    }

    public void ResetSlingshot()
    {
        isPressed = false;
        sj.enabled = true;
        attachedBody = sj.connectedBody;
        sj.distance = jointDistance;
        rb.isKinematic = true;
        rb.velocity = Vector3.zero;
        rb.angularVelocity = 0;
        rb.position = initialPosition;
        Vector3[] initialPositions = new Vector3[2];
        lr.enabled = true;
        initialPositions[0] = rb.position;
        initialPositions[1] = rb.position;
        lr.SetPositions(initialPositions);

    }

    private IEnumerator Release()
    {
        yield return new WaitForSeconds(releaseDelay);
        sj.enabled = false;
    }
}
