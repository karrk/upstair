using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class SettingBtn : BaseButton
{
    GameObject _settingPanel;

    protected override void Init()
    {
        base.Init();
        _settingPanel = UIManager.Instance.MainCanvas.Find("SettingPanel").gameObject;
    }

    protected override void BtnAction()
    {
        if (!_settingPanel.activeSelf)
            _settingPanel.SetActive(true);
    }


}
