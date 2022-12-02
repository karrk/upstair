using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

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

    public bool IsOnUIElement
    {
        get
        {
            return CheckUIElement();
        }
    }

    void Start()
    {

    }

    void FixedUpdate()
    {
        if (IPanel.CurrentPanel != null)
        {
            IPanel.CurrentPanel.PanelAction();
            IPanel.CurrentPanel = null;
        }
    }

    bool CheckUIElement()
    {
        return EventSystem.current.IsPointerOverGameObject();
    }

    // 버튼이 할 기능들
    // 함수 동작 - 패널 열기, 랭킹 보기, 다시 하기, 광고 보기, 옵션 설정하기
}
