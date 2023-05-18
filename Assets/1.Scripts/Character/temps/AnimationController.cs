using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AnimType
{
    Jump,
    Dead,
    JumpItem,
}

public class AnimationController : MonoBehaviour
{
    Animator _anim;

    void Start()
    {
        _anim = GetComponent<Animator>();
    }

    internal void PlayAnim(AnimType type)
    {
        int hash = Animator.StringToHash(type.ToString());
        _anim.SetTrigger(hash);
    }

    internal void ResetAnim()
    {
        _anim.Rebind();
    }

}
