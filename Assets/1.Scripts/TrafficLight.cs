using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficLight : MonoBehaviour
{
    // ���ȸ������ x = 5 ~ -5        y = 10 ~ -20   z = 5 ~ -5
    // �����ġ���� x = -2.3 ~ 2.3    y = 0          z = 0.5

    // �ڽ��� � ��ܿ� ��ġ����
    // ����� BasePos�� �˾ƾ��Ѵ�.

    GameObject _greenLight;
    GameObject _redLight;

    public bool _signStart = false;

    const float TotalSignTime = 4f;

    float _timer = 0;

    Vector3 _leftPos;
    Vector3 _centerPos;
    Vector3 _rightPos;

    List<Vector3> _posList;

    public Stair _baseStair;

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

    void OnEnable()
    {
        _leftPos = new Vector3(-2.3f, 0, 0);
        _centerPos = new Vector3(0, 0, 0);
        _rightPos = new Vector3(2.3f, 0, 0);

        _greenLight = transform.GetChild(0).GetChild(0).gameObject;
        _redLight = transform.GetChild(0).GetChild(1).gameObject;

        _posList = new List<Vector3>()
        {
            _leftPos,_centerPos,_rightPos,
        };
    }

    public void SetRandomRotation()
    {
        float x = Random.Range(-5f, 5f);
        float y = Random.Range(-20f, 10f);
        float z = Random.Range(-5f, 5f);

        transform.rotation = Quaternion.Euler(new Vector3(x, y, z));
    }

    public void SetPosition(Transform stairTr)
    {
        //���̽� �������� 1 �̶�� ����Ʈ�� 1����
        //���̽� �������� 5 ��� ����Ʈ�� 3����
        //�������� ����Ʈ�� ���θ� ���

        Vector3 currentPos = new Vector3(0, stairTr.position.y, stairTr.position.z + 0.8f);

        if (_baseStair.isOnlyMid)
        {
            currentPos += _posList[(int)POS.CENTER];
            transform.position = currentPos;
            return;
        }

        if(_baseStair.BasePos.x == (float)STAIR_BASEPOS.LEFT)
        {
            currentPos += _posList[(int)POS.LEFT];
            transform.position = currentPos;
            return;
        }

        if (_baseStair.BasePos.x == (float)STAIR_BASEPOS.RIGHT)
        {
            currentPos += _posList[(int)POS.RIGHT];
            transform.position = currentPos;
            return;
        }

        currentPos += _posList[Random.Range(0, _posList.Count)];
        transform.position = currentPos;
    }

    public void StartSign()
    {
        //_signStart = false;

        _timer = TotalSignTime;

        StartCoroutine(Sign(0.5f));
    }

    IEnumerator Sign(float interval)
    {
        while (true)
        {
            if (_timer <= 0)
                break;

            yield return new WaitForSeconds(interval);
            _redLight.SetActive(true);
            _greenLight.SetActive(false);
            yield return new WaitForSeconds(interval);
            _redLight.SetActive(false);
            _greenLight.SetActive(true);
        }
        
    }

    void Update()
    {
        //if (_signStart)
        //{
        //    StartSign();
        //}

        if(_timer > 0)
        {
            _timer -= Time.deltaTime;
        }
    }

}
