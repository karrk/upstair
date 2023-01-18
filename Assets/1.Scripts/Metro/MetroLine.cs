using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetroLine : MonoBehaviour
{
    public GameObject _metro;
    public float _timer;
    public float _settingTime;

    const float MinCreateTime = 5f;
    const float MaxCreateTime = 10.1f;

    public GameObject _trafficLightPrefab;
    TrafficLight _trafficLight;

    Stair _currentStair;

    bool _isCountTime = false;
    const float CountTime = 2f;

    void Start()
    {
        SetInitTime();
        _timer = _settingTime;
    }

    void SetInitTime()
    {
        _settingTime = Random.Range(MinCreateTime, MaxCreateTime);
    }

    void Update()
    {
        if(_timer <= 0)
        {
            if(_currentStair == null)
            {
                Destroy(this.gameObject);
                return;
            }

            CreateMetro();
            _timer = _settingTime;

            _isCountTime = false;
        }
        else
        {
            _timer -= Time.deltaTime;

            if (!_isCountTime && _timer <= CountTime)
            {
                if(_trafficLight!=null)
                    _trafficLight.StartSign();
                
                _isCountTime = true;
            }

        }
    }

    void CreateMetro()
    {
        Instantiate(_metro,this.transform.position,Quaternion.Euler(0,180,0));
    }

    void CreateTrafficLight(Stair stair)
    {
        GameObject obj = Instantiate(_trafficLightPrefab, this.transform);

        TrafficLight tr = obj.GetComponent<TrafficLight>();
        tr._baseStair = stair;
        _trafficLight = tr;

        tr.SetRandomRotation();
        tr.SetPosition(stair.transform);
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Water"))
        {
            Destroy(this.gameObject);
        }

        if (other.CompareTag("Stair"))
        {
            if(other.TryGetComponent<Stair>(out Stair stair))
            {
                stair.isMetroLine = true;
                _currentStair = stair;
                CreateTrafficLight(stair);
            }
        }
    }

}
