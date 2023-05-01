using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemPercent : MonoBehaviour
{
    public static List<float> percentList;

    Dictionary<ObjPool.ItemType, float> _itemPercentDic;

    void Start()
    {
        InitList();
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            InitList();
        }
    }

    void InitList()
    {
        percentList = new List<float>();
        _itemPercentDic = new Dictionary<ObjPool.ItemType, float>();

        _itemPercentDic.Add(ObjPool.ItemType.JUMP, 1f);
        _itemPercentDic.Add(ObjPool.ItemType.SUPERJUMP, 0.15f);

        for (int i = 0; i < _itemPercentDic.Count; i++)
        {
            percentList.Add(_itemPercentDic[ObjPool.ItemType.JUMP + i]);
        }
    }
}
