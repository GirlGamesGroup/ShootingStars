using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RainbowProjectile : MonoBehaviour {

    bool isPressed = false;

    private float releaseDelay;

    public float minDragDistance = 200;

    public float maxDragDistance;

    private Rigidbody2D attachedBody;

    private Rigidbody2D rb;

    private SpringJoint2D sj;

    private LineRenderer lr;

    private Vector3 initialPosition;

    private float jointDistance;

    private bool hasBeenShot;

    SlingShotLine ssl;

    Vector3 minimalPosition = new Vector3(218.9341f, 450f, 0);

    void Awake()
    {
        hasBeenShot = false;
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
        ssl = FindObjectOfType<SlingShotLine>();
    }
    // Update is called once per frame
	void FixedUpdate () {
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
        Vector3 trajectory = mousePosition - attachedBody.position;
        float anglePhone = Mathf.Rad2Deg * Mathf.Atan(trajectory.y / trajectory.x);

        Debug.Log(mousePosition.y);
        if (anglePhone < 0)
        {
            float dif = (90 + anglePhone);
            anglePhone = 90 + dif;
        }
        if(anglePhone >= 75 && anglePhone <= 105)
        {
            if (distance > maxDragDistance)
            {
                Vector2 direction = (mousePosition - attachedBody.position).normalized;
                rb.position = attachedBody.position + direction * maxDragDistance;
            }
            else if (distance < minDragDistance || mousePosition.y > 350f)
            {
                rb.position = minimalPosition;
            }
            else
            {
                rb.position = mousePosition;
            }
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
        if (hasBeenShot)
            return;

        isPressed = true;
        rb.isKinematic = true;
        lr.enabled = true;
        rb.position = minimalPosition;
        ssl.ResetLine();
        ssl.Press();
    }

    private void OnMouseUp()
    {
        if (hasBeenShot)
            return;

        isPressed = false;
        rb.isKinematic = false;
        lr.enabled = false;
        hasBeenShot = true;
        StartCoroutine(Release());
        ssl.Dissapear();
    }

    public void ResetSlingshot()
    {
        hasBeenShot = false;
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
