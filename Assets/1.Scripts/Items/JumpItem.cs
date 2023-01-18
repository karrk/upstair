using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;

public class JumpItem : MonoBehaviour, I_ItemType
{
    public Enum ObjType { get; set; }

    JumpOption jumpOption;

    private int _currStairNum;

    private int _plusStairCount;
    private float _jumpDuration;

    void OnEnable()
    {
        transform.position = ItemCreator._spawnPos;
    }

    void Start()
    {
        jumpOption = GetComponent<JumpOption>();

        _plusStairCount = JumpOption._countList[(int)jumpOption._jumpType];
        _jumpDuration = JumpOption._durationList[(int)jumpOption._jumpType];

        Transform myParent = this.transform.parent.Find("ItemPool");
        this.transform.SetParent(myParent);
    }

    void FixedUpdate()
    {
        if (this.transform.position.y + I_ItemType.ReturnDistance <= Character.Instance.Pos.y)
        {
            ObjPool.Instance.ReturnObj(ObjType, this.gameObject);
        }
    }

    public void Use()
    {
        Enum type = SearchTargetStair().ObjType;
        GameObject targetStair = SearchTargetStair().gameObject;

        CharacterControll.Instance.Jump(targetStair.transform.position + SearchTargetStair().BasePos, 0.8f, _jumpDuration);

        Character.Instance.SetCurrentStair(targetStair);

        ObjPool.Instance.ReturnObj(this.ObjType, this.gameObject);
    }

    private Stair SearchTargetStair()
    {
        Stair targetStair = null;

        _currStairNum = StairCreator._stairDic[Character.Instance.CurrentStair];

        int targetNum = _currStairNum + _plusStairCount;

        //if (!StairCreator._stairDic.ContainsValue(targetNum))
        //    targetNum++;
        // 리스트에 계단이 있어야하고, 계단이 메트로라인이 아니여야한다.
        // 두가지 조건이 만족할때까지 1칸 위로 증가시키며 조회한다.

        while (true)
        {
            if (StairCreator._stairDic.ContainsValue(targetNum))
            {
                targetStair = StairCreator._stairDic.FirstOrDefault(x => x.Value == targetNum).Key.GetComponent<Stair>();
            }
            else
            {
                targetNum++;
                continue;
            }

            if (targetStair.isMetroLine)
                targetNum++;
            else
                return targetStair;
        }
    }


}
