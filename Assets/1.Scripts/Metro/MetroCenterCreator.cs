using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetroCenterCreator : Creator
{
    protected override float StartPercent { get { return 0.05f; } }

    protected override float LimitPercent { get { return 0.1f; } }

    protected override PoolType MyPool
    {
        get { return GetComponent<MetroCenterPool>(); }
    }

    PoolType[] _pools;

    private void Start()
    {
        _pools = GetComponentsInChildren<PoolType>();

        _percentList = new List<float>();
        InitGenerationPercent();

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            ReturnAll();
        }
    }

    public override void ReturnAll()
    {
        //MyPool.ReturnAll();

        for (int i = _pools.Length - 1; i >= 0; i--)
        {
            _pools[i].ReturnAll();
        }
    }

    internal PoolObject GetMetroCenter(Vector3 pos)
    {
        MyPool.ReturnObj(MyPool.TotalObjCount - 1);

        PoolObject obj = MyPool.GetPoolObject(MyPool.TotalObjCount-1);
        obj.transform.position = pos;

        return obj;
    }

    internal bool CkeckCreatePercent()
    {
        return _percentList[GameManager.Instance.Level] > Random.Range(0f, 1f);
    }

    public override PoolObject CreateObj()
    {
        return null;
    }
}
