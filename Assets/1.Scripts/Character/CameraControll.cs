using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
            
    }

    [Range(0.01f, 1)]
    public float _camSpeed = 0.05f;

    public Vector3 _offset;

    Vector3 _initPos;

    void Start()
    {
        _initPos = this.transform.position;
    }

    public void ResetOptions()
    {
        this.transform.position = _initPos;
    }

    void FixedUpdate()
    {
        MoveCamera();
    }

    void MoveCamera()
    {
        if (Character.Instance.IsDead)
        {
            transform.position += new Vector3(0, 0.15f * Time.deltaTime, 0);
            return;
        }

        this.transform.position = Vector3.Slerp(
        this.transform.position,
        AddVector(Character.Instance.Pos),
        _camSpeed
        );
    }

    Vector3 AddVector(Vector3 offsetPos)
    {
        return new Vector3(0, offsetPos.y, offsetPos.z) + _offset;
    }
}
