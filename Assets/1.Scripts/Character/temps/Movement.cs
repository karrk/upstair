using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Movement : MonoBehaviour
{
    internal void JumpAction(Vector3 targetPos, float jumpPower = 0.8f, float duration = 0.05f)
    {
        transform.DOJump(targetPos, jumpPower, 1, duration).SetRecyclable(true);
    }
}
