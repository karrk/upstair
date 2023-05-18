using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraShaker : MonoBehaviour
{
    internal void CamShake()
    {
        float distance = this.transform.position.z - Character.Instance.Pos.z;

        if (Character.Instance.Pos.z - 10 > this.transform.position.z)
            return;

        EventManager.Instance.PostNotification(EVENT_TYPE.CAMERA_SHAKE, this,
                distance
                );
    }
}
