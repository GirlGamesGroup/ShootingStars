using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {

    public static GameManager Instance;

    //Game Data
    public int score = 0;
    public int currentNumBalloons = 10;
    public int life = 5;
    public int currentLevel = 0;

    //Constants Variables
    public const int totalLevels = 5;
    public const int totalNumBalloons = 10;
    public Color[] rainbowColor;

    //Aditional
    public int bestScore = 0;


    private void Awake()
    {
        if (Instance == null) Instance = this;
        else Destroy(this.gameObject);
        DontDestroyOnLoad(this.gameObject);
    }

    public void StartGame(string goToGameScene)
    {
        SceneManager.LoadScene(goToGameScene);
    }

    public void ResetGame(string goToMenuScene)
    {
        currentLevel = 0;
        life = 5;
        score = 0;
        SceneManager.LoadScene(goToMenuScene);
    }


}
