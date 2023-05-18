using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StairPool : PoolType
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

    int _initCount = 30;

    protected override int MaxCount
    {
        get { return 80; }
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

    internal override void ReturnObj(int dicNumber,bool isAutoMode = true)
    {
        if (OutPoolDic[dicNumber].Count >= MaxCount)
        {
            while (true)
            {
                if (OutPoolDic[dicNumber].Count < MaxCount)
                    break;

                PoolObject obj = OutPoolDic[dicNumber].Dequeue();

                obj.gameObject.SetActive(false);

                PoolDic[dicNumber].Enqueue(obj);

                StairCreator.Instance.RemoveStair(int.Parse(obj.name));
            }
        }
    }
}

