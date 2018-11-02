using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour {

    public static LevelManager Instance;
  
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
