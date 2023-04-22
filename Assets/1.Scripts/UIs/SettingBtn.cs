using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class SettingBtn : BaseButton
{
    public GameObject _settingPanel;
    Vector3 _initPos;

    public override void Init()
    {
        base.Init();

        _initPos = this.transform.position;

        if (!btn.interactable)
            btn.interactable = true;

        GameManager.Instance.E_reset += ResetOptions;
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_INPUT_SIGN, OnEvent);
    }

    void ResetOptions()
    {
        if (!btn.interactable)
            btn.interactable = true;

        transform.position = _initPos;
        //EventManager.Instance.AddListener(EVENT_TYPE.GAME_INPUT_SIGN, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType, Component sender, object param = null)
    {
        if(eventType == EVENT_TYPE.GAME_INPUT_SIGN)
        {
            if (this.transform.position == _initPos)
            {
                this.transform.DOMoveX(1920 / 3, 0.35f).SetEase(Ease.InBack);
                btn.interactable = false;
            }
        }
    }

    public override void BtnAction()
    {
        if (!_settingPanel.activeSelf)
            _settingPanel.SetActive(true);
    }


}
