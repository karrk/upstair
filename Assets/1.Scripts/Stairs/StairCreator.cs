using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StairCreator : MonoBehaviour, IDistanceInfo
{
    public static float DISTANCE = 100f;

    const float StartPercent = 0.7f;
    const float MinPercent = 0.1f;

    private int _stairNumber = 1;
    System.Random _rand;

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

    public void ResetOptions()
    {
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

    void Start()
    {
        _initPos = this.transform.position;

        _rand = new System.Random(System.Guid.NewGuid().GetHashCode());

        _spawnPos = StartCreatePos;

        InitGenerationPercent();
        GameManager.Instance.E_reset += ResetOptions;
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
        if (isNearby(DISTANCE))
        {
            GameObject newStair =
                ObjPool.Instance.GetObj<IStairType>(GetRandomStair());

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

    ObjectPoolType GetRandomStair()
    {
        ObjectPoolType stairType = null;

        float selectPercent = _percentList[GameManager.Instance.CurrentQuater];

        stairType = SelectStair(selectPercent);

        return stairType;
    }

    ObjectPoolType SelectStair(float percent)
    {
        float randNum = (float)_rand.NextDouble();

        if (percent > randNum)
            return ObjPool.Instance._stairTypeList[(int)ObjPool.StairType.SINGLE];
        
        else
        {
            int randStairNum = _rand.Next(1, ObjPool.Instance._stairTypeList.Count);

            if(randStairNum == (int)ObjPool.StairType.DOUBLE)
            {
                _spawnPos += new Vector3(0, 1, 1);
                _stairNumber++;
            }

            return ObjPool.Instance._stairTypeList[randStairNum];
        }
    }
}


