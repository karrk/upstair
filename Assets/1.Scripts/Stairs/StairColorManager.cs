using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StairColorManager : MonoBehaviour
{
    Material _mat;
    
    internal void SetMaterial (Stair stair)
    {
        _mat = stair.GetComponentInChildren<MeshRenderer>().material;
        _mat.SetFloat("_X", (float)Math.Round(UnityEngine.Random.Range(0f, 1f), 1));
    }
}
