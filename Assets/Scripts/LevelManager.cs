using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour {

    public static LevelManager Instance;
    private StarsBehavior[] stars;
    private bool isLevelCompleted = false;
    
	void OnEnable ()
    {
        Instance = this;
        stars = transform.GetComponentsInChildren<StarsBehavior>();
	}

    public void DoCrazyStarAnimation()
    {
        StartCoroutine(CombineStars());
    }

    IEnumerator CombineStars()
    {
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
            Debug.Log("tiii");
            isLevelCompleted = true;
        }
        yield return new WaitForSeconds(0.2f);
        //GameManager.Instance.GoToNextLevel();
    }

}
