using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System.Linq;

public class Rock : MonoBehaviour
{
    const float InitSpeed = 120;

    Transform _modelTr;

    GameObject _currentStair;
    GameObject _nextStair;
    Vector3 _nextStairPos;

    bool _isCrash;

    int _stepGap;
    float _duration;

    Vector3 _crashPos;

    public GameObject _waningStair;

    BoxCollider _startCollider;

    float _missingTimer = int.MaxValue;

    void Start()
    {
        
        _stepGap = Random.RandomRange(5, 10);
        _duration = SetDuration();

        _modelTr = this.transform.GetChild(0).GetComponent<Transform>();
        this.transform.SetParent(null);
        _startCollider = GetComponent<BoxCollider>();

        _waningStair = transform.GetChild(1).gameObject;
        _waningStair.transform.SetParent(null);

        RockCreator.AddRock(this);
    }

    void FixedUpdate()
    {
        if (_missingTimer >= 0)
            _missingTimer -= Time.deltaTime;
        else
        {
            Destroy(this.gameObject);
            RockCreator.RemoveRock(this);
        }
            

        Rotate();
    }

    void Rotate()
    {
        _modelTr.Rotate(new Vector3(Time.deltaTime * -(InitSpeed*_stepGap), 0, 0));
    }

    bool FindNextStair(ref int searchStairNum)
    {
        if (!StairCreator._stairDic.ContainsValue(searchStairNum))
            searchStairNum--;

        return StairCreator._stairDic.ContainsValue(searchStairNum);
    }

    float SetDuration()
    {
        float duration = (-0.1f * _stepGap) + 2;
        return duration;
    }


    void MoveToNextStair()
    {
        if (_isCrash)
            return;

        int idx = StairCreator._stairDic[_currentStair];

        int nextNum = idx - _stepGap;

        if (FindNextStair(ref nextNum))
        {
            _nextStair = StairCreator._stairDic.FirstOrDefault(x => x.Value == nextNum).Key;

            if (_nextStair.TryGetComponent<Stair>(out Stair stair)) 
            {
                _nextStairPos = _nextStair.transform.position + stair.BasePos;
                _waningStair.transform.position = _nextStairPos;
                transform.DOJump(_nextStairPos, 7, 1, _duration);
                StartCoroutine(SetFalseCollider());
            }
        }

        else
        {
            Destroy(_waningStair);

            Vector3 offSet = new Vector3(
                this.transform.position.x,
                this.transform.position.y - 8f,
                this.transform.position.z - 10f
                );

            transform.DOJump(offSet, 10, 1, 1.5f).OnComplete(() =>
            {
                Destroy(this.gameObject);

                RockCreator.RemoveRock(this);
            });
        }
    }

    IEnumerator SetFalseCollider()
    {
        yield return new WaitForSeconds(_duration - 0.4f);
        _isCrash = false;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Stair"))
        {
            if (_startCollider != null)
                Destroy(_startCollider);

            _currentStair = other.gameObject;
            MoveToNextStair();
            _isCrash = true;
            _missingTimer = 1.6f;

            CamShake();

            if (other.TryGetComponent<Stair>(out Stair stair))
            {
                _crashPos = stair.BasePos + stair.transform.position;
                //SendCrashPos(_crashPos);
                EffectManager.Instance.PlayEffect(_crashPos, EffectManager.Instance._crashFXPool);
                DeathManager.Instance.CallDeathPoint(_crashPos);
            }
        }

        if (other.gameObject.CompareTag("Water"))
        {
            Vector3 offset = new Vector3(0, 4, 0);

            EffectManager.Instance.PlayEffect(this.transform.position+offset, EffectManager.Instance._splashFXPool);
        }
    }

    void CamShake()
    {
        EventManager.Instance.PostNotification(EVENT_TYPE.CAMERA_SHAKE, this,
                this.transform.position.z - Character.Instance.Pos.z
                );
    }

    //void SendCrashPos(Vector3 pos)
    //{
    //    EventManager.Instance.PostNotification(EVENT_TYPE.CRASH, this, pos);
    //}

    void OnDisable()
    {
        Destroy(_waningStair);
    }
}
