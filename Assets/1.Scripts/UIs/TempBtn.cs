using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempBtn : BaseButton
{
    GameObject _tempPanel;

    protected override void Init()
    {
        base.Init();
        _tempPanel = FindObjectOfType<CanvasControll>().transform.Find("TempPanel").gameObject;
    }

    protected override void BtnAction()
    {
        if (!_tempPanel.activeSelf)
            _tempPanel.SetActive(true);
    }
}
