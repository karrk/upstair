using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;
using System;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;

    public static GameManager Instance
    {
        get
        {
            if (instance == null)
                return null;

            return instance;
        }
    }

    [Range(0.1f, 1f)]
    public float _gameSpeed = 1f;
    float _setSpeed = 1f;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
            Destroy(this.gameObject);

        DOTween.Init(false, false, LogBehaviour.ErrorsOnly).SetCapacity(200, 100);
        Application.targetFrameRate = 60;
        Screen.SetResolution(720, 1544, true);
    }

    const int _maxStair = 1000; // 테스트모드
    const int _maxLevel = 20;

    public int MaxLevel { get { return _maxLevel; } }

    int _nextGapCount = _maxStair / _maxLevel; // 5
    int _nextStairNum = 0;

    private int _level = 0;

    public int Level
    {
        get
        {
            return _level;
        }
    }

    float _gameProgress = 0;

    public float GameProgress
    {
        get { return _gameProgress; }
    }

    void Start()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;

        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);
    }

    private void FixedUpdate()
    {
        if (_gameSpeed != _setSpeed)
        {
            Time.timeScale = _gameSpeed;
            _setSpeed = _gameSpeed;
        }
    } // 테스트용


    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            if(_nextStairNum < ScoreManager.Instance.Score)
            {
                _nextStairNum += _nextGapCount;
                _level++;
                EventManager.Instance.PostNotification(EVENT_TYPE.LEVEL_CHANGED, this, _level);

                _gameProgress = (float)_level / (float)_maxLevel;
            }
        }
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.buildIndex == 1)
        {
            DOTween.Clear();
            _gameProgress = 0;

            EventManager.Instance.PostNotification(EVENT_TYPE.GAME_RESTART, this);
        }
    }

    public void Restart()
    {
        SceneManager.LoadScene(1);
    }


}
