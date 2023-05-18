using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BackGroundSize
{
    ONExONE = 1,
    TWOXTWO = 2,
}

public class BackGroundCreateDirector : MonoBehaviour
{
    Creator[] creators;
    Vector3 _spawnPos;

    float ValidArea_ZValue;
    const float CreateUnit = 10f;
    readonly Vector3 CreateOffset = new Vector3(-1.5f, -20, 0);
    const float ObjectsInterval = 2f;

    private bool IsObectInArea { get { return ValidArea_ZValue > _spawnPos.z; } }

    private void Start()
    {
        creators = new Creator[transform.childCount];

        for (int i = 0; i < creators.Length; i++)
        {
            creators[i] = transform.GetChild(i).GetComponent<Creator>();
        }

        ValidArea_ZValue = 3;

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART, OnEvent);
        EventManager.Instance.AddListener(EVENT_TYPE.CREATOR_MOVE, OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        if(eventType == EVENT_TYPE.GAME_RESTART)
        {
            AllCreatorsReturn();
            ValidArea_ZValue = 3;
        }

        if(eventType == EVENT_TYPE.CREATOR_MOVE)
        {
            _spawnPos = (Vector3)Param;

            if (IsObectInArea)
                return;

            CreateBackGround();

        }
    }

    void AllCreatorsReturn()
    {
        for (int i = 0; i < creators.Length; i++)
        {
            creators[i].ReturnAll();
        }
    }

    void CreateBackGround()
    {
        Creator creator = creators[Random.Range(0, creators.Length)];

        BackGroundObj obj = (BackGroundObj)creator.CreateObj();

        obj.transform.position = _spawnPos + CreateOffset;

        obj.SetRandomPos();

        obj.SetRandomRot();

        ValidArea_ZValue += (float)obj.MySize * CreateUnit + ObjectsInterval;
    }
}
