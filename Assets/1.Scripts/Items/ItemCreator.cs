
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemCreator : Creator
{
    protected override float StartPercent
    { get { return 0.1f; } }

    protected override float LimitPercent
    { get { return 0.07f; } }

    protected override PoolType MyPool
    { get { return GetComponent<ItemPool>(); }}

    Vector3 _spawnPos;

    readonly Vector3 _offsetPos = new Vector3(3,0,-0.6f);

    bool ItemCreateCheck
    {
        get { return _percentList[GameManager.Instance.Level] > Random.Range(0f, 1f) ? true : false; }
    }

    int _waitCount = 10;

    private void Start()
    {
        _spawnPos = this.transform.position;
        _percentList = new List<float>();
        InitGenerationPercent();

        EventManager.Instance.AddListener(EVENT_TYPE.CREATOR_MOVE, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        _waitCount = 10;

        CreateObj();
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            ReturnAll();
            _waitCount = 10;
            CreateObj();
        }

        if(eventType == EVENT_TYPE.CREATOR_MOVE)
        {
            this._spawnPos = (Vector3)Param + _offsetPos;
            CreateObj();
        }
    }

    public override PoolObject CreateObj()
    {
        if(_waitCount > 0)
        {
            _waitCount--;
            return null;
        }

        if (!ItemCreateCheck)
            return null;

        PoolObject obj = MyPool.GetPoolObject((int)GetComponent<ItemPercent>().GetRandomItem());
        obj.transform.position = _spawnPos + GetRandomPos();

        return obj;
    }

    Vector3 GetRandomPos()
    {
        int random = Random.Range(0, 3);

        if (random == 0)
            return new Vector3(-2, 0, 0);
        else if (random == 1)
            return new Vector3(2, 0, 0);
        return Vector3.zero;
    }
}
