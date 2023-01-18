using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetroMainCollider : MonoBehaviour
{
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Water"))
        {
            StartCoroutine(DestroyObj());
        }
    }

    IEnumerator DestroyObj()
    {
        yield return new WaitForSeconds(3f);
        Destroy(transform.parent.gameObject);
    }
}
