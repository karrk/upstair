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

    private I_ItemType _item;

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

    private GameObject _currentStair;

    public GameObject CurrentStair
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
        E_colStair += BotCreator.Instance.Move;
        E_colStair += MetroLimitor.Instacne.Move;
        E_colStair += MetroCreator.Instacne.CheckDistance;

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
        float xValue = CurrentStair.GetComponent<Stair>().BasePos.x - 3;
        float yValue = CurrentStair.transform.position.y;

        return new Vector3(xValue,
            yValue,
            yValue
            );
    }

    void DeadLogic()
    {
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

    public void SetCurrentStair(GameObject stair)
    {
        _currentStair = stair;
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Stair"))
        {
            Stair stair;

            if(!collision.gameObject.TryGetComponent<Stair>(out stair))
            {
                Debug.Log("캐릭터 - 계단충돌 에러");
            }

            SetCurrentStair(collision.gameObject);

            EventManager.Instance.PostNotification(EVENT_TYPE.CONTACT_STAIR, this, stair);
            
            E_colStair();

            UpdateLastPos();
        }

        if (collision.gameObject.CompareTag("Item") && !_itemUsing)
        {
            if (collision.gameObject.TryGetComponent<I_ItemType>(out I_ItemType item))
            {
                this._item = item;
            }
            item.Use();

            _itemUsing = true;

            StartCoroutine(itemUseStateFalse(item.Duration));
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
    }

    public void CrushKill()
    {
        if (!_isDead)
        {
            DeadLogic();
            GetComponent<CharacterAnim>().PlayCruchKillAnim();
        }

    }

    IEnumerator itemUseStateFalse(float delayTime)
    {
        yield return new WaitForSeconds(delayTime / 2f);

        _itemUsing = false;
    }
}
