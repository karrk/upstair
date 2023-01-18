using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Metro : MonoBehaviour
{
    Rigidbody[] rigidbodies;

    void Start()
    {
        rigidbodies = new Rigidbody[transform.childCount];
        FindRigidBodys();

        AddForce(1500);
    }

    void AddForce(int power)
    {
        foreach (Rigidbody rb in rigidbodies)
        {
            rb.AddForce(new Vector3(-1 * power, 0, 0), ForceMode.Impulse);
        }
    }

    void FindRigidBodys()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            if(transform.GetChild(i).TryGetComponent<Rigidbody>(out Rigidbody rb))
            {
                rigidbodies[i] = rb;
            }
        }
    }
}
