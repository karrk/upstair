using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

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

    public static SortedDictionary<int, GameObject> _dic = new SortedDictionary<int, GameObject>();

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

    const float _firstCircleUnlockProgress = 0.05f;
    const float _secondCircleUnlockProgress = 0.2f;
    const float _moveUnlockProgress = 0.5f;
    
    bool _firstCircleStairUnlock = false;
    bool _secondCircleStairUnlock = false;
    bool _moveStairUnlock = false;

    int _startSafeStairCount;

    StairType _stairLimit;

    void Start()
    {
        _startSafeStairCount = 5;

        _stairLimit = StairType.Right;

        _initPos = this.transform.position;

        _spawnPos = StartCreatePos;

        InitGenerationPercent();

        EventManager.Instance.AddListener(EVENT_TYPE.LEVEL_CHANGED, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);

        GoAway();
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if (eventType == EVENT_TYPE.LEVEL_CHANGED)
            _stairLimit = SetCreateRange();

        if (eventType == EVENT_TYPE.GAME_RESTART)
        {
            ReturnAllStair();

            _startSafeStairCount = 5;

            _stairLimit = StairType.Right;

            _stairNumber = 1;

            this.transform.position = _initPos;
            _spawnPos = StartCreatePos;

            GoAway();
        }

        if(eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            GoAway();
        }
    }

    void GoAway()
    {
        while (true)
        {
            if (!isNearby(DISTANCE))
                break;

            GameObject newStair =
            ObjPool.Instance.GetObj<IStairType>(SetRandomStair());

            GetComponent<StairColorManager>().SetMaterial(newStair.GetComponent<Stair>());

            _dic.Add(_stairNumber, newStair);

            newStair.name = (_stairNumber).ToString();

            _stairNumber++;
            _spawnPos += new Vector3(0, 1, 1);
        }
    }

    public bool isNearby(float specDistance)
    {
        return specDistance >= PlayerDistance;
    }

    StairType SetCreateRange()
    {
        float progress = GameManager.Instance.GameProgress;

        if (!_firstCircleStairUnlock && progress > _firstCircleUnlockProgress)
        {
            _firstCircleStairUnlock = true;
            return StairType.Circle;
        }

        else if (!_secondCircleStairUnlock && progress > _secondCircleUnlockProgress)
        {
            _firstCircleStairUnlock = true;
            return StairType.CircleRight;
        }

        else if (!_moveStairUnlock && progress > _moveUnlockProgress)
        {
            _moveStairUnlock = true;
            return StairType.RightMove;
        }

        return _stairLimit;
            
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

    ObjectPoolType SetRandomStair()
    {
        ObjectPoolType stairType = null;

        float selectPercent = _percentList[GameManager.Instance.Level];

        stairType = SelectStair(selectPercent);

        return stairType;
    }

    ObjectPoolType SelectStair(float percent)
    {
        if (_startSafeStairCount > 0)
        {
            _startSafeStairCount--;
            return ObjPool.Instance._stairTypeList[(int)ObjPool.StairType.SINGLE];
        }

            float randNum = Random.Range(0f, 1f);

        if (percent > randNum) // 0.7 > randNum
            return ObjPool.Instance._stairTypeList[(int)ObjPool.StairType.SINGLE];

        else
        {
            int randStairNum = Random.Range((int)StairType.Left, (int)_stairLimit + 1);

            if (randStairNum == (int)ObjPool.StairType.DOUBLE)
            {
                _spawnPos += new Vector3(0, 1, 1);
                _stairNumber++;
            }

            return ObjPool.Instance._stairTypeList[randStairNum];
        }
    }

    void ReturnAllStair()
    {
        int firstIdx = _dic.Keys.First();
        int lastIdx = _dic.Count - 1 + firstIdx;

        for (int i = lastIdx; i >= firstIdx; i--)
        {
            Stair stair = _dic[i].GetComponent<Stair>();
            stair.ReturnStair();
        }
    }
}


