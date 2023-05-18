using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class ItemType : PoolObject
{
    public abstract float UseDuration { get; }

    public abstract float ReuseInterval { get; }

    public abstract void Use();
}
