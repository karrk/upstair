using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManager : MonoBehaviour
{
    private static MapManager _instance;

    public static MapManager Instance
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
            Destroy(this.gameObject);
    }

    int _rotationID;

    Skybox _skybox;

    float time;

    public List<Material> _mapList = new List<Material>();

    void Start()
    {
        _skybox = Camera.main.GetComponent<Skybox>();
        SetRandomMap();
        _rotationID = _skybox.material.shader.GetPropertyNameId(2);
        _skybox.material.SetFloat(_rotationID, 0);

        EventManager.Instance.AddListener(EVENT_TYPE.GAME_RESTART,OnEvent);
    }

    private void OnEvent(EVENT_TYPE eventType, Component sender, object Param)
    {
        SetRandomMap();
        _skybox.material.SetFloat(_rotationID, 0);
    }


    void SetRandomMap()
    {
        int rand = Random.Range(0, _mapList.Count);

        _skybox.material = _mapList[rand];
    }

    void FixedUpdate()
    {
        time += Time.deltaTime;

        _skybox.material.SetFloat(_rotationID, time*0.25f);
    }
}
