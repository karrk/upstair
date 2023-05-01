using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class InputManager : MonoBehaviour
{
    private static InputManager _instance = null;

    public static InputManager Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    public delegate void OnInput(InputMode mode);
    public event OnInput DetectInput;

    CharacterControll characterControll;

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

    public enum InputMode
    {
        Up,
        Double,
        Left,
        Right,
        None,
    }

    private InputMode _inputType = InputMode.None;

    public InputMode Input_Type
    {
        get { return _inputType; }
        set
        {
            if(value != InputMode.None)
                EventManager.Instance.PostNotification(EVENT_TYPE.GAME_INPUT_SIGN, this);

            _inputType = value;
        }
    }

    const float DefaultSlideDistance = 0.1f;
    public float OptionSlideDistance = 0;

    Vector3 _inputStartPos;
    Vector3 _inputEndPos;

    void Start()
    {
        characterControll = FindObjectOfType<CharacterControll>();

        DetectInput += characterControll.CharacterJumpAction;

        EventManager.Instance.AddListener(EVENT_TYPE.MOVE_BTN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.MOVE_BTN)
        {
            if ((int)Param == (int)MOVE_Dir.Left)
                Input_Type = InputMode.Left;
            else if((int)Param == (int)MOVE_Dir.Right)
                Input_Type = InputMode.Right;
            else
                Input_Type = InputMode.Up;

            DetectInput(_inputType);
            EventSystem.current.UpdateModules();

            //Input_Type = InputMode.None;
        }

        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            _inputType = InputMode.None;
        }
    }

    void Update()
    {
        //TouchInputCheck();

        if (EventSystem.current.IsPointerOverGameObject())
            return;

        KeyInputCheck();

        //#if UNITY_EDITOR_WIN
        //        KeyInputCheck();
        //#else
        //        TouchInputCheck();
        //#endif


        //MouseInputCheck();

    }

    Touch _touch;

    void TouchInputCheck()
    {
        if(Input.touchCount > 0)
        {
            _touch = Input.GetTouch(0);

            if (_touch.phase == TouchPhase.Began)
            {
                if (EventSystem.current.IsPointerOverGameObject())
                    return;
            }

            if (_touch.phase == TouchPhase.Ended)
            {
                EventManager.Instance.PostNotification(EVENT_TYPE.MOVE_BTN, this, MOVE_Dir.None);
            }
        }
    }

    void KeyInputCheck()
    {
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            Input_Type = InputMode.Up;
            DetectInput(_inputType);
        }
            

        else if (Input.GetKeyDown(KeyCode.Space))
        {
            Input_Type = InputMode.Double;
            DetectInput(_inputType);
        }
            

        else if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            Input_Type = InputMode.Right;
            DetectInput(_inputType);
        }
            

        else if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            Input_Type = InputMode.Left;
            DetectInput(_inputType);
        }
            

        
    }

    void MouseInputCheck()
    {
        //#if UNITY_EDITOR_WIN

        if (Input.GetMouseButtonDown(0))
        {
            _inputStartPos = Camera.main.ScreenToViewportPoint(Input.mousePosition);
        }
        else if (Input.GetMouseButtonUp(0))
        {
            _inputEndPos = Camera.main.ScreenToViewportPoint(Input.mousePosition);

            CheckSlide();

            DetectInput(_inputType);
        }

        //#elif UNITY_ANDROID

        //#endif

        
    }

    void CheckSlide() // y 슬라이드에 보정이 필요한것같음
    {
        float Y_distance = _inputEndPos.y - _inputStartPos.y;
        float X_distance = _inputEndPos.x - _inputStartPos.x;

        if (Y_distance >= DefaultSlideDistance + OptionSlideDistance 
            || Mathf.Abs(X_distance) >= DefaultSlideDistance + OptionSlideDistance)
        {
            if (Y_distance >= Mathf.Abs(X_distance))
                Input_Type = InputMode.Up;

            else if (X_distance > 0)
                Input_Type = InputMode.Right;

            else if (X_distance < 0)
                Input_Type = InputMode.Left;
        }
        else
            Input_Type = InputMode.Double;
    }

    float GetSlideDistance()
    {
        return DefaultSlideDistance + OptionSlideDistance;
    }

}
