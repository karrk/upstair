using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReStartBtn : BaseButton
{
    protected override void BtnAction()
    {
        StartCoroutine(Restart());
    }

    protected IEnumerator Restart()
    {
        yield return new WaitForSeconds(1f);
        GameManager.Instance.Restart();
    }
}
