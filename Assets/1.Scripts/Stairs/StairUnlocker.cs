using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum STAIRTYPE
{
    Single = 0,
    Left = 1,
    Right = 2,

    Circle = 3,
    CircleLeft = 4,
    CircleRight = 5,

    RightMove = 6,
    LeftMove = 7,

    Double = 8,
}

public class StairUnlocker : MonoBehaviour
{
    internal STAIRTYPE UnlockedMaxRange
    {
        get
        {
            Debug.Log($"해제번호 {unlockIdx + 1} : 총 해제 {_unlockStairNumbers.Length}");

            if (!_progressDic.ContainsKey(unlockIdx))
                return STAIRTYPE.Double;

            if(_progressDic[unlockIdx] <= GameManager.Instance.GameProgress)
            {
                unlockIdx++;
                return (STAIRTYPE)_unlockStairNumbers[unlockIdx]; // 에러 발생
            }

            return (STAIRTYPE)_unlockStairNumbers[unlockIdx];
        }
    }

    float[] _unlockProgresses = {0.1f, 0.2f, 0.5f, 0.7f };
    int[] _unlockStairNumbers = {3, 4, 6, 8 };

    Dictionary<int, float> _progressDic;

    int unlockIdx;

    private void Start()
    {
        unlockIdx = 0;

        _progressDic = new Dictionary<int, float>();

        for (int i = 0; i < _unlockProgresses.Length; i++)
        {
            _progressDic.Add(i, _unlockProgresses[i]);
        }

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            unlockIdx = 0;
        }
    }


}
