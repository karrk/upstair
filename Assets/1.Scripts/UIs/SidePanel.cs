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
        base.Init();
        SetBtns(true);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_INPUT_SIGN, OnEvent);
        image = GetComponent<Image>();
        image.raycastTarget = true;
    }

    void OnEvent(EVENT_TYPE eventType, Component sender, object param = null)
    {
        if(eventType == EVENT_TYPE.GAME_INPUT_SIGN)
        {
            if(transform.position == _initPos && image.raycastTarget == true)
            UpLoadPanel();
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
