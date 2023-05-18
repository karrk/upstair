using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Metro : PoolObject
{
    internal bool _isFinish;
    float _speed = 25f;

    Vector3 _initPos;

    internal void SetStartPos(Vector3 pos)
    {
        this._initPos = pos;
    }

    internal void Move()
    {
        if (!this.gameObject.activeSelf)
            return;

        StartCoroutine(MoveRoutine(_speed));
    }

    internal void SetSpeed(float value)
    {
        this._speed = value;
    }

    IEnumerator MoveRoutine(float Speed)
    {
        _isFinish = false;

        while (this.gameObject.activeSelf)
        {
            if (_isFinish)
                break;

            this.transform.position += new Vector3(-1, 0, 0) * Speed * Time.deltaTime;

            if (transform.position.x < -50)
                _isFinish = true;

            yield return null;
        }

        transform.position = _initPos;
    }
}
