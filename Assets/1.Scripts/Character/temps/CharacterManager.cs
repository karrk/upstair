using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum DeadType
{
    Drowned,
    Pressed,
}

public class CharacterManager : MonoBehaviour
{
    private static CharacterManager _instance;

    public static CharacterManager Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    private void Awake()
    {
        if(_instance ==null)
        {
            _instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    public Vector3 Pos { get { return this.transform.position; } }
    public StairType CurrentStair { get { return _status._currentStair; } }

    JumpPosControll _jumpPosControll;
    Movement _movement;
    CharacterStatus _status;
    AnimationController _animControll;

    Vector3 _initPos;
    Quaternion _initRot;
    Vector3 _nextMovePos;

    private void Start()
    {
        _initRot = this.transform.rotation;
        _initPos = this.transform.position;
        _jumpPosControll = FindObjectOfType<JumpPosControll>();
        _movement = GetComponent<Movement>();
        _status = GetComponent<CharacterStatus>();
        _animControll = GetComponent<AnimationController>();

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_INPUT_SIGN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTINUE, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_INPUT_SIGN)
        {
            if (_status.MyStatus == Status.Dead || _status.MyStatus == Status.Jumping)
                return;

            _nextMovePos = _jumpPosControll.GetJumpPos((InputType)Param);
            JumpLogic(_nextMovePos);
        }

        if(eventType == EVENT_TYPE.CONTINUE)
        {

        }
    }

    void JumpLogic(Vector3 pos)
    {
        _movement.JumpAction(pos);
        _animControll.PlayAnim(AnimType.Jump);
        _status.SetStatus(Status.Jumping);
    }

    public void DeadLogic(DeadType type)
    {
        if (_status.MyStatus == Status.Invincible)
            return;

        if(type == DeadType.Pressed)
        {
            _animControll.PlayAnim(AnimType.Dead);
        }

        _status.SetStatus(Status.Dead);
    }

    internal void UseItem(ItemType item)
    {
        item.Use();
        _status.SetStatus(Status.Invincible);
    }

    void ContinueLogic()
    {

    }

    void InitOptions()
    {
        this.transform.position = _initPos;
        this.transform.rotation = _initRot;
        _status.SetStatus(Status.Ready);
    }

}
