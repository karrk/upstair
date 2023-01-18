using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MetroCreator : MonoBehaviour
{
    private static MetroCreator _instance;

    public static MetroCreator Instacne
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
            Destroy(this.gameObject);
            
    }

    const float LowCreatePercent = 0.02f;
    const float HighCreatePercent = 0.08f;  // 레벨에따른 조정 총 10 분기

    //const float LowCreatePercent = 1f;
    //const float HighCreatePercent = 1f;

    const float MinDistance = 80f;
    Vector3 _initPos;

    public GameObject _metroLine;

    Stair _targetStair;

    List<float> _percentList = new List<float>();

    void Start()
    {
        _initPos = this.transform.position;

        InitGenerationPercent();
        CheckDistance();

        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    void InitGenerationPercent()
    {
        float percentTotalGap = HighCreatePercent - LowCreatePercent;
        float interval = percentTotalGap / (GameManager.Instance.TotalQuater-1);

        for (int i = 0; i < GameManager.Instance.TotalQuater; i++)
        {
            float percent = LowCreatePercent + (interval * i);

            if (percent > HighCreatePercent)
                percent = HighCreatePercent;

            _percentList.Add(percent);
        }
    }

    public void Move()
    {
        this.transform.position += new Vector3(0, 1, 1);
    }

    public void CheckDistance()
    {
        while (true)
        {
            if (this.transform.position.y - Character.Instance.LastPosY >= MinDistance)
                break;

            else
            {
                Move();

                if (CheckCreatePercent())
                {
                    MetroLineCreate();
                }
            }
                
        }
    }


    bool CheckCreatePercent() // 현재 분기에 맞는 퍼센트
    {
        float percent = Random.Range(0, 1.01f);
        return percent < _percentList[GameManager.Instance.CurrentQuater];
    }

    void MetroLineCreate()
    {
        GameObject obj = Instantiate(_metroLine);
        obj.transform.position = this.transform.position;
        obj.transform.SetParent(null);
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.buildIndex == 1)
        {
            ResetOptions();
        }
    }

    void ResetOptions()
    {
        transform.position = _initPos;
        CheckDistance();
    }
}
