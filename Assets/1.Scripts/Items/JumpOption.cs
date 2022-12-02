using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpOption : MonoBehaviour
{
    [SerializeField]
    public enum JumpType
    {
        BASIC_JUMP,
        SUPER_JUMP,
    }

    public JumpType _jumpType;

    public static List<int> _countList = new List<int>()
    {
        BasicCount,
        SuperCount,
    };


    public static List<float> _durationList = new List<float>()
    {
        BasicDuration,
        SuperDuration,
    };

    const int BasicCount = 5;
    const float BasicDuration = 0.3f;

    const int SuperCount = 20;
    const float SuperDuration = 0.8f;


}
