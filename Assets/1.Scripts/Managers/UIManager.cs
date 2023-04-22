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

    private bool _isOnUIElemnet;

    public bool IsOnUIElement
    {
        get
        {
            CheckUIElement();
            return _isOnUIElemnet;
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

    void CheckUIElement()
    {
        if (EventSystem.current.IsPointerOverGameObject())
            _isOnUIElemnet = true;
    }

    public void InitOnUIProperties()
    {
        _isOnUIElemnet = false;
    }

}
