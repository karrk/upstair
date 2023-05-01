using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RetryBtn : BaseButton
{
    protected override void Init()
    {
        base.Init();
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            btn.interactable = true;
        }

    }

    protected override void BtnAction()
    {
        EventManager.Instance.PostNotification(EVENT_TYPE.CONTINUE, this);
        btn.interactable = false;
    }
}
