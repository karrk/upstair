using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public enum MOVE_Dir
{
    None = 0,
    Left = 1,
    Right = 2,
}

public class MoveBtnControll : BaseButton
{
    Button _leftBtn;
    Button _rightBtn;

    private MOVE_Dir _dir;
    
    public MOVE_Dir Dir
    {
        get { return _dir; }
    }

    private bool _isPressed;

    public bool IsPresssed
    {
        get { return _isPressed; }
    }

    protected override void Init()
    {
        PunchValue = -2f;
        punch = new Vector3(PunchValue, PunchValue, PunchValue);

        _leftBtn = transform.GetChild(0).GetComponent<Button>();
        _rightBtn = transform.GetChild(1).GetComponent<Button>();

        _leftBtn.onClick.AddListener(() => 
        {
            _dir = MOVE_Dir.Left;
            EventManager.Instance.PostNotification(EVENT_TYPE.MOVE_BTN, this, Dir);
        });

        _rightBtn.onClick.AddListener(() => 
        {
            _dir = MOVE_Dir.Right;
            EventManager.Instance.PostNotification(EVENT_TYPE.MOVE_BTN, this, Dir);
        });

        _leftBtn.onClick.AddListener(() => BtnAnimation());
        _rightBtn.onClick.AddListener(() => BtnAnimation());
    }

    protected override void BtnAnimation()
    {
        if(_dir == MOVE_Dir.Left)
            _leftBtn.transform.DOPunchScale(punch, 0.04f, 0, 0.3f);
        else if(_dir == MOVE_Dir.Right)
            _rightBtn.transform.DOPunchScale(punch, 0.04f, 0, 0.3f);
    }
}
