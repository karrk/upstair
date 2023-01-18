using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class GachaBoll : MonoBehaviour
{
    Vector3 _initPos;
    Animator _anim;

    void Start()
    {
        _anim = GetComponentInChildren<Animator>();
        transform.DOMoveY(10f, 2f).From().SetEase(Ease.OutElastic,0.5f);
    }

    public void GachaOpen()
    {
        _anim.SetBool("Open", true);
    }

    public void GachaReset()
    {
        transform.DOMoveY(10f, 2f).From().SetEase(Ease.OutElastic, 0.5f);
        _anim.SetBool("Open", false);
    }

}
