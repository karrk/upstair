using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubObjectCreator : Creator
{
    protected override float StartPercent => throw new System.NotImplementedException();

    protected override float LimitPercent => throw new System.NotImplementedException();

    protected override PoolType MyPool { get { return GetComponent<PoolType>(); } }

    const float CreatePercent = 0.05f;

    private bool IsObectInArea { get { return ValidArea_ZValue > _spawnPos.z; } }
    public bool IsCheckCreate { get { return Random.Range(0f, 1f) <= CreatePercent; } }

    Vector3 _spawnPos;

    float ValidArea_ZValue;
    const float CreateUnit = 0f;
    readonly Vector3 CreateOffset = new Vector3(-1f, -5f, 0f);
    const float ObjectInterval = 12f;

    private void Start()
    {
        ValidArea_ZValue = 2;

        EventManager.Instance.AddListener(EVENT_TYPE.CREATOR_MOVE, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            ReturnAll();
            ValidArea_ZValue = 2;
        }

        if(eventType == EVENT_TYPE.CREATOR_MOVE)
        {
            _spawnPos = (Vector3)Param;

            if (!IsCheckCreate)
                return;

            if (IsObectInArea)
                return;

            SubObject obj = (SubObject)CreateObj();
            obj.transform.position = _spawnPos + CreateOffset;
            
            obj.SetRandomPos();
            obj.SetRandomRot();

            ValidArea_ZValue += CreateUnit + ObjectInterval;
        }
    }

    public override PoolObject CreateObj()
    {
        int rand = Random.Range(0, MyPool.TotalObjCount);

        MyPool.ReturnObj(rand);

        return MyPool.GetPoolObject(rand);
    }


}
