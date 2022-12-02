using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class SettingBtn : BaseButton
{
    public GameObject _settingPanel;

    void Start()
    {
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_START, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType, Component sender, object param = null)
    {
        switch (eventType)
        {
            case EVENT_TYPE.GAME_START:
                Debug.Log("상태변화 감지");
                break;
        }
    }

    void FixedUpdate()
    {

    }

    public override void BtnAction()
    {
        if (!_settingPanel.activeSelf)
            _settingPanel.SetActive(true);

    }


}
