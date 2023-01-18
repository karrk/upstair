using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BubbleEffect : MonoBehaviour
{
    void Start()
    {
        GameManager.Instance.E_reset += ResetOptions;
    }

    void ResetOptions()
    {
        this.gameObject.SetActive(false);
    }


}
