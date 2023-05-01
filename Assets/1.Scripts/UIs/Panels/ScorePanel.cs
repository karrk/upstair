using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScorePanel : MonoBehaviour
{
    Vector3 _initPos;

    GameObject _scorePanel;

    private void Start()
    {
        _scorePanel = transform.GetChild(0).gameObject;
        _initPos = _scorePanel.transform.position;

        EventManager.Instance.AddListener(EVENT_TYPE.CONTACT_STAIR, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            _scorePanel.transform.position = _initPos;
        }

        if(eventType == EVENT_TYPE.CONTACT_STAIR)
        {
            Move();
        }
    }

    int CharacterDistance()
    {
        return (int)(Mathf.RoundToInt(Character.Instance.Pos.y) - (Character.Instance.LastPosY));
    }

    void Move()
    {
        int distance = CharacterDistance();

        _scorePanel.transform.position += new Vector3(0, distance, distance);
    }
}
