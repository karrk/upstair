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

        inclination = -(ShakeMaxPower - ShakeMinPower) / StairCreator.DISTANCE; // 기울기 계산
    }

    [Range(0.01f, 1)]
    public float _camSpeed = 0.05f;

    public Vector3 _offset;

    Quaternion _initRot;
    Vector3 _initPos;

    void Start()
    {
        EventManager.Instance.AddListener(EVENT_TYPE.CAMERA_SHAKE, OnEvent);
        _underWaterFilter = transform.GetChild(0).gameObject;
        bubbleFx = transform.GetChild(1).GetComponent<ParticleSystem>(); // 위배
        _initPos = this.transform.position;
        _initRot = this.transform.rotation;
    }

    public void ResetOptions()
    {
        _underWaterFilter.SetActive(false);

        this.transform.rotation = _initRot;
        this.transform.position = _initPos;
        EventManager.Instance.AddListener(EVENT_TYPE.CAMERA_SHAKE, OnEvent);
    }

    void FixedUpdate()
    {
        MoveCamera();
    }

    void OnEvent(EVENT_TYPE eventType, Component component, object param = null)
    {
        if (eventType == EVENT_TYPE.CAMERA_SHAKE)
        {
            this.transform.DOShakePosition(0.3f, CalculateShakePower((float)param), 30); 
        }
    }

    float CalculateShakePower(float distance)
    {
        float power = (inclination * distance) + ShakeMaxPower;
        return power;
    }

    void MoveCamera()
    {
        if (Character.Instance.IsDead)
        {
            RatateDown();
            return;
        }

        this.transform.DOMove(AddVector(Character.Instance.Pos), 0.5f);
    }

    void RatateDown()
    {
        transform.rotation = Quaternion.Slerp(transform.rotation,
            Quaternion.Euler(50, transform.rotation.eulerAngles.y, transform.rotation.eulerAngles.z),
            2f*Time.deltaTime);

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
