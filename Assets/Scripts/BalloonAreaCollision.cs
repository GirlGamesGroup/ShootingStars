using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BalloonAreaCollision : MonoBehaviour {

    //Balloon Variables
    [SerializeField] private float collisionRadius;
    private SpriteRenderer sprite;
    private Rigidbody2D projectile;

    //Stars Detection
    private Collider2D[] starsDetected;
    private StarsBehavior star;
    private int rainbowColorID;
        
    void Start ()
    {
        sprite = GetComponent<SpriteRenderer>();
        projectile = GetComponent<Rigidbody2D>();
    }

    //range of angle is [105|75] degree to be in the area of main screen
    //range of velocity between [0|3] from device input a
    public void Shoot(float acceleration, float angle)
    {
        var velocity = acceleration * 100f;
        var shootedProjectile = Instantiate(projectile, transform.position, transform.rotation).GetComponent<Rigidbody2D>();
        var shootDir = Quaternion.Euler(0, 0, angle) * Vector3.right;

        shootedProjectile.AddForce(shootDir * velocity);
        StartCoroutine(AddDrag(shootedProjectile, velocity));
    }

    IEnumerator AddDrag(Rigidbody2D projectile, float velocity)
    {
        float current_drag = 0;

        while (current_drag < velocity)
        {
            current_drag += Time.deltaTime * (.15f * velocity);
            projectile.drag = current_drag;
            yield return null;
        }

        projectile.velocity = Vector3.zero;
        projectile.angularVelocity = 0;
        projectile.drag = 0;
        Debug.Log("EXPLODE");
        GetCollision();
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
