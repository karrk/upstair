using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterAnim : MonoBehaviour
{
    private static CharacterAnim _instance;

    public static CharacterAnim Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    Animator _anim;
    int _defaultStateHashCode = int.MinValue;

    void Start()
    {
        _anim = GetComponentInChildren<Animator>();
        if (_anim.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1)
        {
            _anim.SetTrigger("Dead");
        }

        

        EventManager.Instance.AddListener(EVENT_TYPE.CHARACTER_JUMP, OnEvent);
        //EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType, Component sender, object param = null)
    {
        if (eventType == EVENT_TYPE.CHARACTER_JUMP)
        {
            if(_defaultStateHashCode == int.MinValue)
                GetDefaultStateHashValue();

            _anim.Play(_defaultStateHashCode, 0, 0);

            PlayJumpAnim();
        }
    }

    void PlayJumpAnim()
    {
        _anim.SetTrigger("Jump");
    }

    void PlayJumpItemAnim(bool value)
    {
        _anim.SetBool("JumpItem",value);
    }

    public void PlayCruchKillAnim()
    {
        _anim.SetTrigger("Dead");
    }

    void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.CompareTag("Item"))
        {
            PlayJumpItemAnim(true);
        }
        else if (collision.gameObject.CompareTag("Stair"))
        {
            PlayJumpItemAnim(false);
        }
    }

    void GetDefaultStateHashValue()
    {
        AnimatorStateInfo stateInfo = _anim.GetCurrentAnimatorStateInfo(0);

        _defaultStateHashCode = stateInfo.fullPathHash;
    }

}
