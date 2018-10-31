using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BalloonAreaCollision : MonoBehaviour {

    //Balloon Variables
    [SerializeField] private float collisionRadius;
    private SpriteRenderer sprite;

    //Stars Detection
    private Collider2D[] starsDetected;
    private StarsBehavior star;
    private int rainbowColorID;
        
    void Start ()
    {
        sprite = GetComponent<SpriteRenderer>();
    }

    public void GetCollision()
    {
        if (sprite.enabled)
        {
            starsDetected = Physics2D.OverlapCircleAll(transform.position, collisionRadius);
            for (int i = 0; i < starsDetected.Length; i++)
            {
                star = starsDetected[i].GetComponent<StarsBehavior>();
                if (star != null)
                {
                    rainbowColorID = Random.Range(0, GameManager.Instance.rainbowColor.Length);
                    star.ChangeColor(GameManager.Instance.rainbowColor[rainbowColorID]);
                }
            }

            starsDetected = null;
            star = null;
            //sprite.enabled = false;
            
        }
    }

    public void ResetBalloon()
    {

    }
}
