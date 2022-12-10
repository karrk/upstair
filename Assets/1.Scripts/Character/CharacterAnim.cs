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

    Animator anim;

    public void ResetOptions()
    {
        Init();

        
    }

    void Start()
    {
        Init();
    }

    void Init()
    {
        anim = GetComponentInChildren<Animator>();
        if (anim.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1)
        {
            anim.SetTrigger("Dead");
        }
            
        EventManager.Instance.AddListener(EVENT_TYPE.CHARACTER_JUMP, OnEvent);
    }

    void OnEvent(EVENT_TYPE eventType, Component sender, object param = null)
    {
        if (eventType == EVENT_TYPE.CHARACTER_JUMP)
            PlayJumpAnim();
    }

    void PlayJumpAnim()
    {
        anim.SetTrigger("Jump");
    }

    void PlayJumpItemAnim(bool value)
    {
        anim.SetBool("JumpItem",value);
    }

    public void PlayCruchKillAnim()
    {
        anim.SetTrigger("Dead");
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


}
