using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopBtn : BaseButton
{
    GameObject _shopPaenl;

    protected override void Init()
    {
        base.Init();
        _shopPaenl = FindObjectOfType<CanvasControll>().transform.Find("ShopPanel").gameObject;
    }

    protected override void BtnAction()
    {
        if (!_shopPaenl.activeSelf)
            _shopPaenl.SetActive(true);
    }
}
