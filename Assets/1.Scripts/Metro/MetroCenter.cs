using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetroCenter : PoolObject
{
    internal IEnumerator WaitCreate(float totalWaitTime,float prevSignTime,TrafficLight targetTR,Metro targetMtr)
    {
        while (this.gameObject.activeSelf)
        {
            yield return new WaitForSeconds(totalWaitTime);

            if (targetTR == null)
                break;

            targetTR.StartSign();

            yield return new WaitForSeconds(prevSignTime);

            if (targetMtr == null)
                break;

            targetMtr.Move();
        }
    }
}
