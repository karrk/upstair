using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BubbleEffect : MonoBehaviour
{
    void Start()
    {
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        this.gameObject.SetActive(false);
    }
}
