using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Rock : PoolObject
{
    CameraShaker _shaker;
    ColliderController _colliderController;

    int _nextGap;
    const int RotateSpeed = -100;

    StairType _contactStair;
    StairType _nextStair;

    bool _isCrash;

    Transform _modelObj;

    bool IsCrash
    {
        get { return _isCrash; }
        set
        {
            if(value == true)
            {
                StartCoroutine(SetCrushProperty(0.3f));
            }
        }
    }

    bool _isfail;

    Coroutine _rotateRoutine;

    WarningObj _warningObj;

    private void OnEnable()
    {
        if(_colliderController != null)
        {
            _colliderController.CollidersActive(true);
            _isfail = false;
        }
    }

    private void Start()
    {
        _modelObj = this.transform.GetChild(0);
        _shaker = GetComponent<CameraShaker>();
        _colliderController = GetComponent<ColliderController>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.TryGetComponent<StairType>(out _contactStair) && !IsCrash)
        {
            IsCrash = true;
            _colliderController._detectCol.enabled = false;
            _nextStair = FindNextStair(Random.Range(5,10));
            JumpToNextStair();
        }
    }

    IEnumerator Rotate(int gap)
    {
        while (true)
        {
            _modelObj.transform.Rotate(new Vector3(Time.deltaTime * RotateSpeed * gap, 0, 0));

            yield return null;
        }
    }

    StairType FindNextStair(int nextGap)
    {
        if (_warningObj != null)
        {
            _warningObj.gameObject.SetActive(false);
            WarningPointerCreator.Instance.CallReturn(_warningObj);
            _warningObj = null;
        }

        int currentStairNum = int.Parse(_contactStair.name);
        int chance = 2;

        while (true)
        {
            if (chance <= 0)
                break;

            int nextStairNum = currentStairNum - nextGap;

            if(!StairCreator.Instance._stairDic.ContainsKey(nextStairNum))
            {
                currentStairNum--;
                chance--;
                continue;
            }

            _nextGap = currentStairNum - nextStairNum;

            return StairCreator.Instance._stairDic[nextStairNum];
        }

        BreakThisObj();
        _isfail = true;
        return null;
    }

    IEnumerator SetCrushProperty(float waitTime)
    {
        yield return new WaitForSeconds(waitTime);
        _isCrash = false;
    }

    void JumpToNextStair()
    {
        if (IsCrash)
            return;

        if(_isfail)
        {
            BreakThisObj();
            return;
        }

        if (_warningObj == null)
            _warningObj = WarningPointerCreator.Instance.GetWarning(_nextStair);
        
        Vector3 nextPos = _nextStair.transform.position + _nextStair._basePos;

        transform.DOJump(nextPos, _nextGap, 1, GetDuration(_nextGap));

        if (_rotateRoutine != null)
            StopCoroutine(_rotateRoutine);

        _rotateRoutine = StartCoroutine(Rotate(_nextGap));
    }

    void FinishAction()
    {
        StopCoroutine(_rotateRoutine);
        Vector3 nextPos = new Vector3(transform.position.x, transform.position.y - 10f, transform.position.z - 8f);
        transform.DOJump(nextPos, 10, 1, GetDuration(10)).OnComplete(() => { 
            StopCoroutine(_rotateRoutine);
            _colliderController.CollidersActive(false);
        });
        _rotateRoutine = StartCoroutine(Rotate(10));
    }

    void BreakThisObj()
    {
        if (_warningObj != null)
        {
            WarningPointerCreator.Instance.CallReturn(_warningObj);
            _warningObj = null;
        }

        FinishAction();
        _colliderController.CollidersActive(false);
    }

    float GetDuration(int gap)
    {
        float duration = gap*0.2f;
        return duration;
    }

}
