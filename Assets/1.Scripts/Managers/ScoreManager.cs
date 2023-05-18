using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using TMPro;

public class ScoreManager : MonoBehaviour
{
    private static ScoreManager _instance;

    public static ScoreManager Instance
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
        {
            DestroyObject(this.gameObject);
        }
    }

    const string BESTSCORECODE = "MyBestScore";

    int _currentScore = 0;

    public int Score
    {
        get { return _currentScore; }
    }

    int _bestScore = 0;

    public int BestScore
    {
        get { return _bestScore; }
    }

    TextMeshProUGUI _finScoreText;
    TextMeshProUGUI _bestScoreText;

    void Start()
    {
        _bestScoreText = FindObjectOfType<FinishPanel>().transform.Find("BestScoreText").GetComponent<TextMeshProUGUI>();
        _finScoreText = FindObjectOfType<FinishPanel>().transform.Find("FinScoreText").GetComponent<TextMeshProUGUI>();

        LoadBestScore();

        EventManager.Instance.AddListener(EVENT_TYPE.CHARACTER_DEAD, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType,Component component,object param = null)
    {
        if(eventType == EVENT_TYPE.CHARACTER_DEAD)
        {
            if(_currentScore > _bestScore)
            {
                _bestScore = _currentScore;
                PlayerPrefs.SetInt(BESTSCORECODE, _bestScore);
            }

            _finScoreText.text = $"{_currentScore.ToString()}Ãþ";
            _bestScoreText.text = $"ÃÖ°í°è´Ü {_bestScore.ToString()}Ãþ";
        }

        if(eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            if ((StairType)param != null)
            {
                StairType stair = (StairType)param;
                _currentScore = int.Parse(stair.name);
            }

            if (_currentScore > _bestScore)
                EventManager.Instance.PostNotification(EVENT_TYPE.SCORE_OVER, this);
        }

        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            _finScoreText.text = 0.ToString();
            _currentScore = 0;
            LoadBestScore();
        }
    }

    void LoadBestScore()
    {
        if (PlayerPrefs.HasKey(BESTSCORECODE))
        {
            _bestScore = PlayerPrefs.GetInt(BESTSCORECODE);
        }
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.R))
        {
            PlayerPrefs.DeleteKey(BESTSCORECODE);
        }
    }

}
