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

    Vector3 _initPos;

    void Start()
    {
        EventManager.Instance.AddListener(EVENT_TYPE.CAMERA_SHAKE, OnEvent);
        _initPos = this.transform.position;
    }

    public void ResetOptions()
    {
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
            transform.position += new Vector3(0, 0.15f * Time.deltaTime, 0);
            return;
        }

        this.transform.DOMove(AddVector(Character.Instance.Pos), 0.5f).SetAutoKill(true);

        //this.transform.position = Vector3.Slerp(
        //this.transform.position,
        //AddVector(Character.Instance.Pos),
        //_camSpeed
        //);
    }

    Vector3 AddVector(Vector3 offsetPos)
    {
        return new Vector3(0, offsetPos.y, offsetPos.z) + _offset;
    }
}
