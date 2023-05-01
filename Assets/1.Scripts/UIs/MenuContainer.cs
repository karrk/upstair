using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuContainer : MonoBehaviour
{
    Button[] _btns;
    int count;

    bool _isInteractable = true;

    private void Start()
    {
        if (GetComponentInParent<CanvasControll>() != CanvasControll.Instance)
            return;

        count = transform.childCount;
        _btns = new Button[count];

        InitBtns();

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_INPUT_SIGN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_INPUT_SIGN)
        {
            BtnsInteracterble(false);
        }

        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            InitBtns();
            BtnsInteracterble(true);
        }
    }

    void InitBtns()
    {
        for (int i = 0; i < count; i++)
        {
            _btns[i] = transform.GetChild(i).GetComponent<Button>();
        }
    }

    void BtnsInteracterble(bool value) // �̰����� �ι��۵���
    {
        if (_isInteractable == value)
            return;

        for (int i = 0; i < count; i++)
        {
            _btns[i].interactable = value;
        }

        _isInteractable = value;
    }
}
