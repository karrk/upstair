using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    [Space (10f)]
    public GameObject _crashFX;

    List<GameObject> _crashFxList = new List<GameObject>();

    Vector3 _receivePos;

    GameObject _fxObj;

    void Start()
    {
        Init(_crashFX, _crashFxList);

        EventManager.Instance.AddListener(EVENT_TYPE.CRASH, OnEvent);
    }

    void Init(GameObject fx, List<GameObject> targetList)
    {
        for (int i = 0; i < 10; i++)
        {
            GameObject obj = Instantiate(fx, this.transform);
            targetList.Add(obj);
        }
    }

    void OnEvent(EVENT_TYPE eventType, Component sender, object param = null)
    {
        if(eventType == EVENT_TYPE.CRASH)
        {
            _receivePos = (Vector3)param;
            _fxObj = FindRestFX(_crashFxList);

            _fxObj.transform.position = (Vector3)param;
            _fxObj.GetComponent<ParticleSystem>().Play();
        }
    }

    GameObject FindRestFX(List<GameObject> targetFXList)
    {
        GameObject targetObj = null;

        for (int i = 0; i < targetFXList.Count; i++)
        {
            if (!targetFXList[i].GetComponent<ParticleSystem>().isPlaying)
                targetObj = targetFXList[i];
        }

        return targetObj;
    }


}
