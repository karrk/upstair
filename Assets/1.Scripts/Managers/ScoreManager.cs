using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;

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

    const string BESTSCORETEXT = "MyBestScore";

    int _currentScore = 0;
    int _bestScore;

    public GameObject _bestCursor;

    TMPro.TextMeshProUGUI _currentscoreText;
    public TMPro.TextMeshProUGUI _scoreText;
    public TMPro.TextMeshProUGUI _bestScoreText;
    StringBuilder _sb;

    GameObject _boardObj;
    Vector3 _objInitPos;

    void Start()
    {
        if (PlayerPrefs.HasKey(BESTSCORETEXT))
        {
            _bestScore = PlayerPrefs.GetInt(BESTSCORETEXT);
            CreateCursor();
        }

        _boardObj = transform.GetChild(0).gameObject;
        _objInitPos = _boardObj.transform.position;

        _currentscoreText = GetComponentInChildren<TMPro.TextMeshProUGUI>();
        _sb = new StringBuilder();

        RenewalScoreText();

        EventManager.Instance.AddListener(EVENT_TYPE.CHARACTER_DEAD, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType,Component component,object param = null)
    {
        if(eventType == EVENT_TYPE.CHARACTER_DEAD)
        {
            RenewalBestScore();

            _scoreText.text = $"{_currentscoreText.text}Ãþ";
            _bestScoreText.text = $"ÃÖ°í°è´Ü {_bestScore.ToString()}Ãþ";
        }
    }

    public void ResetOptions()
    {
        if (PlayerPrefs.HasKey(BESTSCORETEXT))
        {
            CreateCursor();
        }

        EventManager.Instance.AddListener(EVENT_TYPE.CHARACTER_DEAD, OnEvent);
        _boardObj.transform.position = _objInitPos;
        RenewalScoreText();
    }

    void CreateCursor()
    {
        int value = PlayerPrefs.GetInt(BESTSCORETEXT);

        float tempPos_X = -4.5f;
        Vector3 pos = new Vector3(tempPos_X, value+1, value+2f);

        GameObject cursor = Instantiate(_bestCursor);
        cursor.transform.position = pos;
    }

    IEnumerator textAnim(TMPro.TextMeshProUGUI targetText,float initSize,float maxSize)
    {
        targetText.fontSize = maxSize;

        while (true)
        {
            if (initSize >= targetText.fontSize)
                break;

            targetText.fontSize -= 0.2f;

            yield return null;
        }

        targetText.fontSize = initSize;
    }

    public void RenewalScoreText()
    {
        _currentScore = GameManager.Instance.Score;

        if (_currentScore > _bestScore)
        {
            EventManager.Instance.PostNotification(EVENT_TYPE.SCORE_OVER, this);
        }
            

        _sb.Clear();
        _sb.Append(_currentScore);

        _currentscoreText.text = _sb.ToString();
    }

    void RenewalBestScore()
    {
        if (_bestScore < _currentScore)
        {
            _bestScore = _currentScore;
            PlayerPrefs.SetInt(BESTSCORETEXT, _bestScore);
        }
    }

    int CheckDistance()
    {
        return (int)(Mathf.RoundToInt(Character.Instance.Pos.y) - (Character.Instance.LastPosY));
    }

    public void Move()
    {
        _boardObj.transform.position += new Vector3(0, CheckDistance(), CheckDistance());
        RenewalScoreText();
        StartCoroutine(textAnim(_currentscoreText, 0.8f, 1.5f));
    }
}
