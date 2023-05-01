using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class FadePanel : BasePanel
{
    Image _image;

    protected override void Init()
    {
        base.Init();
        _image = this.gameObject.GetComponent<Image>();
        _image.fillAmount = 1f;
        StartCoroutine(FadeOut());
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType, Component sender, object param = null)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART && (bool)param == true)
        {
            UpLoadPanel();
        }
    }

    protected override void MyAction()
    {
        StartCoroutine(FadeIn());
    }

    IEnumerator FadeOut() // 가리기
    {
        while (true)
        {
            yield return new WaitForSeconds(0.01f);
            _image.fillAmount -= 0.03f;

            if (_image.fillAmount <= 0)
                break;
        }
    }

    IEnumerator FadeIn() // 나오기
    {
        while (true)
        {
            yield return new WaitForSeconds(0.01f);
            _image.fillAmount += 0.03f;

            if (_image.fillAmount >= 1)
                break;
        }
    }
}
