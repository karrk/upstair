using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloseBtn : BaseButton
{
    public GameObject _parent;

    public override void BtnAction()
    {
        if (_parent.activeSelf)
            _parent.SetActive(false);
    }
}
