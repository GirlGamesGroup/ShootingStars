using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BalloonBehavior : MonoBehaviour {

    //Balloon Variables
    public bool isVisible = true;
    [SerializeField] private float collisionRadius;
    private SpriteRenderer sprite;
    private Animator anim;
    private Rigidbody2D rb;

    //Stars Detection
    private Collider2D[] starsDetected;
    private StarsBehavior star;
    private int rainbowColorID;
        
    void Start ()
    {
        sprite = GetComponent<SpriteRenderer>();
        rb = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
    }

    //Range of angle is [105|75] degree to be in the area of main screen
    //Range of velocity between [0|4] from device input
    public void Shoot(float acceleration, float angle)
    {
        var velocity = acceleration * 100f;
        var shootDir = Quaternion.Euler(0, 0, angle) * Vector3.right;

        rb.AddForce(shootDir * velocity);
        //StartCoroutine(AddDrag(velocity));
    }

    IEnumerator AddDrag(float velocity)
    {
        float current_drag = 0;

        while (current_drag < velocity/2)
        {
            current_drag += Time.deltaTime * (.15f * velocity);
            rb.drag = current_drag;
            yield return null;
        }

        rb.velocity = Vector3.zero;
        rb.angularVelocity = 0;
        rb.drag = 0;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (isVisible)
        {
            if (collision.tag == "Star")
            {
                rb.velocity = Vector3.zero;
                rb.angularVelocity = 0;
                rb.drag = 0;
                isVisible = false;
                GetCollision();
            }
            else if(collision.tag == "Finish")
            {
                isVisible = false;
                anim.Play("Explode");
                DetectIfYouWon();
            }
        }
    }


    public void GetCollision()
    {
        anim.Play("Explode");

        //Change color of stars
        starsDetected = Physics2D.OverlapCircleAll(transform.position, collisionRadius);
        for (int i = 0; i < starsDetected.Length; i++)
        {
            star = starsDetected[i].GetComponent<StarsBehavior>();
            if (star != null)
            {
                rainbowColorID = Random.Range(0, GameManager.Instance.rainbowColor.Length);
                star.ChangeColor(GameManager.Instance.rainbowColor[rainbowColorID]);
                GameManager.Instance.numStarsCompleted++;
            }
        }

        DetectIfYouWon();

    }

    private void DetectIfYouWon()
    {
        if (GameManager.Instance.numStarsCompleted >= GameManager.Instance.levels[GameManager.Instance.currentLevel].numStarts)
        {
            GameManager.Instance.isTransitioningToNextLevel = true;
            LevelManager.Instance.DoCrazyStarAnimation();
        }
        else
        {
            starsDetected = null;
            star = null;
        }
    }

    public void ResetBalloon()
    {
       
        transform.position = BalloonManager.Instance.transform.position;
        anim.Play("Idle");
        isVisible = true;
        BalloonManager.Instance.AddObject(gameObject);
    }
}
