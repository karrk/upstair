using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour
{
    public bool isLeft;
    float value = 1;

    GameObject targetObj;

    void OnEnable()
    {
        targetObj = null;

        if (isLeft)
            value = -1;
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            targetObj = collision.gameObject;
        }
    }

    void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            targetObj = null;
        }
    }

    void FixedUpdate()
    {
        if (targetObj != null)
        {
            targetObj.transform.position += new Vector3(value * 2.5f * Time.deltaTime, 0, 0);
        }
            
    }
}
