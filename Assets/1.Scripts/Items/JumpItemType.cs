using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class JumpItemType : ItemType
{
    public override float ReuseInterval { get { return UseDuration * 0.5f; } }

    protected abstract int JumpCount { get; }

    public override void Use()
    {
        StairType targetStair = SearchTargetStair();

        CharacterControll.Instance.Jump(targetStair.transform.position + targetStair._basePos + new Vector3(0,0.1f,0)
            , 1f, UseDuration);

        Character.Instance.SetCurrentStair(targetStair);
    }

    Stair SearchTargetStair()
    {
        Stair stair;

        int currentStairNum = int.Parse(Character.Instance.CurrentStair.name);

        int targetNum = currentStairNum + JumpCount;

        while (true)
        {
            if (!StairCreator.Instance._stairDic.ContainsKey(targetNum))
            {
                targetNum++;
                continue;
            }

            stair = StairCreator.Instance._stairDic[targetNum].GetComponent<Stair>();

            if (stair._isMetroLine)
            {
                targetNum++;
                continue;
            }

            return stair;
        }
    }
}
