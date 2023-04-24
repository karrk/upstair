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

    public delegate void Reset();

    public event Reset E_reset;

    [Range(0.1f, 1f)]
    public float _gameSpeed = 1f;
    float _setSpeed = 1f;

    private void FixedUpdate()
    {
        if(_gameSpeed != _setSpeed)
        {
            Time.timeScale = _gameSpeed;
            _setSpeed = _gameSpeed;
        }
    }

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
        Application.targetFrameRate = 100;
        Screen.SetResolution(720, 1280, true);
    }

    int _score = 0;

    public int Score
    {
        get
        {
            return _score;
        }
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

    public void Restart()
    {
        SceneManager.LoadScene(1);
    }

    void Start()
    {
        InitResetOptions();
        SceneManager.sceneLoaded += OnSceneLoaded;
        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            if((Stair)Param != null)
            {
                Stair stair = (Stair)Param;
                _score = int.Parse(stair.name);
            }

            if(_nextStairNum < _score)
            {
                _nextStairNum += _nextGapCount;
                _level++;
                EventManager.Instance.PostNotification(EVENT_TYPE.LEVEL_CHANGED, this);
            }
        }
    }

    void InitResetOptions()
    {
        E_reset += JumpPosControll.Instance.ResetOptions;
        E_reset += MapManager.Instance.ResetOptions;
        E_reset += BotCreator.Instance.ResetOptions;
        E_reset += DeathManager.Instance.ResetOptions;
        E_reset += FindObjectOfType<ItemCreator>().ResetOptions;
        E_reset += Character.Instance.ResetOptions;
        E_reset += InputManager.Instance.ResetOptions;
        E_reset += CharacterControll.Instance.ResetOptions;
        E_reset += RockCreator.Instance.ResetOptions;
        E_reset += CameraControll.Instance.ResetOptions;
        E_reset += Water.Instance.ResetOptions;
        E_reset += ScoreManager.Instance.ResetOptions;

        _score = 0;
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.buildIndex == 1)
        {
            DOTween.Clear();
            E_reset();
        }
            
    }
}
