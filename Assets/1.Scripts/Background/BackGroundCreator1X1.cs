using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackGroundCreator1X1 : Creator
{
    protected override float StartPercent => throw new System.NotImplementedException();

    protected override float LimitPercent => throw new System.NotImplementedException();

    protected override PoolType MyPool { get { return GetComponent<PoolType>(); } }

    public override PoolObject CreateObj()
    {
        int rand = Random.Range(0, MyPool.TotalObjCount);

        MyPool.ReturnObj(rand);

        return MyPool.GetPoolObject(rand);
    }
}
