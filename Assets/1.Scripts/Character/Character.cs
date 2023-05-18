using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
    private static Character _instance = null;

    public static Character Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    public delegate void OnStair();
    public event OnStair E_colStair;

    private ItemType _item;

    private Vector3 _initPos;
    private Quaternion _initRotation;

    private Vector3 _pos;

    public Vector3 Pos
    {
        get { return _pos; }
    }

    private float _lastPosY;

    public float LastPosY
    {
        get { return _lastPosY; }
    }

    private StairType _currentStair;

    public StairType CurrentStair
    {
        get { return _currentStair; }
    }

    private bool _isDead = false;

    public bool IsDead
    {
        get { return _isDead; }
    }

    CapsuleCollider _collider;

    Vector3 _safeOffset = Vector3.zero;

    public Vector3 SafeOffset { get { return _safeOffset; } }

    bool _itemUsing = false;

    bool _isInvincible = false;

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

    void Start()
    {
        _collider = GetComponent<CapsuleCollider>();

        _initPos = this.transform.position;
        _initRotation = this.transform.rotation;

        _lastPosY = Pos.y;

        E_colStair += JumpPosControll.Instance.Move;

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTINUE, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if (eventType == EVENT_TYPE.GAME_RESTART)
        {
            GetComponent<Rigidbody>().isKinematic = true;
            this.transform.position = _initPos;
            this.transform.rotation = _initRotation;
            _currentStair = null;
            _item = null;
            _pos = _initPos;
            UpdateLastPos();
            _isDead = false;
            _collider.enabled = true;
            GetComponent<Rigidbody>().isKinematic = false;
            _itemUsing = false;
            _isInvincible = false;
        }

        if(eventType == EVENT_TYPE.CONTINUE)
        {
            GetComponent<Rigidbody>().isKinematic = true;
            this.transform.position = SetRetryPos();
            this.transform.rotation = _initRotation;
            _currentStair = null;
            _item = null;
            _pos = this.transform.position;
            UpdateLastPos();
            _isDead = false;
            _collider.enabled = true;
            GetComponent<Rigidbody>().isKinematic = false;
            _itemUsing = false;
        }
    }

    Vector3 SetRetryPos()
    {
        float xValue = CurrentStair.GetComponent<StairType>()._basePos.x - 3;
        float yValue = CurrentStair.transform.position.y;

        return new Vector3(xValue,
            yValue,
            yValue
            );
    }

    void DeadLogic()
    {
        if (_isInvincible)
            return;

        _isDead = true;
        _collider.enabled = false;
        EventManager.Instance.PostNotification(EVENT_TYPE.CHARACTER_DEAD, this);
    }

    void FixedUpdate()
    {
        _pos = transform.position;

        if (_pos.y < LastPosY - 0.05f && _isDead == false)
            DeadLogic();
    }

    public void UpdateLastPos()
    {
        _lastPosY = Pos.y;
    }

    public void SetCurrentStair(StairType stair)
    {
        _currentStair = stair;
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Stair"))
        {
            StairType stair;

            if(!collision.gameObject.TryGetComponent<StairType>(out stair))
            {
                Debug.Log("캐릭터 - 계단충돌 에러");
                return;
            }

            SetCurrentStair(stair);

            EventManager.Instance.PostNotification(EVENT_TYPE.CONTACT_STAIR, this, stair);
            
            E_colStair();

            UpdateLastPos();
            _isInvincible = false;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Water"))
        {
            DeadLogic();
        }

        if (other.gameObject.CompareTag("Metro"))
        {
            CrushKill();
        }

        if (other.gameObject.CompareTag("JumpItem") && !_itemUsing)
        {
            if (other.gameObject.TryGetComponent<JumpItemType>(out JumpItemType item))
            {
                this._item = item;
            }

            GetComponent<CharacterAnim>().PlayJumpItemAnim(true);
            item.Use();
            
            _itemUsing = true;
            _isInvincible = true;

            StartCoroutine(itemUseStateFalse(item.UseDuration));
        }
    }

    public void CrushKill()
    {
        if (!_isDead)
        {
            DeadLogic();
            GetComponent<CharacterAnim>().PlayCruchKillAnim();
        }
    }

    public void KillPlayer()
    {
        if (!_isDead)
        {
            DeadLogic();
        }
    }

    IEnumerator itemUseStateFalse(float delayTime)
    {
        yield return new WaitForSeconds(delayTime / 2f);

        _itemUsing = false;
    }
}
