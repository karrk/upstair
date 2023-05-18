using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BestScoreObjControll : MonoBehaviour
{
    BestScoreObj _bestScoreObj;
    StairType _targetStair;

    private void Start()
    {
        _bestScoreObj = transform.GetComponentInChildren<BestScoreObj>();

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.SCORE_OVER, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);

        if (!CheckBestScore())
        {
            _bestScoreObj.gameObject.SetActive(false);
            return;
        }

        if (!CheckBestScoreStairActive(ScoreManager.Instance.BestScore))
        {
            _bestScoreObj.gameObject.SetActive(false);
            return;
        }

        SetObjPos();
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if (eventType == EVENT_TYPE.GAME_RESTART)
        {
            _bestScoreObj.AnimReset();
            _targetStair = null;

            if (!CheckBestScore())
            {
                _bestScoreObj.gameObject.SetActive(false);
                return;
            }

            if(!CheckBestScoreStairActive(ScoreManager.Instance.BestScore))
            {
                _bestScoreObj.gameObject.SetActive(false);
                return;
            }

            SetObjPos();
        }

        if(eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            if (!CheckBestScore())
                return;

            if (!CheckBestScoreStairActive(ScoreManager.Instance.BestScore))
                return;

            SetObjPos();
        }

        if(eventType == EVENT_TYPE.SCORE_OVER)
        {
            if(_bestScoreObj.gameObject.activeSelf)
                _bestScoreObj.ScoreOverAnim();
        }
    }

    bool CheckBestScore()
    {
        return ScoreManager.Instance.BestScore != 0;
    }

    bool CheckBestScoreStairActive(int num)
    {
        return StairCreator.Instance._stairDic.ContainsKey(ScoreManager.Instance.BestScore);
    }

    void SetObjPos()
    {
        if (_targetStair != null)
            return;

        _targetStair = StairCreator.Instance._stairDic[ScoreManager.Instance.BestScore].GetComponent<StairType>();

        _bestScoreObj.gameObject.SetActive(true);
        _bestScoreObj.gameObject.transform.position =
            _targetStair.transform.position + _targetStair._basePos;
    }

}
