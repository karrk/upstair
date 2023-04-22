using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasControll : MonoBehaviour
{
    private static CanvasControll _instance;

    private void Awake()
    {
        if(_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(this);
        }
    }
}
