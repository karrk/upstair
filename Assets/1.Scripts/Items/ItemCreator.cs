using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemCreator : MonoBehaviour , IDistanceInfo
{
    const float LeftAreaNum = (float)1 / 3;
    const float RightAreaNum = (float)2 / 3;

    const float StartPercent = 0.15f;
    const float MinPercent = 0.03f;
    
    System.Random _rand;
    private float _TotalCreatePercent;

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

    public void ResetOptions()
    {
        this.transform.position = _initPos;
    }

    void Start()
    {
        _initPos = this.transform.position;
        _spawnPos = StartCreatePos;
        _rand = new System.Random(System.Guid.NewGuid().GetHashCode());

        GameManager.Instance.E_reset += ResetOptions;
        InitGenerationPercent();
    }

    void InitGenerationPercent()
    {
        float percentGap = StartPercent - MinPercent;
        float interval = percentGap / GameManager.Instance.TotalQuater;

        float percent = StartPercent;

        for (int i = 1; i <= GameManager.Instance.TotalQuater; i++)
        {
            percent = StartPercent - (interval * i);

            if (percent < MinPercent)
                percent = MinPercent;

            _percentList.Add(percent);
        }
    }

    void FixedUpdate()
    {
        if (isNearby(StairCreator.DISTANCE))
        {
            float randNum = (float)_rand.NextDouble();

            if (CheckCreatePercent(randNum)) 
            {
                ObjPool.Instance.GetObj<I_ItemType>(GetRandomItem());
                _spawnPos = SetRandomPos(_spawnPos);
            }

            _spawnPos += new Vector3(0, 1, 1);
        }
    }

    bool CheckCreatePercent(float targetPercent)
    {
        _TotalCreatePercent = GetCreatePercent();

        return _TotalCreatePercent > targetPercent;
    }

    float GetCreatePercent()
    {
        float selectPercent = _percentList[GameManager.Instance.CurrentQuater];

        return selectPercent;
    }

    ObjectPoolType GetRandomItem()
    {
        float randNum = (float)_rand.NextDouble();

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
        float randNum = (float)_rand.NextDouble();

        if (LeftAreaNum >= randNum)
            inputVec.x = -2;

        else if ( RightAreaNum <= randNum)
            inputVec.x = 2;

        else
            return inputVec;

        return inputVec;
    }
}
