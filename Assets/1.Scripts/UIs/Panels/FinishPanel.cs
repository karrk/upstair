using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System;

public class FinishPanel : BasePanel
{
    bool _isrequestContinue;

    protected override void Init()
    {
        _isrequestContinue = false;
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.DEAD_ANIM_FIN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTINUE, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            transform.position = _initPos;
            _isrequestContinue = false;
        }

        if(eventType == EVENT_TYPE.DEAD_ANIM_FIN)
        {
            MyAction();
        }

        if(eventType == EVENT_TYPE.CONTINUE)
        {
            _isrequestContinue = true;
            MyAction();
            _isrequestContinue = false;
        }
    }

    protected override void MyAction()
    {
        if (!_isrequestContinue)
            transform.DOMoveY(0, 0.8f);
        else
            transform.DOMoveY(1920, 0.8f);
    }
}
