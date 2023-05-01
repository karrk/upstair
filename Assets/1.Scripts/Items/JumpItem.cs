using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;

public class JumpItem : MonoBehaviour, I_ItemType
{
    public Enum ObjType { get; set; }

    JumpOption jumpOption;

    private int _currentStairNum;

    private int _plusStairCount;

    private float _itemJumpDuration;

    public float Duration
    {
        get { return _itemJumpDuration; }
    }

    void OnEnable()
    {
        transform.position = ItemCreator._spawnPos;
    }

    void Start()
    {
        jumpOption = GetComponent<JumpOption>();

        _plusStairCount = JumpOption._countList[(int)jumpOption._jumpType];
        _itemJumpDuration = JumpOption._durationList[(int)jumpOption._jumpType];

        Transform myParent = FindObjectOfType<ItemPoolManager>().transform;
        this.transform.SetParent(myParent);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Water"))
            ReturnItem();
    }

    public void Use()
    {
        Stair targetStair = SearchTargetStair();

        if(targetStair == null)
        { Debug.Log("����"); }

        CharacterControll.Instance.Jump(targetStair.transform.position + targetStair.BasePos, 0.8f, _itemJumpDuration);

        Character.Instance.SetCurrentStair(targetStair.gameObject);

        ObjPool.Instance.ReturnObj(this.ObjType, this.gameObject);
    }

    private Stair SearchTargetStair()
    {
        Stair targetStair;

        _currentStairNum = int.Parse(Character.Instance.CurrentStair.name);

        int targetNum = _currentStairNum + _plusStairCount;

        //if (!StairCreator._stairDic.ContainsValue(targetNum))
        //    targetNum++;
        // ����Ʈ�� ����� �־���ϰ�, ����� ��Ʈ�ζ����� �ƴϿ����Ѵ�.
        // �ΰ��� ������ �����Ҷ����� 1ĭ ���� ������Ű�� ��ȸ�Ѵ�.

        while (true)
        {
            if (!StairCreator._dic.ContainsKey(targetNum))
            {
                targetNum++;
                continue;
            }

            targetStair = StairCreator._dic[targetNum].GetComponent<Stair>();

            if (targetStair.isMetroLine)
            {
                targetNum++;
                continue;
            }

            return targetStair;
        }
    }

    public void ReturnItem()
    {
        ObjPool.Instance.ReturnObj(ObjType, this.gameObject);
    }
}
