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

    public override void Init()
    {
        base.Init();
        IsRestart = false;
    }

    public override void BtnAction()
    {
        IsRestart = true;
        StartCoroutine(Restart());
    }

    IEnumerator Restart()
    {
        yield return new WaitForSeconds(1f);
        GameManager.Instance.Restart();
    }
}
