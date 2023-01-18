using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class BotControll : MonoBehaviour
{
    float JumpWaitingTime = 2f;
    const float SearchTime = 0.5f;

    float _timer;
    BoxCollider _nextSearchCollider;
    CapsuleCollider _mainCollider;

    Stair _nextStair;

    bool _isLanding = false;

    [SerializeField]
    float _jumpPower = 1f;

    void Start()
    {
        BotCreator.Instance._currentBot = this.gameObject;
        _mainCollider = GetComponent<CapsuleCollider>();
        _nextSearchCollider = this.transform.GetChild(0).GetComponent<BoxCollider>();

        JumpWaitingTime = Random.Range(0.4f, 2f);
    }

    void FixedUpdate()
    {
        if (Character.Instance.Pos.y > this.transform.position.y + 30f)
            Destroy(this.gameObject);

        if (!_isLanding)
            return;

        if (_timer < JumpWaitingTime)
        {
            _timer += Time.deltaTime;

        }
        else
        {
            JumpNextStair();
            _timer = 0;
        }
    }

    //void OnDisable()
    //{
    //    if(BotCreator.Instance._currentBot != null)
    //    {
    //        BotCreator.Instance._currentBot = null;
    //    }
    //}

    void JumpNextStair()
    {
        transform.DOJump(GetNextStairPos(), _jumpPower, 1, 0.2f);
        _isLanding = false;
        _nextStair = null;
    }

    Vector3 GetNextStairPos()
    {
        Vector3 nextPos = new Vector3(0, this.transform.position.y + 2, this.transform.position.z + 2);

        if(_nextStair != null)
        {
            nextPos = (_nextStair.transform.position + _nextStair.BasePos) + (new Vector3(0, 0.5f, 0.5f));
        }

        return nextPos;
    }

    IEnumerator FindNextStair()
    {
        _nextSearchCollider.enabled = true;
        yield return new WaitForSeconds(SearchTime);
        _nextSearchCollider.enabled = false;
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Stair"))
        {
            _isLanding = true;
            StartCoroutine(FindNextStair());
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            _mainCollider.enabled = false;
            _isLanding = false;
            SwingObj();
            StartCoroutine(ShutDownObj());
        }
    }

    void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag("Stair"))
        {
            if(other.TryGetComponent<Stair>(out Stair stair))
            {
                _nextStair = stair;
            }
        }
    }

    void SwingObj()
    {
        Rigidbody rb = GetComponent<Rigidbody>();

        rb.constraints = RigidbodyConstraints.None;

        int rand = Random.Range(0, 2);

        if (rand == 0)
            rand = -1;

        rb.AddForce(new Vector3(30*rand, 10, 0), ForceMode.Impulse);
        rb.DORotate(new Vector3(0, 1000 * rand, 1000), 1,RotateMode.Fast);
    }

    IEnumerator ShutDownObj()
    {
        yield return new WaitForSeconds(3f);
        Destroy(this.gameObject);
    }
}
