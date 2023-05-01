using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class BaseButton : MonoBehaviour
{
    protected float PunchValue = -0.2f;
    protected Button btn;
    protected Vector3 punch;

    void Start()
    {
        Init();
    }

    protected virtual void Init()
    {
        punch = new Vector3(PunchValue, PunchValue, PunchValue);

        btn = this.GetComponent<Button>();

        btn.onClick.AddListener(() => BtnAnimation());
        btn.onClick.AddListener(() => StartCoroutine(WaitBtnAction(0.1f)));
    }

    protected virtual void BtnAnimation()
    {
        transform.DOPunchScale(punch, 0.2f, 0, 0.1f).From();
    }

    protected IEnumerator WaitBtnAction(float time)
    {
        yield return new WaitForSeconds(time);
        BtnAction();
    }

    protected virtual void BtnAction()
    {

    }
}
