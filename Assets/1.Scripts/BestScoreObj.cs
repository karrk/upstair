using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BestScoreObj : MonoBehaviour
{
    Animator _anim;
    
    private void Start()
    {
        _anim = GetComponent<Animator>();
    }

    internal void ScoreOverAnim()
    {
        _anim.SetBool("Over", true);
    }

    internal void AnimReset()
    {
        _anim.Rebind();
    }
}
