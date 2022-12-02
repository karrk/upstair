using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CharacterControll : MonoBehaviour
{
    private static CharacterControll _instance = null;

    public static CharacterControll Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    bool isJump = false;

    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
            Destroy(this.gameObject);
    }

    Dictionary<int, Transform> _jumpPosDic;

    enum JumpPos
    {
        SINGLE,
        DOUBLE,
        LEFT,
        RIGHT,
    };

    void Start()
    {
        InitJumpPos();
    }

    void InitJumpPos()
    {
        _jumpPosDic = new Dictionary<int, Transform>();

        Transform jumpPosTr = FindObjectOfType<JumpPosControll>().transform;

        for (int i = 0; i < 4; i++)
        {
            _jumpPosDic.Add(i, jumpPosTr.GetChild(i));
        }
    }

    public void CheckJumpType(InputManager.DragType slide)
    {
        if (isJump)
            return;

        switch (slide)
        {
            case InputManager.DragType.Single:
                Jump(_jumpPosDic[(int)JumpPos.SINGLE].position);
                break;

            case InputManager.DragType.Up:
                Jump(_jumpPosDic[(int)JumpPos.DOUBLE].position);
                break;

            case InputManager.DragType.Left:
                Jump(_jumpPosDic[(int)JumpPos.LEFT].position);
                break;

            case InputManager.DragType.Right:
                Jump(_jumpPosDic[(int)JumpPos.RIGHT].position);
                break;

            default:
                break;
        }
    }

    public void Jump(Vector3 targetPos, float jumpPower = 0.8f, float duration = 0.16f)
    {
        transform.DOJump(targetPos, jumpPower, 1, duration);
        isJump = true;
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Stair"))
        {
            isJump = false;
        }
    }

    public void ResetOptions()
    {
        InitJumpPos();
        isJump = false;
    }

    
}
