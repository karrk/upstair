using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemPercent : MonoBehaviour
{
    const float BaseJump = 1;
    const float SuperJump = 0.2f;

    List<float> _itemPercentList;

    private void Start()
    {
        _itemPercentList = new List<float>();

        _itemPercentList.Add(BaseJump);
        _itemPercentList.Add(SuperJump);

        _itemPercentList.Sort();
    }

    internal ITEMTYPE GetRandomItem()
    {
        float random = Random.Range(0f, 1f);

        for (int i = 0; i < _itemPercentList.Count; i++)
        {
            if (random > _itemPercentList[i])
                return (ITEMTYPE)(i);
        }

        return (ITEMTYPE)_itemPercentList.Count-1;
    }
}
