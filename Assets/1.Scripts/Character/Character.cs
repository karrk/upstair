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
        set
        {
            if(value == true)
            {
                EventManager.Instance.PostNotification(EVENT_TYPE.CHARACTER_DEAD, this);
                _isDead = value;
            }
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

    void Start()
    {
        _initPos = this.transform.position;
        _initRotation = this.transform.rotation;

        _lastPosY = Pos.y;

        E_colStair += JumpPosControll.Instance.Move;
        E_colStair += RockCreator.Instance.Move;
        E_colStair += BotCreator.Instance.Move;
        E_colStair += ScoreManager.Instance.Move;
        E_colStair += MetroLimitor.Instacne.Move;
        E_colStair += MetroCreator.Instacne.CheckDistance;
    }

    void FixedUpdate()
    {
        _pos = transform.position;

        if (_pos.y < LastPosY-0.05f)
            IsDead = true;
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
            
            EventManager.Instance.PostNotification(EVENT_TYPE.CONTACT_STAIR, this);
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
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Water"))
        {
            IsDead = true;
        }

        if (other.gameObject.CompareTag("Metro"))
        {
            IsDead = true;
            GetComponent<Rigidbody>().AddForce(new Vector3(50,0,0),ForceMode.Impulse);
        }
    }

    public void ResetOptions()
    {
        GetComponent<Rigidbody>().isKinematic = true;
        this.transform.position = _initPos;
        this.transform.rotation = _initRotation;
        _currentStair = null;
        _item = null;
        _pos = _initPos;
        UpdateLastPos();
        _isDead = false;
        GetComponent<Rigidbody>().isKinematic = false;
    }

    public void CrushKill()
    {
        if (!_isDead)
        {
            IsDead = true;
            GetComponent<CharacterAnim>().PlayCruchKillAnim();
        }
        
    }
}
