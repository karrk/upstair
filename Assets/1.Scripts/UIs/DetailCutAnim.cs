using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetailCutAnim : MonoBehaviour
{
    Animator _anim;

    private void Start()
    {
        _anim = GetComponent<Animator>();
        EventManager.Instance.AddListener(EVENT_TYPE.CHARACTER_DEAD, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.CHARACTER_DEAD)
        {
            _anim.SetBool("Action", true);
        }

        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            _anim.Rebind();
        }
    }

    void OnAnimationStart()
    {
        SetSpeed(500);
    }

    void OnAnimationEnd()
    {
        SetSpeed(1);
        _anim.Rebind();
        EventManager.Instance.PostNotification(EVENT_TYPE.DEAD_ANIM_FIN, this);
    }

    void SetSpeed(int multiples)
    {
        if(multiples == 1)
        {
            Time.timeScale = 1;
            _anim.speed = 1;

            return;
        }

        Time.timeScale = Time.timeScale / multiples;
        _anim.speed = _anim.speed * multiples;
    }
}
