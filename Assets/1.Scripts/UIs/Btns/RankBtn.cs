using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RankBtn : BaseButton
{
    GameObject _rankPanel;

    protected override void Init()
    {
        base.Init();
        _rankPanel = UIManager.Instance.MainCanvas.Find("RankPanel").gameObject;
    }

    protected override void BtnAction()
    {
        if (!_rankPanel.activeSelf)
            _rankPanel.SetActive(true);
    }
}
