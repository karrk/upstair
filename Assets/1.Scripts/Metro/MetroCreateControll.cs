using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetroCreateControll : MonoBehaviour
{
    public MetroCenterCreator _metroCenterCreator;
    public MetroCreator _metroCreator;
    public TrafficLightCreator _trafficCreator;

    MetroCenter _metroCenter;
    Metro _metro;
    TrafficLight _trafficLight;

    Vector3 _startOffset;
    Vector3 _stairCenterOffset;

    Vector3 _spawnPos;

    const float MinTime = 5f;
    const float MaxTime = 15f;

    private void Start()
    {
        _metroCenterCreator = GetComponent<MetroCenterCreator>();
        _metroCreator = GetComponentInChildren<MetroCreator>();
        _trafficCreator = GetComponentInChildren<TrafficLightCreator>();

        EventManager.Instance.AddListener(EVENT_TYPE.CREATOR_MOVE, OnEvent);

        _startOffset = new Vector3(20, 0, 0);
        _stairCenterOffset = new Vector3(3, 0, 0);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if (eventType == EVENT_TYPE.CREATOR_MOVE)
        {
            _spawnPos = (Vector3)Param;

            if(_metroCenterCreator.CkeckCreatePercent())
                Create();
        }
    }

    void Create()
    {
        _metroCenter = (MetroCenter)_metroCenterCreator.GetMetroCenter(_spawnPos+_startOffset);
        _metro = (Metro)_metroCreator.GetMetro(_spawnPos + _startOffset);
        _trafficLight = (TrafficLight)_trafficCreator.GetTrafficLight(_spawnPos+_stairCenterOffset);

        _metro.SetStartPos(_spawnPos + _startOffset);
        float waitTime = Random.Range(MinTime, MaxTime);

        StartCoroutine(_metroCenter.WaitCreate(waitTime, 2f,_trafficLight,_metro));
    }




}
