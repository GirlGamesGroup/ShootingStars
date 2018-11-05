using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomInit : MonoBehaviour {

    [SerializeField] float secondsToWait;
    private Animator anim;

    private void Awake()
    {
        anim = GetComponent<Animator>();
        Invoke("StartAnim", Random.Range(0, secondsToWait));
    }

    private void StartAnim()
    {
        anim.enabled = true;
    }
}
