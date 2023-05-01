using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CameraControll : MonoBehaviour
{
    private static CameraControll _instance;

    public static CameraControll Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    const float CamMoveTime = 0.1f;

    const float ShakeMaxPower = 0.3f;
    const float ShakeMinPower = 0.001f;
    float inclination;

    GameObject _underWaterFilter;
    ParticleSystem bubbleFx;

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

        inclination = -(ShakeMaxPower - ShakeMinPower) / StairCreator.DISTANCE; // ���� ���
    }

    [Range(0.01f, 1)]
    public float _camSpeed = 0.05f;

    public Vector3 _offset;

    Quaternion _initRot;
    Vector3 _initPos;

    void Start()
    {
        EventManager.Instance.AddListener(EVENT_TYPE.CAMERA_SHAKE, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.DEAD_ANIM_FIN, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTINUE, OnEvent);

        _underWaterFilter = transform.GetChild(0).gameObject;
        bubbleFx = transform.GetChild(1).GetComponent<ParticleSystem>(); // ����
        _initPos = this.transform.position;
        _initRot = this.transform.rotation;
    }

    void FixedUpdate()
    {
        MoveCamera();
    }

    void OnEvent(EVENT_TYPE eventType, Component component, object param = null)
    {
        if (eventType == EVENT_TYPE.CAMERA_SHAKE)
        {
            StartCoroutine(ShakeCam(CalculateShakePower((float)param)));
        }

        if(eventType == EVENT_TYPE.DEAD_ANIM_FIN)
        {
            StartCoroutine(RotateDown(1));
        }

        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            _underWaterFilter.SetActive(false);
            bubbleFx.gameObject.SetActive(false);

            this.transform.rotation = _initRot;
            this.transform.position = _initPos;
        }

        if(eventType == EVENT_TYPE.CONTINUE)
        {
            _underWaterFilter.SetActive(false);
            bubbleFx.gameObject.SetActive(false);
            this.transform.rotation = _initRot;
        }
    }

    IEnumerator ShakeCam(float power)
    {
        while (true)
        {
            if (power <= 0)
                break;

            this.transform.position +=
                new Vector3(Random.Range(-power, power), Random.Range(-power, power), Random.Range(-power, power));

            power -= 0.3f;

            yield return null;

        }
    }

    float CalculateShakePower(float distance)
    {
        float power = (inclination * distance) + ShakeMaxPower;
        return power;
    }

    void MoveCamera()
    {
        if(Character.Instance.IsDead)
        return;

        this.transform.position = Vector3.Slerp
            (this.transform.position, AddVector(Character.Instance.Pos), CamMoveTime);
    }

    IEnumerator RotateDown(float increaseValue)
    {
        float limitValue = 50;

        while (true)
        {
            if (transform.rotation.eulerAngles.x >= limitValue)
                break;

            transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x + increaseValue, transform.rotation.eulerAngles.y, transform.rotation.eulerAngles.z);

            yield return null;
        }
    }

    Vector3 AddVector(Vector3 offsetPos)
    {
        return new Vector3(0, offsetPos.y, offsetPos.z) + _offset;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Water"))
        {
            _underWaterFilter.SetActive(true);
            bubbleFx.gameObject.SetActive(true);
        }
    }
}
