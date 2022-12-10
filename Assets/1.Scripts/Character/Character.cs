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

    JumpPosControll _jumpPosControll;

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
        _initPos = this.transform.position;

        _jumpPosControll = FindObjectOfType<JumpPosControll>();

        _lastPosY = Pos.y;

        E_colStair += _jumpPosControll.Move;
        E_colStair += RockCreator.Instance.Move;

    }

    void FixedUpdate()
    {
        _pos = transform.position;

        //if(IsDead == false)
        if (_pos.y < LastPosY-0.05f)
            _isDead = true;
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
            SetCurrentStair(collision.gameObject);
            E_colStair();
            UpdateLastPos();
        }

        if (collision.gameObject.CompareTag("Item"))
        {
            if (collision.gameObject.TryGetComponent<I_ItemType>(out I_ItemType item))
            {
                this._item = item;
            }
            item.Use();
        }

        if (collision.gameObject.CompareTag("Water"))
        {

        }
    }

    public void ResetOptions()
    {
        this.transform.position = _initPos;
        _currentStair = null;
        _item = null;
        _pos = _initPos;
        UpdateLastPos();
        _isDead = false;
    }

    public void CrushKill()
    {
        if (!_isDead)
        {
            _isDead = true;
            GetComponent<CharacterAnim>().PlayCruchKillAnim();
        }
        
    }
}
