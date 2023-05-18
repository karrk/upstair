using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System;

public class CharacterControll : MonoBehaviour
{
    enum JumpPos
    {
        UP,
        DOUBLE,
        LEFT,
        RIGHT,
    };

    private static CharacterControll _instance = null;

    public static CharacterControll Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    bool _isJump = false;

    public bool IsJump
    {
        get { return _isJump; }
        set
        {
            if(value == true && _isJump == false)
            {
                EventManager.Instance.PostNotification(EVENT_TYPE.CHARACTER_JUMP, this, value);
            }
            _isJump = value;
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

    Dictionary<int, Transform> _jumpPosDic;

    Rigidbody _rb;

    void Start()
    {
        InitJumpPos();
        _rb = this.GetComponent<Rigidbody>();
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            InitJumpPos();
            _isJump = false;

            if (_rb == null)
                this.GetComponent<Rigidbody>();

            SetConstraints(true);
        }
    }

    void InitJumpPos()
    {
        _jumpPosDic = new Dictionary<int, Transform>();

        Transform jumpPosTr = JumpPosControll.Instance.transform;

        for (int i = 0; i < 4; i++)
        {
            _jumpPosDic.Add(i, jumpPosTr.GetChild(i));
        }

        
    }

    public void CharacterJumpAction(InputType mode)
    {
        if (_isJump || Character.Instance.IsDead)
            return;

        switch (mode)
        {
            case InputType.Up:
                Jump(_jumpPosDic[(int)JumpPos.UP].position);
                break;

            case InputType.Double:
                Jump(_jumpPosDic[(int)JumpPos.DOUBLE].position);
                break;

            case InputType.Left:
                Jump(_jumpPosDic[(int)JumpPos.LEFT].position);
                break;

            case InputType.Right:
                Jump(_jumpPosDic[(int)JumpPos.RIGHT].position);
                break;

            default:
                break;
        }
    }

    public void Jump(Vector3 targetPos, float jumpPower = 0.8f, float duration = 0.05f)
    {
        transform.DOJump(targetPos, jumpPower, 1, duration).SetRecyclable(true);
        IsJump = true;
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Stair"))
        {
            _isJump = false;
        }
    }

    public void SetConstraints(bool setValue)
    {
        if (!setValue)
        {
            _rb.constraints = RigidbodyConstraints.None;
        }
        else
        {
            _rb.constraints = RigidbodyConstraints.FreezeRotation;
        }
    }

    //public void FloattingMode(bool setValue)
    //{
    //    StylizedWater2.FloatingTransform floating 
    //        = this.GetComponent<StylizedWater2.FloatingTransform>();

    //    floating.enabled = setValue;
    //    _rb.isKinematic = setValue;
    //}

    
}
