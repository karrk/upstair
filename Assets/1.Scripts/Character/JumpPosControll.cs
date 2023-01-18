using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpPosControll : MonoBehaviour
{
    private static JumpPosControll _instance;

    public static JumpPosControll Instance
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

    Vector3 _initPos;

    void Start()
    {
        _initPos = this.transform.position;
    }

    public void ResetOptions()
    {
        this.transform.position = _initPos;
    }

    public void Move()
    {
        this.transform.position += new Vector3(0, CheckDistance(), CheckDistance());
    }

    int CheckDistance()
    {
        return (int)(Mathf.RoundToInt(Character.Instance.Pos.y) - (Character.Instance.LastPosY));
    }
}
