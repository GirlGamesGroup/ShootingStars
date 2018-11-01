using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[System.Serializable]
public class LevelData
{

    public int numStarts;
    public int numBalloon;
}

public class GameManager : MonoBehaviour {

    public static GameManager Instance;

    [Header("Game Data")]
    public bool canDoStuff = true;
    public int score = 0;
    public int currentNumBalloons = 10;
    public int currentLevel = -1;
    public int numStarsCompleted = 0;

    [Header("Level Data")]
    public LevelData[] levels;

    [Header("Const Variables")]
    public const int totalLevels = 5;
    public const int totalNumBalloons = 10;
    public Color[] rainbowColor;

    //Aditional
    public int bestScore = 0;


    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;           
        }
        else Destroy(this.gameObject);
        DontDestroyOnLoad(this.gameObject);
    }

    public void StartGame(string goToGameScene)
    {
        SceneManager.LoadScene(goToGameScene);
    }

    public void GoToNextLevel()
    {
        currentLevel++;
        ResetLevel();
        SceneManager.LoadScene("Level-"+ currentLevel);
    }

    private void ResetLevel()
    {
        currentNumBalloons = levels[currentLevel].numBalloon;
        numStarsCompleted = 0;
        canDoStuff = true;

    }

    public void ResetGame(string goToMenuScene)
    {
        currentLevel = 0;
        currentNumBalloons = levels[currentLevel].numBalloon;
        score = 0;
        canDoStuff = true;
        SceneManager.LoadScene(goToMenuScene);
    }


}
