using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BasePanel : MonoBehaviour, IPanel
{
    protected virtual Vector3 InitPos { get; set; }

    void Start()
    {
        InitPos = transform.position;
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
