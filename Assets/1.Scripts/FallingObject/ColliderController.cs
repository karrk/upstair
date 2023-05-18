using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderController : MonoBehaviour
{
    internal BoxCollider _detectCol;
    internal CapsuleCollider _mainCol;
    internal Rigidbody _rb;

    [SerializeField]
    Vector3 _detectColCenter;
    [SerializeField]
    Vector3 _detectColSize;
    [Space (20f)]
    [SerializeField]
    Vector3 _mainColCenter;
    [SerializeField]
    float _mainColRad;
    [SerializeField]
    float _mainColHeight;

    private void Start()
    {
        _detectCol = this.gameObject.AddComponent<BoxCollider>();
        _mainCol = this.gameObject.AddComponent<CapsuleCollider>();
        _rb = this.gameObject.AddComponent<Rigidbody>();

        SetColliderValues();
    }

    void SetColliderValues()
    {
        _detectCol.center = _detectColCenter;
        _detectCol.size = _detectColSize;
        _detectCol.isTrigger = true;

        _mainCol.center = _mainColCenter;
        _mainCol.radius = _mainColRad;
        _mainCol.height = _mainColHeight;
        _mainCol.isTrigger = true;
    }

    internal void CollidersActive(bool value)
    {
        _detectCol.enabled = value;
        _mainCol.enabled = value;

        _rb.isKinematic = !value;
    }

}
