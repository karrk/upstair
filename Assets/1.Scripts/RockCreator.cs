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

    const float MaximumTime = 40f;
    const float MinimumTime = 5f;

    List<float> _timeList = new List<float>();
    
    Vector3 InitCreateOffsetPos = new Vector3(0, 90, 90);
    Vector3 _createOffsetPos;

    const float CreateRandomOffsetTime = 10f; // -10 , 10 만큼의 오차시간발생
    float _rockCreateProgress;
    bool _rockCreating;
    bool _isCoroutineRunning;

    int _timeIdx;


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
        _timeList = InitGenerationTimes();
        _rockCreateProgress = 0f;
        _rockCreating = false;
        _isCoroutineRunning = false;
        _timeIdx = 0;

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.LEVEL_CHANGED, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            _createOffsetPos = InitCreateOffsetPos;
            _rockCreating = false;
            _isCoroutineRunning = false;
            _timeIdx = 0;
        }

        if(eventType == EVENT_TYPE.LEVEL_CHANGED)
        {
            _timeIdx = (int)Param;
        }

        if(eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            _createOffsetPos += MovedDistance();

            if (_rockCreating)
                return;

            if(_rockCreateProgress <= GameManager.Instance.GameProgress)
            {
                _isCoroutineRunning = true;
                _rockCreating = true;

                GetRock();
            }
        }
    }

    IEnumerator SetRockCreateTime(float time)
    {
        yield return new WaitForSeconds(time);

        GetRock();
    }

    void GetRock()
    {
        if (Character.Instance.IsDead || !_isCoroutineRunning)
            return;

        GameObject rock = Instantiate(_rockPrefab,
                this.transform.position + _createOffsetPos,
                Quaternion.identity
                );

        float time = GetTime(_timeIdx);

        StartCoroutine(SetRockCreateTime(time));
    }

    float GetTime(int idx)
    {
        float tempTime = _timeList[idx];
        tempTime += Random.Range(-CreateRandomOffsetTime, CreateRandomOffsetTime);

        if (tempTime < MinimumTime)
            return MinimumTime;

        return tempTime;
    }

    List<float> InitGenerationTimes()
    {
        List<float> times = new List<float>();

        float totalGap = MaximumTime - MinimumTime;
        float interval = totalGap / GameManager.Instance.MaxLevel+1;

        float time = MaximumTime;

        for (int i = 0; i < GameManager.Instance.MaxLevel; i++)
        {
            time = MaximumTime - (interval * i);

            if (time < MinimumTime)
                time = MinimumTime;

            times.Add(time);
        }

        return times;
    }

    Vector3 MovedDistance()
    {
        return new Vector3(0, CheckDistance(), CheckDistance());
    }

    int CheckDistance()
    {
        return (int)(Mathf.RoundToInt(Character.Instance.Pos.y) - (Character.Instance.LastPosY));
    }
}
