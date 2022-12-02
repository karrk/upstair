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

    void Update()
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
        _currStairNum = StairCreator._stairDic[Character.Instance.CurrentStair];

        int targetNum = _currStairNum + _plusStairCount;

        if (!StairCreator._stairDic.ContainsValue(targetNum))
            targetNum++;

        if (StairCreator._stairDic.FirstOrDefault(x => x.Value == targetNum).Key.TryGetComponent<Stair>(out Stair stair))
            return stair;

        else
            return null;
    }


}
