using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathManager : MonoBehaviour
{
    private static DeathManager _instance;

    public static DeathManager Instance
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
        if(_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    public void ResetOptions()
    {
        for (int i = 0; i < this.gameObject.transform.childCount; i++)
        {
            this.gameObject.transform.GetChild(i).transform.position 
                = this.transform.position;
        }
    }


    public GameObject _deathPrefab;
    Stack<GameObject> _deathObjPool = new Stack<GameObject>();

    void Start()
    {
        Init();
    }

    void Init()
    {
        for (int i = 0; i < 10; i++)
        {
            _deathObjPool.Push(Create());
        }
    }

    GameObject Create()
    {
        GameObject obj = Instantiate(_deathPrefab);
        obj.transform.SetParent(this.transform);
        obj.transform.position = this.transform.position;

        return obj;
    }

    public void CallDeathPoint(Vector3 pos)
    {
        GameObject obj = null;

        if (_deathObjPool.Count > 0)
        {
            obj = _deathObjPool.Pop();
        }
        else
        {
            obj = Create();
        }
        
        if(obj.TryGetComponent<DeathPoint>(out DeathPoint deathPoint))
        {
            deathPoint.MoveRoutine();
        }

        obj.transform.position = pos;
    }

    public void ReturnDeathPoint(GameObject obj)
    {
        _deathObjPool.Push(obj);
    }
}
