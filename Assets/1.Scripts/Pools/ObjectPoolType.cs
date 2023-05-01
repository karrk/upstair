using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPoolType
{
    public Enum _eType;
    public GameObject _prefabObj;
    public Stack<GameObject> _pool;
    public int _poolCount;

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

public class ObjectFXType
{
    public Enum _eType;
    public GameObject _prefabObj;
    public List<GameObject> _list;

    public ObjectFXType(List<GameObject> list, Enum eType, GameObject prefabObj)
    {
        this._list = list;
        this._eType = eType;
        this._prefabObj = prefabObj;
    }

    public void Add(GameObject obj)
    {
        _list.Add(obj);
    }
}
