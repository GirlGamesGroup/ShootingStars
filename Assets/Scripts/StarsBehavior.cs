using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarsBehavior : MonoBehaviour {

    private SpriteRenderer sprite;
    private Animator anim;

    private void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
        anim = GetComponent<Animator>();
    }

    public void ChangeColor(Color color)
    {
        sprite.color = color;
    }
}
