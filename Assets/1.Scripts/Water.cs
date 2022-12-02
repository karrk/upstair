using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Water : MonoBehaviour
{
    private static Water _instance;

    public static Water Instance
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
    const float MaxDistance1 = 5f;
    const float MaxDistance2 = 10f;

    private float _speed = 1f;

    public float Speed
    {
        get
        {
            _speed = SetUpSpeed(Character.Instance.Pos.y);
            return _speed;
        }
    }

    Vector3 _initPos;

    public void ResetOptions()
    {
        this.transform.position = _initPos;
    }

    void Start()
    {
        _initPos = this.transform.position;
    }

    void FixedUpdate()
    {
        if (GameManager.Instance.IsReady)
            return;

        this.transform.position =
            new Vector3(transform.position.x,
            transform.position.y + Speed * Time.deltaTime,
            Character.Instance.Pos.z);
    }

    float SetUpSpeed(float targetHeight) // 레벨 조정
    {
        float posY = transform.position.y;

        if (targetHeight <= posY + MaxDistance1)
            return 1f;

        else if (posY + MaxDistance1 <= targetHeight && targetHeight <= posY + MaxDistance2)
            return 4f;

        else
            return 10f;
    }

}
