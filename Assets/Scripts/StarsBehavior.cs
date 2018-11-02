using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarsBehavior : MonoBehaviour {

    public bool isFinished = false;
    private SpriteRenderer sprite;
    private Collider2D coll;
    private Animator anim;
    private float speed = 0.1f;

    private void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
        coll = GetComponent<Collider2D>();
        anim = GetComponent<Animator>();
    }

    public void ChangeColor(Color color)
    {
        sprite.color = color;
        coll.enabled = false;
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
