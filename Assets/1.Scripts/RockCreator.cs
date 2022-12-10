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

    //const float MaximumTime = 15f;
    //const float StartFirstTime = 13f;
    //const float MinimumTime = 5f;

    //TEST
    const float MaximumTime = 5f;
    const float StartFirstTime = 2f;
    const float MinimumTime = 1f;

    List<float> _timeList = new List<float>();
    /*
     * ������ �ð���� �����Ǵ°��� �����ϱ����� ������ �����Ѵ�.
     * �ƹ��� �ʾ �ִ�ð� max�ʸ� ���� �ʰ��ϸ�
     * �б�(����)�� �������� min�ʰ� �پ��� �����.
     * 
     * �̶� ���� 1�б�ð��� StartFirst�ð����� �����Ѵ�.
     * (min��~max��)
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
            

        if (_rockList == null)
            _rockList = new List<Rock>();
    }

    void Start()
    {
        _createOffsetPos = InitCreateOffsetPos;
        InitGenerationTimes();
        _timer = MaximumTime;
    }

    void InitGenerationTimes()
    {
        float totalGap = StartFirstTime - MinimumTime;
        float interval = totalGap / GameManager.Instance.TotalQuater;

        float time = StartFirstTime;

        for (int i = 0; i < GameManager.Instance.TotalQuater; i++)
        {
            time = StartFirstTime - (interval * i);

            if (time < MinimumTime)
                time = MinimumTime;

            _timeList.Add(time);
        }
    }

    float GetRandomTime()
    {
        float selectMinTime = _timeList[GameManager.Instance.CurrentQuater];

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
        foreach (var item in _rockList)
        {
            Destroy(item.gameObject);
        }

        _rockList = null;
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
