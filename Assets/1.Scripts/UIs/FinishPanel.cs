using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class FinishPanel : BasePanel
{
    protected override void Init()
    {
        GameManager.Instance.E_reset += ResetOptions;
    }

    void ResetOptions()
    {
        transform.position = _initPos;
    }

    void FixedUpdate()
    {
        if (Character.Instance.IsDead)
        {
            if (this.transform.position == _initPos)
                UpLoadPanel();
        }
    }

    protected override void MyAction()
    {
        transform.DOMoveY(0, 0.8f);
    }
}
