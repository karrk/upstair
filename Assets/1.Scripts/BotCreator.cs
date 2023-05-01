using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotCreator : MonoBehaviour
{
    private static BotCreator _instance;

    public static BotCreator Instance
    {
        get
        {
            if (_instance == null)
                _instance = null;

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

    float _createTime = 5f;
    float _timer;

    bool _createReady = false;
    
    const float StartDistace = 19.5f;

    public GameObject _botPrefab;
    Vector3 _initPos;

    public GameObject _currentBot = null;

    RaycastHit _rayInfo;

    void Start()
    {
        this.transform.position = new Vector3(0, StartDistace, StartDistace);
        _initPos = this.transform.position;

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            this.transform.position = _initPos;
            _timer = 0f;
        }
    }

    void CreateBot()
    {
        Instantiate(_botPrefab, this.transform.position, Quaternion.Euler(new Vector3(0, 0, 90)));
    }

    void FixedUpdate()
    {
        if(_currentBot == null)
        {
            if(_timer < _createTime)
            {
                _timer += Time.deltaTime;
            }
            else
            {
                _createReady = true;
                _timer = 0f;
            }
        }

        if (_createReady && !CharacterControll.Instance.IsJump)
        {
            if (Physics.Raycast(this.transform.position, new Vector3(0, -1, 0), out _rayInfo, 5f))
            {
                CreateBot();
                _createReady = false;
            }
        }
    }

    public void Move()
    {
        this.transform.position += new Vector3(0, CheckDistance(), CheckDistance());
    }

    int CheckDistance()
    {
        return (int)(Mathf.RoundToInt(Character.Instance.Pos.y) - (Character.Instance.LastPosY));
    }
}
