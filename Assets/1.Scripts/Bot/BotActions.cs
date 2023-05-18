using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class BotActions : MonoBehaviour
{
    float _jumpPower = 2f;
    float _jumpDuration = 0.2f;

    Tween _jumpTween;
    Tween _rotateTween;

    Rigidbody _rb;

    Quaternion _initRot;
    RigidbodyConstraints _initConstraints;

    Animator _anim;

    private void Start()
    {
        _rb = GetComponent<Rigidbody>();
        _initRot = this.transform.rotation;
        _initConstraints = _rb.constraints;
        _anim = GetComponentInChildren<Animator>();
    }

    internal void ResetOptions()
    {
        _anim.Rebind();
        this.transform.rotation = _initRot;
        _rb.constraints = _initConstraints;
    }

    internal void Jump(StairType stair)
    {
        _anim.SetTrigger("Jump");
        Vector3 nextPos = stair.transform.position + stair._basePos;
        _jumpTween = transform.DOJump(nextPos, _jumpPower, 1, _jumpDuration);
    }

    internal void ObjRotateAction(bool isKill)
    {
        Vector3 rotation = new Vector3(0, Random.Range(-90f, 90f), 0);
        float duration = 0.2f;

        if (isKill)
        {
            rotation += new Vector3(Random.Range(-180f, 180f), rotation.y * 2, Random.Range(-180f, 180f));
            duration += 1f;
        }

        Transform modelObjTr = transform.GetChild(0).GetChild(0).GetChild(0).transform;

        _rotateTween = modelObjTr.DORotate(rotation, duration, RotateMode.WorldAxisAdd);
    }

    internal void ObjPunchAction()
    {
        _anim.SetBool("Dead", true);
        transform.DOPunchScale(new Vector3(0.8f, 0.8f, 0.4f), 0.05f).SetEase(Ease.InOutElastic).SetAutoKill(true);
    }

    internal void ObjThrowAction()
    {
        _rb.constraints = RigidbodyConstraints.None;

        _rb.AddForce(new Vector3(Random.Range(-200, 200), 700, -100), ForceMode.Impulse);
    }

    internal void KillAllTweens()
    {
        _jumpTween.Kill();
        _rotateTween.Kill();
    }

    private void OnDisable()
    {
        KillAllTweens();
    }
}
