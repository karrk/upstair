using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BasePanel : MonoBehaviour, IPanel
{
    protected Vector3 _initPos;

    void Start()
    {
        Init();
    }

    protected virtual void Init()
    {
        _initPos = transform.position;
    }

    public void PanelAction()
    {
        MyAction();
    }

    public void UpLoadPanel()
    {
        IPanel.CurrentPanel = this;
    }

    protected virtual void MyAction()
    {

    }
}
