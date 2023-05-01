using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempBtn : BaseButton
{
    GameObject _tempPanel;

    protected override void Init()
    {
        base.Init();
        _tempPanel = UIManager.Instance.MainCanvas.Find("TempPanel").gameObject;
    }

    protected override void BtnAction()
    {
        if (!_tempPanel.activeSelf)
            _tempPanel.SetActive(true);
    }
}
