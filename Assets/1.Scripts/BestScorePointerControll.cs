using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BestScorePointerControll : MonoBehaviour
{
    GameObject _bestScorePointerObj;

    private void Start()
    {
        _bestScorePointerObj = transform.GetComponentInChildren<BestScorePointer>().gameObject;

        if (CheckBestScore())
            SetPointerPos();
        else
            _bestScorePointerObj.SetActive(false);

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.SCORE_OVER, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if (eventType == EVENT_TYPE.GAME_RESTART)
        {
            if (CheckBestScore())
                SetPointerPos();
        }

        if(eventType == EVENT_TYPE.SCORE_OVER)
        {
            if(_bestScorePointerObj.activeSelf)
            _bestScorePointerObj.GetComponent<BestScorePointer>().ScoreOverAnim();
        }
    }

    bool CheckBestScore()
    {
        return ScoreManager.Instance.BestScore != 0;
    }

    void SetPointerPos()
    {
        int score = ScoreManager.Instance.BestScore;

        float offset_X = -4.5f;
        Vector3 pos = new Vector3(offset_X, score + 1, score + 2f);

        _bestScorePointerObj.SetActive(true);
        _bestScorePointerObj.transform.position = pos;
    }
}
