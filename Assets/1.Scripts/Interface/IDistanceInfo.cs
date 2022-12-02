using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface IDistanceInfo
{
    public float PlayerDistance { get; }
    bool isNearby(float specDistance);
}
