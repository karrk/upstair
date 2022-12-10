using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class BaseButton : MonoBehaviour
{
    const float PunchValue = -0.2f;
    protected Button btn;
    Vector3 punch;

    void Start()
    {
        Init();
    }

    public virtual void Init()
    {
        punch = new Vector3(PunchValue, PunchValue, PunchValue);

        btn = this.GetComponent<Button>();

        btn.onClick.AddListener(() => BtnAnimation());
        btn.onClick.AddListener(() => StartCoroutine(WaitBtnAction(0.1f)));
    }

    void BtnAnimation()
    {
        transform.DOPunchScale(punch, 0.2f, 0, 0.1f).From();
    }

    IEnumerator WaitBtnAction(float time)
    {
        yield return new WaitForSeconds(time);
        BtnAction();
    }

    public virtual void BtnAction()
    {

    }
}
