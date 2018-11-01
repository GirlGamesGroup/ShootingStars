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

            //Detect if you won
            if(GameManager.Instance.numStarsCompleted >= GameManager.Instance.levels[GameManager.Instance.currentLevel].numStarts)
            {
                GameManager.Instance.canDoStuff = false;
                LevelManager.Instance.DoCrazyStarAnimation();
            }
            else
            {
                starsDetected = null;
                star = null;
                Debug.Log("Desactive Balloon");
                sprite.enabled = false;
                BalloonManager.Instance.AddObject(gameObject);

                if (GameManager.Instance.currentNumBalloons > 0)
                {
                    Debug.Log("Get New Balloon");
                    BalloonManager.Instance.GetBalloon();
                    GameManager.Instance.currentNumBalloons--;
                }
                else
                {
                    Debug.Log("YOU DONT HAVE MORE BALLOONS");

                }
            }

        }
    }
}
