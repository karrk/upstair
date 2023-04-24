using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RockCreator : MonoBehaviour
{
    private static RockCreator _instance;

    public static RockCreator Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    public GameObject _rockPrefab;

    public static List<Rock> _rockList;

    const float MaximumTime = 15f;
    const float StartFirstTime = 13f;
    const float MinimumTime = 5f;

    //const float MaximumTime = 5f;
    //const float StartFirstTime = 2f;
    //const float MinimumTime = 1f;

    List<float> _timeList = new List<float>();
    /*
     * 일정한 시간대로 생성되는것을 방지하기위해 범위로 지정한다.
     * 아무리 늦어도 최대시간 max초를 넘지 않게하며
     * 분기(레벨)가 지날수록 min초가 줄어들게 만든다.
     * 
     * 이때 시작 1분기시간은 StartFirst시간으로 정의한다.
     * (min초~max초)
     */

    Vector3 InitCreateOffsetPos = new Vector3(0, 90, 90);
    Vector3 _createOffsetPos;

    float _timer;

    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    void Start()
    {
        _createOffsetPos = InitCreateOffsetPos;
        InitGenerationTimes();
        _timer = MaximumTime;

        _rockList = new List<Rock>();
    }

    void InitGenerationTimes()
    {
        float totalGap = StartFirstTime - MinimumTime;
        float interval = totalGap / GameManager.Instance.MaxLevel;

        float time = StartFirstTime;

        for (int i = 0; i < GameManager.Instance.MaxLevel; i++)
        {
            time = StartFirstTime - (interval * i);

            if (time < MinimumTime)
                time = MinimumTime;

            _timeList.Add(time);
        }
    }

    float GetRandomTime()
    {
        float selectMinTime = _timeList[GameManager.Instance.Level];

        return Random.Range(selectMinTime, MaximumTime);
    }

    public void ResetOptions()
    {
        _createOffsetPos = InitCreateOffsetPos;
        RockClear();
        _timer = MaximumTime;
    }

    void RockClear()
    {
        _rockList = new List<Rock>();
    }

    public static void AddRock(Rock rockObj)
    {
        _rockList.Add(rockObj);
    }

    public static void RemoveRock(Rock rockObj)
    {
        _rockList.Remove(rockObj);
    }

    void FixedUpdate()
    {
        if (Character.Instance.IsDead)
            return;

        if(_timer > 0)
        {
            _timer -= Time.deltaTime;
        }
        else
        {
            Instantiate(_rockPrefab,
                this.transform.position + _createOffsetPos,
                Quaternion.identity
                );
            _timer = GetRandomTime();
        }
    }

    public void Move()
    {
        _createOffsetPos += new Vector3(0, CheckDistance(), CheckDistance());
    }

    int CheckDistance()
    {
        return (int)(Mathf.RoundToInt(Character.Instance.Pos.y) - (Character.Instance.LastPosY));
    }
}
