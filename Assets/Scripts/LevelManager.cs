using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour {

    public static LevelManager Instance;

    public StarManager[] level;

    private void Awake()
    {
        Instance = this;
    }

    public void GoToNextLevel()
    {
        if (GameManager.Instance.currentLevel + 1 < level.Length)
        {
            Debug.Log("Go to next Level Animation (change background): " + (GameManager.Instance.currentLevel + 1));
            level[GameManager.Instance.currentLevel+1].gameObject.SetActive(true);
            GameManager.Instance.GoToNextLevel();
            Invoke("CanInteractAgain",1.2f);
        }
        else
        {
            Debug.Log("yOU wON!");
        }
    }

    private void CanInteractAgain()
    {
        GameManager.Instance.isTransitioningToNextLevel = false;
        BalloonManager.Instance.currentBalloon.isVisible = true;

    }
}
