using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WarningPointerCreator : Creator
{
    private static WarningPointerCreator _instance;

    public static WarningPointerCreator Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    private void Awake()
    {
        if(_instance == null)
        {
            _instance = this;
        }
    }

    protected override float StartPercent { get { return -1; } }

    protected override float LimitPercent { get { return -1; } }

    protected override PoolType MyPool { get { return GetComponent<PoolType>(); } }

    public override PoolObject CreateObj()
    {
        throw new System.NotImplementedException();
    }

    internal WarningObj GetWarning(StairType targetStair)
    {
        WarningObj obj;

        if(targetStair._isCircle)
            obj = (WarningObj)MyPool.GetPoolObject((int)WarningType.Circle);
        
        else
            obj = (WarningObj)MyPool.GetPoolObject((int)WarningType.Box);

        obj.transform.position = targetStair.transform.position + targetStair._basePos;

        return obj;
    }

    internal void CallReturn(WarningObj obj)
    {
        MyPool.ReturnObj((int)obj._myType,false);
    }
}
