using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BestCursor : MonoBehaviour
{
    Rigidbody _rb;
    bool _over = false;

    void OnEnable()
    {
        _over = false;
        _rb = GetComponent<Rigidbody>();
        _rb.isKinematic = true;

        EventManager.Instance.AddListener(EVENT_TYPE.SCORE_OVER, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType,Component component,object param = null)
    {
        if(eventType == EVENT_TYPE.SCORE_OVER)
        {
            if (!_over)
            {
                Swing();
                StartCoroutine(DestroyObj());
                _over = true;
            }
        }
    }

    void Swing()
    {
        _rb.isKinematic = false;
        _rb.AddForce(new Vector3(-2, 3, -3), ForceMode.Impulse);
        _rb.AddTorque(new Vector3(0, 2,20), ForceMode.Impulse);
    }

    IEnumerator DestroyObj()
    {
        yield return new WaitForSeconds(3f);
        Destroy(this.gameObject);
    }
}
