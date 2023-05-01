using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StairColorManager : MonoBehaviour
{
    Material _mat;
    //int _lastCount = 0;

    //void Start()
    //{
    //    EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    //}

    //private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    //{
    //    if (eventType == EVENT_TYPE.GAME_RESTART)
    //    {
    //        _lastCount = 0;
    //    }
    //}

    void FixedUpdate()
    {
        //if (StairCreator._stairList.Count != _lastCount)
        //{
        //    _mat = StairCreator._stairList[_lastCount].GetComponentInChildren<MeshRenderer>().material;
        //    _mat.SetFloat("_X", (float)Math.Round(UnityEngine.Random.Range(0f, 1f), 1));

        //    _lastCount = StairCreator._stairList.Count;
        //}
    }

    public void SetMaterial (Stair stair)
    {
        _mat = stair.GetComponentInChildren<MeshRenderer>().material;
        _mat.SetFloat("_X", (float)Math.Round(UnityEngine.Random.Range(0f, 1f), 1));
    }
}
