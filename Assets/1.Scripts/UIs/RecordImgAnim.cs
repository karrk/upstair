using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RecordImgAnim : MonoBehaviour
{
    Image _record;
    RectTransform _imgRt;

    Animator _anim;

    Vector3 _initRotation;
    Vector3 _initScale;

    bool _scoreOver = false;

    private Vector3 _viewPortPos;

    public Vector3 ViewPortPos { get { return _viewPortPos; } }

    GameObject _fxObj;

    private void Start()
    {
        _record = FindObjectOfType<FinishPanel>().transform.Find("BestScoreText").transform.Find("RecordImg").GetComponent<Image>();
        _imgRt = _record.GetComponent<RectTransform>();
        _anim = _record.GetComponent<Animator>();

        _fxObj = FindObjectOfType<CanvasControll>().transform.Find("ObjectCanvas").GetChild(0).gameObject;

        _initRotation = _imgRt.rotation.eulerAngles;
        _initScale = _imgRt.localScale;

        _record.gameObject.SetActive(false);

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CHARACTER_DEAD, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.SCORE_OVER, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            _imgRt.localScale = _initScale;
            _imgRt.rotation = Quaternion.Euler(_initRotation);
            _scoreOver = false;
            _anim.SetBool("Play", false);

            _fxObj.GetComponent<ParticleSystem>().Stop();
            _record.gameObject.SetActive(false);
            _fxObj.gameObject.SetActive(false);
        }

        if(eventType == EVENT_TYPE.CHARACTER_DEAD)
        {
            if (_scoreOver)
            {
                StartCoroutine(DelayAnimation(3));
            }
            else
            {
                _record.gameObject.SetActive(false);
                _fxObj.gameObject.SetActive(false);
            }
            
        }

        if (eventType == EVENT_TYPE.SCORE_OVER)
        {
            _scoreOver = true;
        }
    }

    IEnumerator DelayAnimation(float delayTime)
    {
        yield return new WaitForSeconds(delayTime);
        _record.gameObject.SetActive(true);
        _anim.SetBool("Play", true);

        SetViewPortPos();
        _fxObj.gameObject.SetActive(true);
    }

    void SetViewPortPos()
    {
        Vector3 offset = new Vector3(0, 0, 30);
        _viewPortPos = Camera.main.ScreenToViewportPoint(_imgRt.position + offset);
    }

}
