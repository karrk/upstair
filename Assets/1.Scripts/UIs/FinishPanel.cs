using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class FinishPanel : BasePanel
{
    void FixedUpdate()
    {
        if (Character.Instance.IsDead)
        {
            if (this.transform.position == InitPos)
                UpLoadPanel();
        }
    }

    protected override void MyAction()
    {
        transform.DOMoveY(0, 1f);
    }
}
