using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Text;
using System;

public class ScoreTextControll : MonoBehaviour
{
    TextMeshProUGUI _scoreText;
    StringBuilder _sb;
    float _initFontSize;

    private void Start()
    {
        _scoreText = GetComponentInChildren<TextMeshProUGUI>();
        _sb = new StringBuilder();

        _initFontSize = _scoreText.fontSize;

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CHARACTER_DEAD, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTINUE, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.CHARACTER_DEAD)
        {
            _scoreText.gameObject.SetActive(false);
        }

        if (eventType == EVENT_TYPE.GAME_RESTART)
        {
            _scoreText.text = 0.ToString();
            _sb.Clear();
            _scoreText.gameObject.SetActive(true);
        }

        if (eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            RenewalText();
            StartCoroutine(TextAnim(_initFontSize - 0.3f, _initFontSize + 1f, 0.5f));
        }

        if(eventType == EVENT_TYPE.CONTINUE)
        {
            _scoreText.gameObject.SetActive(true);
        }    
    }

    IEnumerator TextAnim(float minSize, float maxSize, float alphaValue)
    {
        bool isMax = false;

        while (true)
        {
            if (_scoreText.fontSize >= maxSize)
            {
                isMax = true;
                break;
            }
            _scoreText.fontSize += alphaValue;

            yield return null;
        }

        if (!isMax)
            yield return null;

        while (true)
        {
            if (_scoreText.fontSize <= minSize)
                break;

            _scoreText.fontSize -= alphaValue;

            yield return null;
        }
        _scoreText.fontSize = _initFontSize;
    }

    void RenewalText()
    {
        _sb.Clear();
        _sb.Append(ScoreManager.Instance.Score);
        _scoreText.text = _sb.ToString();
    }
}
