using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarsBehavior : MonoBehaviour {

    public bool isFinished = false;

    [SerializeField] float secondsToWait = 0.5f;

    private SpriteRenderer sprite;
    private Collider2D coll;
    private Animator anim;
    private float speed = 0.1f;

    private void Awake()
    {
        sprite = GetComponent<SpriteRenderer>();
        sprite.color = new Color(sprite.color.r,sprite.color.g,sprite.color.b,0);
        coll = GetComponent<Collider2D>();
        anim = GetComponent<Animator>();
        Invoke("StartAnim",Random.Range(0, secondsToWait));
    }

    private void StartAnim()
    {
        anim.enabled = true;
    }


    public void ChangeColor(Color color)
    {
        sprite.color = color;
        anim.Play("HappyIdle");
        coll.enabled = false;
        GameManager.Instance.score += 5;
        LevelManager.Instance.txt_score.text = "Score: " + GameManager.Instance.score;
    }

    public void CombineStars()
    {
        StartCoroutine("GoToPlayer");
    }

    IEnumerator GoToPlayer()
    {
        while (transform.position.y >= LevelManager.Instance.transform.position.y -0.05f )
        {
            transform.position = Vector3.Lerp(transform.position, LevelManager.Instance.transform.position, speed * Time.deltaTime);
            speed += 0.25f;
            yield return null;
        }

        Debug.Log("Explode");
        speed = 0.1f;
        isFinished = true;
      
    }
}
