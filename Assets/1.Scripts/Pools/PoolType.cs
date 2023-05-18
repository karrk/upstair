using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class PoolType : MonoBehaviour
{
    [SerializeField]
    protected List<GameObject> _prefabList;

    protected abstract Dictionary<int, Queue<PoolObject>> PoolDic { get; }
    protected abstract Dictionary<int, Queue<PoolObject>> OutPoolDic { get; }
    
    protected abstract int InitCount { get; set; }
    protected abstract int MaxCount { get; }

    public int TotalObjCount { get { return _prefabList.Count; } }

    protected virtual void InitPool(int poolNum)
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
            pool.Enqueue(obj);
        }
    }

    protected PoolObject CreateObj(GameObject obj)
    {
        PoolObject tempObj = Instantiate(obj).GetComponent<PoolObject>();

        tempObj.gameObject.SetActive(false);
        tempObj.transform.SetParent(this.transform);

        return tempObj;
    }

    public PoolObject GetPoolObject(int dicNumber)
    {
        PoolObject tempObj;

        if (PoolDic[dicNumber].Count > 0)
        {
            tempObj = PoolDic[dicNumber].Dequeue();
            OutPoolDic[dicNumber].Enqueue(tempObj);

            tempObj.gameObject.SetActive(true);

            return tempObj;
        }

        InitCount *= 2;
        InitPool(dicNumber);

        return GetPoolObject(dicNumber);
    }

    internal virtual void ReturnObj(int dicNumber,bool isAutoMode = true)
    {
        if(OutPoolDic[dicNumber].Count >= MaxCount || !isAutoMode)
        {
            while (true)
            {
                if (OutPoolDic.Count <= 0)
                    break;

                PoolObject obj = OutPoolDic[dicNumber].Dequeue();

                obj.gameObject.SetActive(false);

                PoolDic[dicNumber].Enqueue(obj);

                if (!isAutoMode)
                    break;

                if (OutPoolDic[dicNumber].Count < MaxCount)
                    break;
            }
        }
    }

    internal void ReturnAll()
    {
        for (int i = 0; i < PoolDic.Count; i++)
        {
            while (true)
            {
                if (OutPoolDic[i].Count <= 0)
                    break;

                PoolObject obj = OutPoolDic[i].Dequeue();

                obj.gameObject.SetActive(false);

                PoolDic[i].Enqueue(obj);
            }
        }
    }

}
