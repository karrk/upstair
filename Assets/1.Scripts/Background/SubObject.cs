using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class SubObject : PoolObject
{
    public abstract Vector3 MinPos { get; }
    public abstract Vector3 MaxPos { get; }

    public abstract Vector3 MinRot { get; }
    public abstract Vector3 MaxRot { get; }

    public void SetRandomPos()
    {
        if (MinPos == Vector3.zero && MaxPos == Vector3.zero)
            return;

        this.transform.position += new Vector3(
            Random.Range(MinPos.x, MaxPos.x), Random.Range(MinPos.y, MaxPos.y), Random.Range(MinPos.z, MaxPos.z));
    }

    public void SetRandomRot()
    {
        if (MinRot == Vector3.zero && MaxRot == Vector3.zero)
            return;

        Vector3 randRot = new Vector3(
            Random.Range(MinRot.x, MaxRot.x), Random.Range(MinRot.y, MaxRot.y), Random.Range(MinRot.z, MaxRot.z));

        this.transform.rotation = Quaternion.Euler(randRot);
    }
}
