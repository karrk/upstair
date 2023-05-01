using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BestScorePointer : MonoBehaviour
{
    Rigidbody _rb;

    Vector3 _initRot;

    private void Start()
    {
        _initRot = transform.rotation.eulerAngles;
    }

    void OnEnable()
    {
        transform.rotation = Quaternion.Euler(_initRot);
        _rb = GetComponent<Rigidbody>();
        _rb.isKinematic = true;
    }

    void Swing()
    {
        _rb.isKinematic = false;
        _rb.AddForce(new Vector3(-2, 3, -3), ForceMode.Impulse);
        _rb.AddTorque(new Vector3(0, 2,20), ForceMode.Impulse);
    }

    IEnumerator ActiveFalse()
    {
        yield return new WaitForSeconds(2f);
        this.gameObject.SetActive(false);
    }

    public void ScoreOverAnim()
    {
        Swing();
        StartCoroutine(ActiveFalse());
    }
}
