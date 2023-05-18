using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficLight : PoolObject
{
    GameObject _greenLight;
    GameObject _redLight;

    public bool _signStart = false;

    const float TotalSignTime = 3.5f;
    const float CrossSignInterval = 0.2f;

    float _timer = 0;

    Vector3 _leftPos = new Vector3(-2.3f, 0, 0);
    Vector3 _centerPos = new Vector3(0, 0, 0);
    Vector3 _rightPos = new Vector3(2.3f, 0, 0);

    Vector3[] _posArr;

    public StairType _baseStair;
    Transform _modelTr;

    enum POS
    {
        LEFT,
        CENTER,
        RIGHT
    }

    enum STAIR_BASEPOS
    {
        LEFT = 1,
        CENTER = 3,
        RIGHT = 5,
    }

    private void OnEnable()
    {
        if (_greenLight == null)
        {
            _greenLight = transform.GetChild(0).GetChild(2).gameObject;
            _redLight = transform.GetChild(0).GetChild(3).gameObject;
            _modelTr = transform.GetChild(0).transform;

            _posArr = new Vector3[] { _leftPos, _centerPos, _rightPos, };
        }

        _baseStair = null;

        _greenLight.SetActive(false);
        _redLight.SetActive(false);
    }

    public void SetRandomRotation()
    {
        float x = Random.Range(-15f, 15f);
        float y = Random.Range(-15f, 15f) + 180f;
        float z = Random.Range(-15f, 15f);

        _modelTr.rotation = Quaternion.Euler(new Vector3(x, y, z));
    }

    public void SetPosition(Transform stairTr)
    {
        //베이스 포지션이 1 이라면 리스트의 1번만
        //베이스 포지션이 5 라면 리스트의 3번만
        //나머지는 리스트의 전부를 사용

        Vector3 currentPos = new Vector3(0, stairTr.position.y+1, stairTr.position.z+1);

        if (_baseStair._isOnlyMid)
        {
            currentPos += _posArr[(int)POS.CENTER];
            transform.position = currentPos;
            return;
        }

        if (_baseStair._basePos.x == (float)STAIR_BASEPOS.LEFT)
        {
            currentPos += _posArr[(int)POS.LEFT];
            transform.position = currentPos;
            return;
        }

        if (_baseStair._basePos.x == (float)STAIR_BASEPOS.RIGHT)
        {
            currentPos += _posArr[(int)POS.RIGHT];
            transform.position = currentPos;
            return;
        }

        currentPos += _posArr[Random.Range(0, _posArr.Length)];
        transform.position = currentPos;
    }

    public void StartSign()
    {
        if (!this.gameObject.activeSelf)
            return;

        StartCoroutine(Sign(TotalSignTime, CrossSignInterval));
    }

    IEnumerator Sign(float totalTime, float interval)
    {
        while (this.gameObject.activeSelf)
        {
            if (totalTime <= 0)
                break;

            yield return new WaitForSeconds(interval);
            _redLight.SetActive(true);
            _greenLight.SetActive(false);
            yield return new WaitForSeconds(interval);
            _redLight.SetActive(false);
            _greenLight.SetActive(true);

            totalTime -= interval * 2;
        }

        _redLight.SetActive(false);
        _greenLight.SetActive(false);
    }

    private void OnTriggerStay(Collider other)
    {
        if (_baseStair == null && other.TryGetComponent<StairType>(out _baseStair))
        {
            SetRandomRotation();
            SetPosition(_baseStair.transform);
            _baseStair._isMetroLine = true;
        }
    }
}
