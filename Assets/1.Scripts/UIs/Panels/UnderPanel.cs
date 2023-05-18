using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

enum Show
{
    None,
    Up,
    Down
}

public class UnderPanel : BasePanel
{
    RectTransform _rt;
    bool _isHide = false;

    float _upPivot;
    float _downPivot = 1;

    protected override void Init()
    {
        _rt = GetComponent<RectTransform>();
        
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_INPUT_SIGN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);

        _upPivot = _rt.pivot.y;

    }


    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if (eventType == EVENT_TYPE.GAME_INPUT_SIGN)
        {
            if (!_isHide)
                MovePanel(Show.Down);
        }

        if (eventType == EVENT_TYPE.GAME_RESTART)
        {
            if (_isHide)
                MovePanel(Show.Up);
        }
    }

    void MovePanel(Show option)
    {
        switch (option)
        {
            case Show.None:
                break;

            case Show.Up:
                _rt.DOPivotY(_upPivot, 0.8f).SetEase(Ease.InOutElastic);
                _isHide = false;
                break;

            case Show.Down:
                _rt.DOPivotY(_downPivot, 0.4f).SetEase(Ease.InOutElastic);
                _isHide = true;
                break;

            default:
                break;
        }
    }

    protected override void MyAction()
    {

    }
}
