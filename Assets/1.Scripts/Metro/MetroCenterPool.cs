using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetroCenterPool : PoolType
{
    protected override Dictionary<int, Queue<PoolObject>> PoolDic
    {
        get { return _poolDic; }
    }

    protected override Dictionary<int, Queue<PoolObject>> OutPoolDic
    {
        get { return _outPooldic; }
    }

    private Dictionary<int, Queue<PoolObject>> _poolDic;
    private Dictionary<int, Queue<PoolObject>> _outPooldic;

    protected override int InitCount
    {
        get { return _initCount; }
        set { _initCount = value; }
    }

    int _initCount = 10;

    protected override int MaxCount { get { return 20; } }

    
    private void Start()
    {
        _poolDic = new Dictionary<int, Queue<PoolObject>>();
        _outPooldic = new Dictionary<int, Queue<PoolObject>>();

        for (int i = 0; i < _prefabList.Count; i++)
        {
            InitPool(i);
        }
    }
}
