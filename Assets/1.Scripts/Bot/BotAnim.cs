using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotAnim : MonoBehaviour
{
    Animator _anim;

    private void Start()
    {
        _anim = GetComponentInChildren<Animator>();
    }

    public void SetJumpAnim(bool play)
    {
        _anim.SetBool("Jump", play);
    }

    public void PlayDeadAnim()
    {
        if (_anim.GetBool("Dead"))
            return;

        _anim.SetBool("Dead", true);
    }
}
