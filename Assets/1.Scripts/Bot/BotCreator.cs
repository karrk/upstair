using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotCreator : Creator
{
    private static BotCreator _instance;

    public static BotCreator Instance
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
        if (_instance == null)
            _instance = this;
    }

    protected override float StartPercent { get { return 0.1f; } }

    protected override float LimitPercent { get { return 0.5f; } }

    protected override PoolType MyPool { get { return GetComponent<PoolType>(); } }

    const int CreateOffsetStair = 40;

    StairType _spawnStair;

    const int MinimumScore = 10;

    private bool IsCheckMinScore
    {
        get { return ScoreManager.Instance.Score > MinimumScore ? true : false; }
    }

    private bool IsCheckCreatePercent
    {
        get { return _percentList[GameManager.Instance.Level] > Random.Range(0f, 1f) ? true : false; }
    }

    BotObj _currentBot;

    private void Start()
    {
        EventManager.Instance.AddListener(EVENT_TYPE.CREATOR_MOVE, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        _percentList = new List<float>();

        InitGenerationPercent();

        if(eventType == EVENT_TYPE.CREATOR_MOVE)
        {
            if (!IsCheckMinScore || !IsCheckCreatePercent || _currentBot != null)
                return;

            _spawnStair = FindStair(CreateOffsetStair);
            CreateObj();
        }

        if (eventType == EVENT_TYPE.GAME_RESTART)
        {
            ReturnAll();
            _currentBot = null;
        }
            
    }

    Stair FindStair(int alphaValue)
    {
        if (Character.Instance.CurrentStair == null)
            return null;

        int currentNum = int.Parse(Character.Instance.CurrentStair.name);
        int nextStairNum = currentNum + alphaValue;

        while (true)
        {
            if (StairCreator.Instance._stairDic.ContainsKey(nextStairNum))
                return StairCreator.Instance._stairDic[nextStairNum];

            nextStairNum++;
        }
    }

    public override PoolObject CreateObj()
    {
        PoolObject obj = MyPool.GetPoolObject(MyPool.TotalObjCount - 1);
        obj.transform.position = _spawnStair.transform.position + _spawnStair._basePos;
        _currentBot = (BotObj)obj;

        return obj;
    }

    internal void ReturnObj(BotObj obj)
    {
        MyPool.ReturnObj(0, false);
        _currentBot = null;
    }

}
