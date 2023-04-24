using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RankBtn : BaseButton
{
    GameObject _rankPanel;

    protected override void Init()
    {
        base.Init();
        _rankPanel = FindObjectOfType<CanvasControll>().transform.Find("RankPanel").gameObject;
    }

    protected override void BtnAction()
    {
        if (!_rankPanel.activeSelf)
            _rankPanel.SetActive(true);
    }
}
