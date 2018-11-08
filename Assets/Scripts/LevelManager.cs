using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour {

    public static LevelManager Instance;

    public StarManager[] level;
    public Text txt_score;
    public Text txt_highscore;

    public GameObject pnl_lose;
    public Text txtLose_score;
    public Text txtLose_highscore;

    public GameObject pnl_win;
    public Text txtWin_score;
    public Text txtWin_highscore;


    private void Awake()
    {
        Instance = this;
        if (PlayerPrefs.HasKey("HighScore"))
        {
            Debug.Log("asdf");
            PlayerPrefs.SetInt("HighScore", 0);
        }
        else
        {
            txt_highscore.text = "Highscore: " + PlayerPrefs.GetInt("HighScore");
        }
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
            Win();
        }
    }

    private void CanInteractAgain()
    {
        GameManager.Instance.isTransitioningToNextLevel = false;
        BalloonManager.Instance.currentBalloon.isVisible = true;
        InputManager.Instance.SendProjectileInfo(GameManager.Instance.currentNumBalloons + "");

    }

    public void Lose()
    {
        if (PlayerPrefs.GetInt("HighScore") < GameManager.Instance.score)
        {
            PlayerPrefs.SetInt("HighScore", GameManager.Instance.score);
        }
        //txt_highscore.text = "";
        //txt_score.text = "";
        //txtLose_score.text = "Score: " + GameManager.Instance.score;
        //txtLose_highscore.text = "Highscore: " + PlayerPrefs.GetInt("HighScore");
        InputManager.Instance.SendProjectileInfo(0 + "");
        InputManager.Instance.SendScores(GameManager.Instance.score, PlayerPrefs.GetInt("HighScore"));
        pnl_lose.SetActive(true);
    }

    public void Win()
    {
        if (PlayerPrefs.GetInt("HighScore") < GameManager.Instance.score)
        {
            PlayerPrefs.SetInt("HighScore", GameManager.Instance.score);
        }
        //txt_highscore.text = "";
        //txt_score.text = "";
        //txtWin_score.text = "Score: "+ GameManager.Instance.score;
        //txtWin_highscore.text = "Highscore: " +PlayerPrefs.GetInt("HighScore");
        pnl_win.SetActive(true);
        InputManager.Instance.SendProjectileInfo(12 + "");
        InputManager.Instance.SendScores(GameManager.Instance.score, PlayerPrefs.GetInt("HighScore"));
    }
}
