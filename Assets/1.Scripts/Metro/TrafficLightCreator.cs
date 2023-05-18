using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficLightCreator : Creator
{
    protected override float StartPercent => throw new NotImplementedException();

    protected override float LimitPercent => throw new NotImplementedException();

    protected override PoolType MyPool { get { return GetComponent<PoolType>(); } }

    public override PoolObject CreateObj()
    {
        throw new NotImplementedException();
    }

    internal PoolObject GetTrafficLight(Vector3 pos)
    {
        MyPool.ReturnObj(MyPool.TotalObjCount - 1);

        PoolObject obj = MyPool.GetPoolObject(MyPool.TotalObjCount - 1);
        obj.transform.position = pos;

        return obj;
    }
}
