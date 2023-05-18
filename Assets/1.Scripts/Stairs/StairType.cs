using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class StairType : PoolObject
{
    public Vector3 _basePos;

    public bool _isOnlyMid;

    public bool _isMetroLine;

    public bool _isCircle;
}
