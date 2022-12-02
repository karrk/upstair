using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface I_ItemType : IPoolingType
{
    public static float ReturnDistance = 10f;

    void Use();
}

