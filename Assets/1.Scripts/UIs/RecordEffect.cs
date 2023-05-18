using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecordEffect : MonoBehaviour
{
    ParticleSystem _particle;

    private void OnEnable()
    {
        _particle = GetComponent<ParticleSystem>();

        SetObjPos();
        _particle.Play();
    }

    void SetObjPos()
    {
        RecordImgAnim record = FindObjectOfType<RecordImgAnim>();
        this.transform.position = Camera.main.ViewportToWorldPoint(record.ViewPortPos);
        this.transform.LookAt(Camera.main.transform);
    }
}
