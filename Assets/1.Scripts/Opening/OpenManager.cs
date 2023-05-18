using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using TMPro;

public class OpenManager : MonoBehaviour
{
    Camera _cam;
    Color _targetColor;

    [SerializeField]
    TextMeshProUGUI _needText;

    [SerializeField]
    Button _updateBtn;

    [SerializeField]
    GameObject _noticePanel;

    [SerializeField]
    GameObject _mainLogo;

    float h = 205f / 360f;
    float s = 44f / 100f;
    float v = 100f / 100f;

    private void Start()
    {
        _cam = Camera.main;
        _targetColor = Color.HSVToRGB(h, s, v);
    }

    public void ColorChange()
    {
        _cam.DOColor(_targetColor, 2f);
    }

    public void Warning()
    {
        _noticePanel.SetActive(true);
        StartCoroutine(WarningText());
        _updateBtn.gameObject.SetActive(false);
    }

    IEnumerator WarningText()
    {
        while (true)
        {
            _needText.text = "긴급점검중";
            yield return new WaitForSeconds(1f);
            _needText.text = "긴급점검중.";
            yield return new WaitForSeconds(1f);
            _needText.text = "긴급점검중..";
            yield return new WaitForSeconds(1f);
        }
    }
    
    public void MissMatchAction()
    {
        _noticePanel.SetActive(true);
        _needText.text = "업데이트버전를 받아주세요!";
        _updateBtn.onClick.AddListener(() => OpenURL());
    }

    public void MatchAction()
    {
        ColorChange();

        StartCoroutine(PunchLogo());

    }

    void OpenURL()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.karkproject.upstair&hl=ko&gl=US");
    }

    IEnumerator PunchLogo()
    {
        yield return new WaitForSeconds(0.5f);

        _mainLogo.SetActive(true);
        Animator anim = _mainLogo.GetComponent<Animator>();

        anim.SetBool("Play", true);
    }
}
