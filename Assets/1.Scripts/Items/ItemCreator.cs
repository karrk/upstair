using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemCreator : MonoBehaviour , IDistanceInfo
{
    const float LeftAreaNum = (float)1 / 3;
    const float RightAreaNum = (float)2 / 3;

    const float StartPercent = 0.15f;
    const float MinPercent = 0.03f;
    
    float _createPercent;
    List<float> _percentList = new List<float>();

    private readonly Vector3 StartCreatePos = new Vector3(0, 11, 10);

    public static Vector3 _spawnPos;

    public float PlayerDistance
    {
        get
        {
            return _spawnPos.y - Character.Instance.Pos.y;
        }
    }

    Vector3 _initPos;

    void Start()
    {
        _initPos = this.transform.position;
        _spawnPos = StartCreatePos;

        InitGenerationPercent();

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.LEVEL_CHANGED, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);

        _createPercent = GetCreatePercent(0);
        GoAwayObj();
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            _spawnPos = _initPos;
            _createPercent = GetCreatePercent(0);
            GoAwayObj();
        }

        if(eventType == EVENT_TYPE.LEVEL_CHANGED)
        {
            _createPercent = GetCreatePercent((int)Param);
        }

        if (eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            GoAwayObj();
        }
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

    void GoAwayObj()
    {
        while (true)
        {
            if (!isNearby(StairCreator.DISTANCE))
                break;

            float rand = Random.Range(0f, 1f);

            if (CreateCheck(rand))
            {
                ObjPool.Instance.GetObj<I_ItemType>(SetRandomItem());
                _spawnPos = SetRandomPos(_spawnPos);
            }

            _spawnPos += new Vector3(0, 1, 1);
        }
    }

    bool CreateCheck(float targetPercent)
    {
        return _createPercent > targetPercent;
    }

    float GetCreatePercent(int level)
    {
        return _percentList[level];
    }

    ObjectPoolType SetRandomItem()
    {
        float randNum = Random.Range(0f, 1f);

        ObjectPoolType poolType = null;
        float gap = float.MaxValue;

        for (int i = 0; i < ItemPercent.percentList.Count; i++)
        {
            if(randNum < ItemPercent.percentList[i])
            {
                if (0 <= ItemPercent.percentList[i] - randNum && ItemPercent.percentList[i] - randNum < gap)
                {
                    gap = ItemPercent.percentList[i] - randNum;
                    poolType = ObjPool.Instance._itemTypeList[i];
                }   
            }
        }
        return poolType;
    }

    public bool isNearby(float specDistance)
    {
        return specDistance >= PlayerDistance;
    }

    Vector3 SetRandomPos(Vector3 inputVec)
    {
        float randNum = Random.Range(0f, 1f);

        if (LeftAreaNum >= randNum)
            inputVec.x = -2;

        else if ( RightAreaNum <= randNum)
            inputVec.x = 2;

        else
            return inputVec;

        return inputVec;
    }
}
