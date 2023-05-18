using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StairCreator : Creator
{
    private static StairCreator _instacne;

    public static StairCreator Instance
    {
        get
        {
            if (_instacne == null)
                return null;

            return _instacne;
        }
    }

    private void Awake()
    {
        if(_instacne == null)
            _instacne = this;
    }

    protected override float StartPercent
    { get { return 0.6f; } }

    protected override float LimitPercent
    { get { return 0.1f; } }

    private readonly float _minDistance = 80f;

    private bool IsNearby
    {
        get { return _spawnPos.y < Character.Instance.Pos.y + _minDistance; }
    }

    protected override PoolType MyPool
    {
        get { return GetComponent<PoolType>(); }
    }

    Vector3 _initSpawnPos;
    Vector3 _spawnPos;

    int _stairNum = 1;

    private readonly Vector3 _createUnit = new Vector3(0, 1, 1);

    private readonly Vector3 StartCreatePos = new Vector3(-3, 1, 1);

    public SortedDictionary<int, Stair> _stairDic;

    private void Start()
    {
        _initSpawnPos = this.transform.position;
        _spawnPos = StartCreatePos;

        _stairDic = new SortedDictionary<int, Stair>();
        _percentList = new List<float>();
        InitGenerationPercent();

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);

        CreateObj();
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            ReturnAll();
            _stairDic.Clear();
            _spawnPos = _initSpawnPos;
            _stairNum = 1;
            CreateObj();
        }

        if(eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            CreateObj();
        }
    }

    public override PoolObject CreateObj()
    {
        Stair stair = null;

        while (true)
        {
            if (!IsNearby)
                break;

            stair = GetRandomStair();

            stair.transform.position = _spawnPos;
            stair.name = _stairNum.ToString();

            _stairDic.Add(_stairNum, stair);

            GetComponent<StairColorManager>().SetMaterial(stair);

            _stairNum++;
            _spawnPos += _createUnit;
            EventManager.Instance.PostNotification(EVENT_TYPE.CREATOR_MOVE, this, _spawnPos);
        }

        return stair;
    }

    Stair GetRandomStair()
    {
        float singleStairPercent = _percentList[GameManager.Instance.Level];

        if (Random.Range(0f, 1f) < singleStairPercent)
        {
            MyPool.ReturnObj((int)STAIRTYPE.Single);
            return (Stair)MyPool.GetPoolObject(0);
        }

        int random = Random.Range(1, (int)GetComponent<StairUnlocker>().UnlockedMaxRange);

        MyPool.ReturnObj(random);
        return (Stair)MyPool.GetPoolObject(random);
    }

    internal void RemoveStair(int stairNum)
    {
        _stairDic.Remove(stairNum);
    }
}
