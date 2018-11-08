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
        Debug.Log(acceleration + " : " + angle);
        rb.isKinematic = false;
        Vector3 shootDir = Quaternion.Euler(0, 0, angle ) * Vector3.right;
        rb.AddForce(shootDir * acceleration * 0.025f);
        StartCoroutine(SlowDownVelocity(acceleration*0.002f,angle));
    }

    IEnumerator SlowDownVelocity(float Vo,float angle)
    {
        yield return new WaitForSeconds(0.2f);
        rb.velocity = rb.velocity * 0.5f;

        //float time = 0f;
        //float velO = Vo;
        //Vector3 velF = rb.velocity;
        //yield return new WaitForSeconds(0.001f);
        //velF.y = (float)(velO * Mathf.Sin(angle) - (9.8) * time);
        //time += Time.deltaTime;
        //rb.velocity = velF;

        //while (rb.velocity.y > 0f)
        //{
        //    Debug.Log(rb.velocity);

        //    yield return new WaitForSeconds(0.001f);
        //    velF.y = (float)(velO * Mathf.Sin(angle) - (9.8) * time);
        //    time += Time.deltaTime;
        //    rb.velocity = velF;
        //    Debug.Log(rb.velocity.magnitude);
        //}
        //Debug.Log("END:" + rb.velocity.magnitude);


        //    StopForce();
        //    GetTriggerCollision();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (isVisible)
        {
            if (collision.tag == "Star")
            {
                StopForce();
                isVisible = false;
                GetCollision();
            }
            else
            if (collision.tag == "Finish")
            {
                StopForce();
                isVisible = false;
                anim.Play("Explode");
                DetectIfYouWon();
            }
        }
    }

    public void GetTriggerCollision()
    {
        bool collidedWithAStar = false;
        starsDetected = Physics2D.OverlapCircleAll(transform.position, collisionRadius);
        for (int i = 0; i < starsDetected.Length; i++)
        {
            star = starsDetected[i].GetComponent<StarsBehavior>();
            if (star != null)
            {
                collidedWithAStar = true;
                rainbowColorID = Random.Range(0, GameManager.Instance.rainbowColor.Length);
                star.ChangeColor(GameManager.Instance.rainbowColor[rainbowColorID]);
                GameManager.Instance.numStarsCompleted++;
                anim.Play("Explode");
            }
        }
        if (!collidedWithAStar && isVisible)
        {
            anim.Play("Explode");

        }

        isVisible = false;
        DetectIfYouWon();
    }


    public void GetCollision()
    {
        Debug.Log("Explode!");
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
        if (!GameManager.Instance.isTransitioningToNextLevel)
        {
            if (GameManager.Instance.numStarsCompleted >= GameManager.Instance.levels[GameManager.Instance.currentLevel].numStarts)
            {
                GameManager.Instance.isTransitioningToNextLevel = true;
                StarManager.Instance.DoCrazyStarAnimation();
            }
            else
            {
                if (GameManager.Instance.currentNumBalloons <= 0)
                    LevelManager.Instance.Lose();
                InputManager.Instance.SendProjectileInfo(GameManager.Instance.currentNumBalloons + "");
            }
            starsDetected = null;
            star = null;



        }
    }
    private void StopForce()
    {
        rb.velocity = Vector3.zero;
        rb.angularVelocity = 0;
        rb.drag = 0;
    }

    public void ResetBalloon() //Called in the anim event
    {
        transform.position = BalloonManager.Instance.transform.position;
        anim.Play("Idle");
        isVisible = false;
        BalloonManager.Instance.AddObject(gameObject);
    }
}
