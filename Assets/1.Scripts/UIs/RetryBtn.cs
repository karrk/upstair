using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RetryBtn : BaseButton
{
    public override void BtnAction()
    {
        GameManager.Instance.Restart(); // �۵��� ��
    }
}
