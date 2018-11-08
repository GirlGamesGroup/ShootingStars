using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BalloonManager : MonoBehaviour
{
    public static BalloonManager Instance;
    public BalloonBehavior currentBalloon;

    private List<GameObject> list;
    [SerializeField] private GameObject prefab;
    
    //Detect Input Here--------------
    private Vector3 temp;

    void Update()
    {
        if (!GameManager.Instance.isTransitioningToNextLevel)
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                Shoot(3300f, 90f);                
            }
        }
    }
    //-----------------------------


    public void Shoot(float acceleration, float angle)
    {
        if (!GameManager.Instance.isTransitioningToNextLevel)
        {
            if (GameManager.Instance.currentNumBalloons > 0)
            {
                GameManager.Instance.currentNumBalloons--;
                currentBalloon.Shoot(acceleration, angle);
                if (GameManager.Instance.currentNumBalloons > 0) GetBalloon();
            }
            else
            {
                Debug.Log("YOU DONT HAVE MORE BALLOONS");
                gameObject.SetActive(false);

            }
        }
    }

    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
            list = new List<GameObject>();
            DontDestroyOnLoad(this.gameObject);
            CreatePoolObjects(GameManager.Instance.currentNumBalloons);
            GetBalloon();
            if(InputManager.Instance != null) InputManager.Instance.SendProjectileInfo(GameManager.Instance.currentNumBalloons + "");
        }
        else
        {
            //Destroy(this.gameObject);
        }
    }

    public void GetBalloon()
    {
        currentBalloon = GetObject().GetComponent<BalloonBehavior>();
        currentBalloon.isVisible = true;
    }

    #region PoolSystem
    public void CreatePoolObjects(int size)
    {
        for (int i = 0; i < size; i++)
        {
            GameObject obj = (GameObject)Instantiate(prefab);
            obj.transform.position = transform.position;
            obj.transform.parent = transform;
            list.Add(obj);
        }
    }

    private GameObject GetObject()
    {
        if (list.Count > 0)
        {
            GameObject obj = list[0];
            list.RemoveAt(0);
            obj.GetComponent<SpriteRenderer>().enabled = true;
            return obj;
        }
        return null;
    }

    public void AddObject(GameObject obj)
    {
        list.Add(obj);
    }
        

    public void ResetPoolObjects()
    {
        list = new List<GameObject>();
        for(int i = 0; i < transform.childCount;i ++)
        {
            list.Add(transform.GetChild(i).gameObject);
        }
    }
    #endregion

}
