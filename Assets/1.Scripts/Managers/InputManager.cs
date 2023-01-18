using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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

    public delegate void OnInput(DragType slide);
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

    public enum DragType
    {
        Single,
        Up,
        Left,
        Right,
        None,
    }

    private DragType _inputType = DragType.None;

    public DragType Input_Type
    {
        get { return _inputType; }
        set
        {
            if (value != DragType.None)
                EventManager.Instance.PostNotification(EVENT_TYPE.GAME_INPUT_SIGN, this);
            
            _inputType = value;
        }
    }

    const float DefaultSlideDistance = 0.1f;
    public float OptionSlideDistance = 0;

    Vector3 _inputStartPos;
    Vector3 _inputEndPos;

    public void ResetOptions()
    {
        _inputType = DragType.None;
        characterControll = FindObjectOfType<CharacterControll>();
    }

    void Start()
    {
        characterControll = FindObjectOfType<CharacterControll>();
        
        DetectInput += characterControll.CheckJumpType;
    }

    void Update()
    {
        if (UIManager.Instance.IsOnUIElement)
            return;

        CheckInput();
    }

    void CheckInput()
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
                Input_Type = DragType.Up;

            else if (X_distance > 0)
                Input_Type = DragType.Right;

            else if (X_distance < 0)
                Input_Type = DragType.Left;
        }
        else
            Input_Type = DragType.Single;
    }

    float GetSlideDistance()
    {
        return DefaultSlideDistance + OptionSlideDistance;
    }

}
