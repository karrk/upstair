using System.Collections;
using System.Collections.Generic;
using UnityEngine;

enum StairType
{
    Single = 0,
    Double = 1,
    Left = 2,
    Right = 3,

    Circle = 4,
    CircleLeft = 5,
    CircleRight = 6,

    RightMove = 7,
    LeftMove = 8,
}

public class StairCreator : MonoBehaviour, IDistanceInfo
{
    public static float DISTANCE = 100f;

    const float StartPercent = 0.7f;
    const float MinPercent = 0.1f;

    private int _stairNumber = 1;

    public static Dictionary<GameObject, int> _stairDic = new Dictionary<GameObject, int>();
    public static List<GameObject> _stairList = new List<GameObject>();

    private readonly Vector3 StartCreatePos = new Vector3(-3, 1, 1);

    public static Vector3 _spawnPos;

    public float PlayerDistance
    {
        get
        {
            return _spawnPos.y - Character.Instance.Pos.y;
        }
    }

    List<float> _percentList = new List<float>();

    Vector3 _initPos;

    int _createRangeNum;

    const float _firstCircleUnlockProgress = 0.05f;
    const float _secondCircleUnlockProgress = 0.2f;
    const float _moveUnlockProgress = 0.5f;
    
    bool _firstCircleStairUnlock = false;
    bool _secondCircleStairUnlock = false;
    bool _moveStairUnlock = false;

    int _startStairCount = 5;

    public void ResetOptions()
    {
        _startStairCount = 5;

        _createRangeNum = (int)StairType.Right;

        _stairNumber = 1;

        this.transform.position = _initPos;
        _spawnPos = StartCreatePos;

        ReturnAllStair();
        _stairList = new List<GameObject>();
    }

    void ReturnAllStair()
    {
        foreach (var item in _stairDic.Keys)
        {
            item.GetComponent<Stair>().Return();
        }

        _stairDic = new Dictionary<GameObject, int>();
    }

    void SetCreateRange()
    {
        float progress = (float)GameManager.Instance.Level / (float)GameManager.Instance.MaxLevel;

        if (!_firstCircleStairUnlock && progress > _firstCircleUnlockProgress)
        {
            _firstCircleStairUnlock = true;
            _createRangeNum = (int)StairType.Circle;
        }

        else if (!_secondCircleStairUnlock && progress > _secondCircleUnlockProgress)
        {
            _firstCircleStairUnlock = true;
            _createRangeNum = (int)StairType.CircleRight;
        }

        else if (!_moveStairUnlock && progress > _moveUnlockProgress)
        {
            _moveStairUnlock = true;
            _createRangeNum = (int)StairType.RightMove;
        }
            
    }

    void Start()
    {
        _startStairCount = 5;

        _createRangeNum = (int)StairType.Right;

        _initPos = this.transform.position;

        _spawnPos = StartCreatePos;

        InitGenerationPercent();
        GameManager.Instance.E_reset += ResetOptions;

        EventManager.Instance.AddListener(EVENT_TYPE.LEVEL_CHANGED, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if (eventType == EVENT_TYPE.LEVEL_CHANGED)
            SetCreateRange();
    }

    void InitGenerationPercent()
    {
        float percentGap = StartPercent - MinPercent;
        float interval = percentGap / GameManager.Instance.MaxLevel;

        float percent = StartPercent;

        for (int i = 0; i <= GameManager.Instance.MaxLevel; i++)
        {
            percent = StartPercent - (interval * i);

            if (percent < MinPercent)
                percent = MinPercent;

            _percentList.Add(percent);

        }
    }

    void FixedUpdate()
    {
        if (isNearby(DISTANCE))
        {
            GameObject newStair =
                ObjPool.Instance.GetObj<IStairType>(SetRandomStair());

            newStair.name = (_stairNumber++).ToString();

            if (_stairDic.ContainsKey(newStair))
            {
                _stairDic[newStair] = int.Parse(newStair.name);
            }
            else
            {
                _stairDic.Add(newStair, int.Parse(newStair.name));
                _stairList.Add(newStair);
            }

            _spawnPos += new Vector3(0, 1, 1);
        }
    }

    public bool isNearby(float specDistance)
    {
        return specDistance >= PlayerDistance;
    }

    ObjectPoolType SetRandomStair()
    {
        ObjectPoolType stairType = null;

        float selectPercent = _percentList[GameManager.Instance.Level];

        stairType = SelectStair(selectPercent);

        return stairType;
    }

    ObjectPoolType SelectStair(float percent)
    {
        if (_startStairCount > 0)
        {
            _startStairCount--;
            return ObjPool.Instance._stairTypeList[(int)ObjPool.StairType.SINGLE];
        }

            float randNum = Random.Range(0f, 1f);

        if (percent > randNum) // 0.7 > randNum
            return ObjPool.Instance._stairTypeList[(int)ObjPool.StairType.SINGLE];

        else
        {
            int randStairNum = Random.Range((int)StairType.Left, _createRangeNum+1);

            if (randStairNum == (int)ObjPool.StairType.DOUBLE)
            {
                _spawnPos += new Vector3(0, 1, 1);
                _stairNumber++;
            }

            return ObjPool.Instance._stairTypeList[randStairNum];
        }
    }
}


