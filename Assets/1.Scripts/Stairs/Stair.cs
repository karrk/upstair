using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stair : MonoBehaviour , IStairType
{
    public Enum ObjType { get; set; }

    public Vector3 BasePos
    {
        get { return GetBasePos(); }
    }

    public bool isMetroLine = false;
    public bool isOnlyMid = false;

    void OnEnable()
    {
        isMetroLine = false;
        transform.position = StairCreator._spawnPos;
    }

    void Start()
    {
        Transform myParent = this.transform.parent.Find("StairPool");
        this.transform.SetParent(myParent);
    }

    Vector3 GetBasePos() // OCP
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

            case ObjPool.StairType.CIRCLE:
                {
                    isOnlyMid = true;
                    return new Vector3(3, 0, 0);
                }
            case ObjPool.StairType.CIRCLE_LEFT:
                return new Vector3(1, 0, 0);
            case ObjPool.StairType.CIRCLE_RIGHT:
                return new Vector3(5, 0, 0);

            default:
                return new Vector3(3, 0, 0);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Water") && !Character.Instance.IsDead)
            ReturnStair();
    }

    public void ReturnStair()
    {
        ObjPool.Instance.ReturnObj(ObjType, this.gameObject);
        StairCreator._dic.Remove(int.Parse(this.gameObject.name));
    }
}


