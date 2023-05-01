using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Water : MonoBehaviour
{
    private static Water _instance;

    public static Water Instance
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
            Destroy(this.gameObject);
        }

    }
    const float MaxDistance1 = 5f;
    const float MaxDistance2 = 10f;

    private float _speed = 1f;

    public float Speed
    {
        get
        {
            _speed = SetUpSpeed(Character.Instance.Pos.y);
            return _speed;
        }
    }

    Vector3 _initPos;

    bool _isStart = false;
    bool _isFin = false;

    void Start()
    {
        _initPos = this.transform.position;
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_INPUT_SIGN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.DEAD_ANIM_FIN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTINUE, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType, Component sender, object param = null)
    {
        if(eventType == EVENT_TYPE.GAME_INPUT_SIGN)
        {
            if (!_isStart)
                _isStart = true;
        }

        if(eventType == EVENT_TYPE.DEAD_ANIM_FIN)
        {
            _isFin = true;
        }

        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            
            this.transform.position = _initPos;
            _isStart = false;
            _isFin = false;
            GetComponent<BoxCollider>().enabled = true;
        }

        if(eventType == EVENT_TYPE.CONTINUE)
        {
            _isStart = false;
            _isFin = false;
            this.transform.position = SetRetryPos();
            GetComponent<BoxCollider>().enabled = true;
        }

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == Camera.main.gameObject)
            GetComponent<BoxCollider>().enabled = false;
    }

    Vector3 SetRetryPos()
    {
        float height = Character.Instance.Pos.y - 5f;

        return new Vector3(this.transform.position.x,
            height, height);
    }

    void FixedUpdate()
    {
        if (!_isStart)
            return;

        this.transform.position =
        new Vector3(transform.position.x,
        transform.position.y + Speed * Time.deltaTime,
        Character.Instance.Pos.z);
    }

    float SetUpSpeed(float targetHeight) // 레벨 조정
    {
        if (_isFin)
            return 15f;

        float posY = transform.position.y;

        if (targetHeight <= posY + MaxDistance1)
            return 1f;

        else if (posY + MaxDistance1 <= targetHeight && targetHeight <= posY + MaxDistance2)
            return 4f;

        else
            return 10f;
    }
}
