using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuperJumpItem : JumpItemType
{
    public override float UseDuration { get { return 0.8f; } }

    protected override int JumpCount { get { return 15; } }
}
