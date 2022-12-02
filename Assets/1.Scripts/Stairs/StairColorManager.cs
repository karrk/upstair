using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StairColorManager : MonoBehaviour
{
    Material _mat;
    int _lastCount = 0;

    public void ResetOptions()
    {
        _lastCount = 0;
    }

    void Start()
    {
        GameManager.Instance.E_reset += ResetOptions;
    }

    void FixedUpdate()
    {
        if(StairCreator._stairList.Count != _lastCount)
        {
            _mat = StairCreator._stairList[_lastCount].GetComponentInChildren<MeshRenderer>().material;
            _mat.SetFloat("_X",(float)Math.Round(UnityEngine.Random.Range(0f, 1f),1));

            _lastCount = StairCreator._stairList.Count;
        }
    }
}
