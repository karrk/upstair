using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Creator : MonoBehaviour
{
    protected List<float> _percentList;

    protected abstract float StartPercent { get; }
    protected abstract float LimitPercent { get; }

    protected abstract PoolType MyPool { get; }

    protected void InitGenerationPercent()
    {
        for (float i = 0; i <= 1; i += 1 / (float)(GameManager.Instance.MaxLevel - 1))
        {
            _percentList.Add(Mathf.Lerp(StartPercent, LimitPercent, i));
        }
    }

    public abstract PoolObject CreateObj();

    public virtual void ReturnAll()
    {
        MyPool.ReturnAll();
    }
}
