using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;

public class UIManager : MonoBehaviour
{
    private static UIManager _instance;

    public static UIManager Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    HorizontalLayoutGroup _moveBtn_HL;
    bool _isMoveBtnAction = false;
    float _initMoveBtnSpacing;
    const float _setMoveBtnSpacing = -1830f;

    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    private void Start()
    {
        _moveBtn_HL = FindObjectOfType<MoveBtnControll>().GetComponent<HorizontalLayoutGroup>();
        _initMoveBtnSpacing = _moveBtn_HL.spacing;

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_INPUT_SIGN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CHARACTER_DEAD, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_INPUT_SIGN)
        {
            if (!_isMoveBtnAction && !Character.Instance.IsDead)
            {
                StartCoroutine(MoveBtnAction());
            }
        }

        if(eventType == EVENT_TYPE.CHARACTER_DEAD)
        {
            _moveBtn_HL.spacing = _initMoveBtnSpacing;
            _isMoveBtnAction = false;
        }
    }

    void FixedUpdate()
    {
        if (IPanel.CurrentPanel != null)
        {
            IPanel.CurrentPanel.PanelAction();
            IPanel.CurrentPanel = null;
        }
    }

    IEnumerator MoveBtnAction()
    {
        while (true)
        {
            if (_moveBtn_HL.spacing <= _setMoveBtnSpacing)
                break;

            _moveBtn_HL.spacing -= 200f;

            yield return null;
        }

        _moveBtn_HL.spacing = _setMoveBtnSpacing;
        _isMoveBtnAction = true;
    }

}
