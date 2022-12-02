using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPoolType
{
    public Enum _eType;
    public GameObject _prefabObj;
    public Stack<GameObject> _pool;

    public ObjectPoolType(Stack<GameObject> pool, Enum eType, GameObject prefabObj)
    {
        this._pool = pool;
        this._eType = eType;
        this._prefabObj = prefabObj;
    }

    public void Push(GameObject obj)
    {
        _pool.Push(obj);
    }

    public GameObject Pop()
    {
        return _pool.Pop();
    }
}
