using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemPercent : MonoBehaviour
{
    public static List<float> percentList;

    Dictionary<ObjPool.ItemType, float> _itemDic;

    public void ResetOptions()
    {
        InitList();
    }

    void Start()
    {
        InitList();
        GameManager.Instance.E_reset += ResetOptions;
    }

    void InitList()
    {
        percentList = new List<float>();
        _itemDic = new Dictionary<ObjPool.ItemType, float>();

        _itemDic.Add(ObjPool.ItemType.JUMP, 1f);
        _itemDic.Add(ObjPool.ItemType.SUPERJUMP, 0.15f);

        for (int i = 0; i < _itemDic.Count; i++)
        {
            percentList.Add(_itemDic[ObjPool.ItemType.JUMP + i]);
        }
    }
}
