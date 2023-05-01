using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CanvasControll : MonoBehaviour
{
    private static CanvasControll _instance;

    public static CanvasControll Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    private void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }
}
