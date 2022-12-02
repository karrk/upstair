using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpPosControll : MonoBehaviour
{
    Vector3 _initPos;

    void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }

    void Start()
    {
        _initPos = this.transform.position;
        GameManager.Instance.E_reset += ResetOptions;
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
