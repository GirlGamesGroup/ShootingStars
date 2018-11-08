using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarManager : MonoBehaviour {

    public static StarManager Instance;
    private Transform children;
    private StarsBehavior[] stars;
    private bool isLevelCompleted = false;
    
	void OnEnable ()
    {
        Instance = this;
        children = transform.GetChild(0);
        stars = children.GetComponentsInChildren<StarsBehavior>();
	}

    public void ShowStars()
    {
        children.gameObject.SetActive(true);
    }

    public void DoCrazyStarAnimation()
    {
        StartCoroutine(CombineStars());
    }

    IEnumerator CombineStars()
    {
        yield return new WaitForSeconds(0.5f);

        for (int i = 0; i < stars.Length; i++)
        {
            stars[i].CombineStars();
            yield return new WaitForSeconds(0.2f);
        }
        StartCoroutine("GoToNextLevel");
    }

    IEnumerator GoToNextLevel()
    {
        while(!isLevelCompleted)
        {
            for (int i = 0; i < stars.Length; i++)
            {
                if (!stars[i].isFinished)
                {
                    yield return null;
                }
            }
            isLevelCompleted = true;
        }
        GameManager.Instance.score += GameManager.Instance.currentNumBalloons * 5;
        InputManager.Instance.SendScores(GameManager.Instance.score, PlayerPrefs.GetInt("HighScore"));
        yield return new WaitForSeconds(0.2f);
        LevelManager.Instance.GoToNextLevel();
    }

}
