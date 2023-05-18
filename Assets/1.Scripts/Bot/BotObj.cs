using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotObj : PoolObject
{
    //º¿¿ÀºêÁ§Æ®´Â ÇÙ½É ±â´É

    BotActions _action;

    StairType _nextStair;
    StairType _currentStair;

    CapsuleCollider _mainCollider;

    bool _isLanding;
    bool _isDead;

    float _randomJumpWaitingTime;

    const float _minJumpWaitingTime =  0.4f;
    const float _maxJumpWaitingTime = 2f;

    private void OnEnable()
    {
        _randomJumpWaitingTime = Random.Range(_minJumpWaitingTime, _maxJumpWaitingTime);

        if (_action != null)
        {
            _action.ResetOptions();
            _currentStair = null;
            _mainCollider.enabled = true;
            _isLanding = false;
            _isDead = false;
        }
    }

    private void Start()
    {
        _mainCollider = GetComponent<CapsuleCollider>();
        _action = GetComponent<BotActions>();
    }

    Stair FindNextStair()
    {
        if (_currentStair == null)
            return null;

        int currentStairNum = int.Parse(_currentStair.gameObject.name);

        if (!StairCreator.Instance._stairDic.ContainsKey(currentStairNum + 1))
            return null;

        return StairCreator.Instance._stairDic[currentStairNum + 1];
    }

    IEnumerator DelayJump(float timeTolerance)
    {
        yield return new WaitForSeconds(_randomJumpWaitingTime + timeTolerance);

        if (_isDead)
            yield break;

        _action.Jump(_nextStair);
        _action.ObjRotateAction(false);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.TryGetComponent<StairType>(out _currentStair))
        {
            _isLanding = true;
            _nextStair = FindNextStair();
            StartCoroutine(DelayJump(Random.Range(-0.1f, 0.5f)));
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Water"))
        {
            //_action.KillAllTweens();
            BotCreator.Instance.ReturnObj(this);
        }

        if (_isDead)
            return;

        if(other.CompareTag("Player"))
        {
            _isDead = true;
            _mainCollider.enabled = false;
            _action.ObjRotateAction(true);
            _action.ObjPunchAction();
            _action.ObjThrowAction();
        }
    }
}
