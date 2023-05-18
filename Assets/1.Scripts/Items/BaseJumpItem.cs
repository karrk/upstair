using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseJumpItem : JumpItemType
{
    public override float UseDuration { get { return 0.4f; } }

    protected override int JumpCount { get { return 5; } }
}
