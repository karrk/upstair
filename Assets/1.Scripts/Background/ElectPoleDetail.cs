using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElectPoleDetail : MonoBehaviour
{
    Transform tr0;
    Transform tr1;
    Transform tr2;

    void Start()
    {
        tr0 = transform.GetChild(0);
        tr1 = transform.GetChild(1);
        tr2 = transform.GetChild(2);

        SetRandomActive(tr0);
        SetRandomActive(tr1);
        SetRandomActive(tr2);

        SetRandomRotation(tr0);
        SetRandomRotation(tr1);
        SetRandomRotation(tr2);
    }

    void SetRandomActive(Transform target)
    {
        if (Random.Range(0, 2) == 1)
            target.gameObject.SetActive(false);
    }

    void SetRandomRotation(Transform target)
    {
        if (!target.gameObject.activeSelf)
            return;

        target.transform.Rotate(new Vector3(0, Random.Range(0, 180)),Space.World);
    }
}
