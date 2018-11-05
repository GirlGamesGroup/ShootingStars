using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour {

    public static LevelManager Instance;

    public StarManager level1;
    public StarManager level2;
    public StarManager level3;
    public StarManager level4;
    public StarManager level5;

    private void Awake()
    {
        Instance = this;
    }

    public void GoToNextLevel()
    {
        Debug.Log("Go to next Level Animation (change background)");

        GameManager.Instance.GoToNextLevel();
    }
}
