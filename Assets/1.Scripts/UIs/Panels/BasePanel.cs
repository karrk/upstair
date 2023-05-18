using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class BasePanel : MonoBehaviour
{
    protected Vector3 _initPos;

    void Start()
    {
        _initPos = transform.position;
        Init();
    }

    protected virtual void Init()
    {
        
    }

    protected abstract void MyAction();
}
