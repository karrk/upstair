using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Stair : MonoBehaviour , IStairType
{
    public Enum ObjType { get; set; }

    private Vector3 _basePos;

    public Vector3 BasePos
    {
        get { return _basePos; }
    }

    void OnEnable()
    {
        transform.position = StairCreator._spawnPos;
    }

    void Start()
    {
        _basePos = SetBasePos();

        Transform myParent = this.transform.parent.Find("StairPool");
        this.transform.SetParent(myParent);
    }

    Vector3 SetBasePos() // OCP
    {
        switch (ObjType)
        {
            case ObjPool.StairType.SINGLE:
                return new Vector3(3, 0, 0);
            case ObjPool.StairType.DOUBLE:
                return new Vector3(3, 0, 0);
            case ObjPool.StairType.LEFT:
                return new Vector3(1, 0, 0);
            case ObjPool.StairType.RIGHT:
                return new Vector3(5, 0, 0);
            default:
                return Vector3.zero;
        }
    }

    void Update()
    {
        if(this.transform.position.y+ IStairType.ReturnDistance <= Character.Instance.Pos.y)
        {
            Return();
            StairCreator._stairDic.Remove(this.gameObject);
        }
    }

    public void Return()
    {
        ObjPool.Instance.ReturnObj(ObjType, this.gameObject);
    }
}


