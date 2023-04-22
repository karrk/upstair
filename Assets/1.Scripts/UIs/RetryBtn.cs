using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RetryBtn : BaseButton
{
    bool IsRestart
    {
        set
        {
            if (value == true)
                EventManager.Instance.PostNotification(EVENT_TYPE.GAME_RESTART, this, value);
        }
    }

    protected override void Init()
    {
        base.Init();
        IsRestart = false;
    }

    protected override void BtnAction()
    {
        IsRestart = true;
        StartCoroutine(Restart());
    }

    protected IEnumerator Restart()
    {
        yield return new WaitForSeconds(1f);
        GameManager.Instance.Restart();
    }
}
