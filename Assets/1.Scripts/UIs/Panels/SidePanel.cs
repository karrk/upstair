using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class SidePanel : BasePanel
{
    Image image;

    protected override void Init()
    {
        SetBtns(true);

        image = GetComponent<Image>();
        image.raycastTarget = true;

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_INPUT_SIGN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType, Component sender, object param = null)
    {
        if(eventType == EVENT_TYPE.GAME_INPUT_SIGN)
        {
            if(transform.position == _initPos && image.raycastTarget == true)
            {
                UpLoadPanel();
            }
        }

        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            SetBtns(true);

            GetComponent<RectTransform>().pivot = new Vector2(0, 0.5f);
            image = GetComponent<Image>();
            image.raycastTarget = true;

            transform.position = _initPos;
        }
    }

    protected override void MyAction()
    {
        image.raycastTarget = false;
        RectTransform rt = GetComponent<RectTransform>();
        SetBtns(false);
        rt.DOPivotX(1, 0.35f).SetEase(Ease.InBack);
    }

    void SetBtns(bool value)
    {
        Button[] btns = this.transform.GetComponentsInChildren<Button>();

        foreach (var item in btns)
        {
            item.interactable = value;
        }
    }
}
