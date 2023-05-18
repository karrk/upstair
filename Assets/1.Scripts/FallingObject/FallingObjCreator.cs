using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallingObjCreator : Creator
{
    protected override float StartPercent
    { get { return 5; } }

    protected override float LimitPercent
    { get { return 5; } }

    protected override PoolType MyPool
    { get { return GetComponent<PoolType>(); } }

    Vector3 _spawnPos;

    Vector3 _createOffsetPos = new Vector3(3, 3,-10);

    private void Start()
    {
        _percentList = new List<float>();
        InitGenerationPercent();

        EventManager.Instance.AddListener(EVENT_TYPE.CREATOR_MOVE, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);

        StartCoroutine(CreateWaitTime(GetRandomTime()));
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.CREATOR_MOVE)
        {
            _spawnPos = (Vector3)Param + _createOffsetPos;
        }

        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            ReturnAll();
            StopAllCoroutines();
            StartCoroutine(CreateWaitTime(GetRandomTime()));
        }
    }

    public override PoolObject CreateObj()
    {
        int random = Random.Range(0, MyPool.TotalObjCount);

        MyPool.ReturnObj(random);
        PoolObject obj = MyPool.GetPoolObject(random);

        obj.transform.position = _spawnPos;

        StartCoroutine(CreateWaitTime(GetRandomTime()));

        return obj;
    }

    IEnumerator CreateWaitTime(float time)
    {
        yield return new WaitForSeconds(time);
        CreateObj();
    }

    float GetRandomTime()
    {
        float time = _percentList[GameManager.Instance.Level] + Random.Range(-10f, 10f);
        return Mathf.Clamp(time, LimitPercent, float.MaxValue);
    }

    
}
