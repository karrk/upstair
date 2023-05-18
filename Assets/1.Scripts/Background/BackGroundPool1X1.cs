using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackGroundPool1X1 : PoolType
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

    int _initCount = 5;

    protected override int MaxCount
    {
        get { return 10; }
    }

    private void Start()
    {
        _poolDic = new Dictionary<int, Queue<PoolObject>>();
        _outPooldic = new Dictionary<int, Queue<PoolObject>>();

        for (int i = 0; i < TotalObjCount; i++)
        {
            InitPool(i);
        }
    }

    protected override void InitPool(int poolNum)
    {
        Queue<PoolObject> pool;

        if (!PoolDic.ContainsKey(poolNum))
        {
            PoolDic.Add(poolNum, new Queue<PoolObject>());
            OutPoolDic.Add(poolNum, new Queue<PoolObject>());
        }

        pool = PoolDic[poolNum];

        for (int i = 0; i < InitCount; i++)
        {
            PoolObject obj = CreateObj(_prefabList[poolNum]);
            obj.GetComponent<BackGroundObj>().MySize = BackGroundSize.ONExONE;
            pool.Enqueue(obj);
        }
    }
}
