using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class BotControll : MonoBehaviour
{
    float _jumpWaitingTime;

    CapsuleCollider _mainCollider;
    BotAnim _botAnim;

    StairType _nextStair;

    bool _isLanding = false;
    bool _isDead = false;

    float _jumpPower = 1.5f;

    float _rayDistance = 0.4f;
    float _boxCastX = 8f;
    float _boxCastY = 0.1f;
    float _boxCastZ = 0.5f;

    Ray _ray;

    int _initChanceCount = 50;
    int _findChanceCount;

    Tween _jumpTween;
    Tween _rotateTween;

    Rigidbody _rb;

    Transform _modelTr;

    void Start()
    {
        _modelTr = transform.GetChild(0).GetChild(0).GetChild(0).transform;
        _botAnim = GetComponent<BotAnim>();
        //BotCreator.Instance._currentBot = this.gameObject;
        _mainCollider = GetComponent<CapsuleCollider>();
        _isDead = false;
        _findChanceCount = _initChanceCount;
        _jumpWaitingTime = Random.Range(0.4f, 2f);
        StartCoroutine(FindNextStair());
    }

    void JumpNextStair()
    {
        if (_isDead)
            return;

        _jumpTween = transform.DOJump(GetNextStairPos(), _jumpPower, 1, 0.2f);
        DeadCheckRotate(false);
        _isLanding = false;
        _nextStair = null;
    }

    Vector3 GetNextStairPos()
    {
        Vector3 nextPos = new Vector3(0, this.transform.position.y + 2, this.transform.position.z + 2);

        if (_nextStair != null)
        {
            nextPos = (_nextStair.transform.position + _nextStair._basePos) + (new Vector3(0, 0.5f, 0.4f));
        }

        _botAnim.SetJumpAnim(true);

        return nextPos;
    }

    IEnumerator FindNextStair()
    {
        while (true)
        {
            yield return new WaitForSeconds(_jumpWaitingTime);

            if (_findChanceCount <= 0)
            {
                SwingObj();
                break;
            }

            _findChanceCount--;

            _ray = new Ray(transform.position, transform.forward);

            RaycastHit hitInfo;

            Debug.DrawLine(_ray.origin, _ray.origin + _ray.direction * _rayDistance, Color.red);
            //DrawWireCube(_ray.origin, new Vector3(_boxCastX, _boxCastY, _boxCastZ));
            //DrawWireCube(_ray.origin + _ray.direction * _rayDistance, new Vector3(_boxCastX, _boxCastY, _boxCastZ));

            if (Physics.BoxCast(_ray.origin, new Vector3(_boxCastX, _boxCastY, _boxCastZ), _ray.direction, out hitInfo, Quaternion.identity, _rayDistance))
            {
                if (!hitInfo.collider.TryGetComponent<StairType>(out _nextStair))
                    continue;

                break;
            }
        }

        JumpNextStair();
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Stair"))
        {
            if (_botAnim != null)
                _botAnim.SetJumpAnim(false);

            _isLanding = true;
            _findChanceCount = _initChanceCount;
            StartCoroutine(FindNextStair());
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            _jumpTween.Kill();
            _botAnim.PlayDeadAnim();
            _mainCollider.enabled = false;
            _isLanding = false;
            _isDead = true;
            GetComponent<BotFX>().PlayBotPunchFX();
            SwingObj();
        }

        if (other.gameObject.CompareTag("Water"))
        {
            _rotateTween.Kill();

            BotCreator.Instance.ReturnObj(GetComponent<BotObj>());
        }
    }

    void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag("Stair"))
        {
            if (other.TryGetComponent<StairType>(out StairType stair))
            {
                _nextStair = stair;
            }
        }
    }

    void SwingObj()
    {
        _rb = GetComponent<Rigidbody>();

        _rb.constraints = RigidbodyConstraints.None;

        transform.DOPunchScale(new Vector3(0.8f, 0.8f, 0.4f), 0.05f).SetEase(Ease.InOutElastic).SetAutoKill(true);
        
        _rb.AddForce(new Vector3(Random.Range(-200, 200), 700, -100), ForceMode.Impulse);

        DeadCheckRotate(true);
    }

    void DeadCheckRotate(bool isKilledAnim)
    {
        Vector3 rotation = new Vector3(0,Random.Range(-90f, 90f),0);
        float duration = 0.2f;

        if (isKilledAnim)
        {
            rotation += new Vector3(Random.Range(-180f, 180f), rotation.y * 2, Random.Range(-180f, 180f));
            duration += 1f;
        }

        _rotateTween = _modelTr.DORotate(rotation, duration, RotateMode.WorldAxisAdd);
    }

    //void DrawWireCube(Vector3 center, Vector3 size) // 레이 디버그용도
    //{
    //    Vector3 halfSize = size / 2;

    //    Vector3 frontTopLeft = center + new Vector3(-halfSize.x, halfSize.y, -halfSize.z);
    //    Vector3 frontTopRight = center + new Vector3(halfSize.x, halfSize.y, -halfSize.z);
    //    Vector3 frontBottomLeft = center + new Vector3(-halfSize.x, -halfSize.y, -halfSize.z);
    //    Vector3 frontBottomRight = center + new Vector3(halfSize.x, -halfSize.y, -halfSize.z);

    //    Vector3 backTopLeft = center + new Vector3(-halfSize.x, halfSize.y, halfSize.z);
    //    Vector3 backTopRight = center + new Vector3(halfSize.x, halfSize.y, halfSize.z);
    //    Vector3 backBottomLeft = center + new Vector3(-halfSize.x, -halfSize.y, halfSize.z);
    //    Vector3 backBottomRight = center + new Vector3(halfSize.x, -halfSize.y, halfSize.z);

    //    Debug.DrawLine(frontTopLeft, frontTopRight, Color.green);
    //    Debug.DrawLine(frontTopRight, frontBottomRight, Color.green);
    //    Debug.DrawLine(frontBottomRight, frontBottomLeft, Color.green);
    //    Debug.DrawLine(frontBottomLeft, frontTopLeft, Color.green);

    //    Debug.DrawLine(backTopLeft, backTopRight, Color.green);
    //    Debug.DrawLine(backTopRight, backBottomRight, Color.green);
    //    Debug.DrawLine(backBottomRight, backBottomLeft, Color.green);
    //    Debug.DrawLine(backBottomLeft, backTopLeft, Color.green);

    //    Debug.DrawLine(frontTopLeft, backTopLeft, Color.green);
    //    Debug.DrawLine(frontTopRight, backTopRight, Color.green);
    //    Debug.DrawLine(frontBottomLeft, backBottomLeft, Color.green);
    //    Debug.DrawLine(frontBottomRight, backBottomRight, Color.green);
    //}
}
