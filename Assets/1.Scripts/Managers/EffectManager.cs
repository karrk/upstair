using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EffectType
{
    CrashFx,
    SplashFx,
}

public class EffectManager : MonoBehaviour
{
    private static EffectManager _instance;

    public static EffectManager Instance
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

    [Space (10f)]
    public GameObject _crashFX;
    public GameObject _splashFX;

    Vector3 _receivePos;

    //리시브 포지션을 받아서 해당 이펙트를 재생하는 방식이 좋을듯하다.
    // PlayEffect(Vector3 sendPos,GameObject targetFX)

    public ObjectFXType _crashFXPool;
    public ObjectFXType _splashFXPool;

    void Start()
    {
        _crashFXPool = new ObjectFXType(new List<GameObject>(), EffectType.CrashFx, _crashFX);
        _splashFXPool = new ObjectFXType(new List<GameObject>(), EffectType.SplashFx, _splashFX);

        Init(5, _crashFXPool);
        Init(5, _splashFXPool);

    }

    void Init(int count, ObjectFXType fxPool)
    {
        for (int i = 0; i < count; i++)
        {
            fxPool.Add(CreateEffect(fxPool));
        }
    }

    GameObject CreateEffect(ObjectFXType fxPool)
    {
        GameObject obj = Instantiate(fxPool._prefabObj);
        obj.transform.SetParent(transform);

        return obj;
    }

    GameObject FindRestFX(List<GameObject> targetFXList)
    {
        for (int i = 0; i < targetFXList.Count; i++)
        {
            if (!targetFXList[i].GetComponent<ParticleSystem>().isPlaying)
                return targetFXList[i];
        }

        return null;
    }

    public void PlayEffect(Vector3 playPos, ObjectFXType fxPool)
    {
        GameObject restingFX = FindRestFX(fxPool._list);

        if(restingFX == null)
        {
            restingFX = CreateEffect(fxPool);
        }

        restingFX.transform.position = playPos;

        restingFX.GetComponent<ParticleSystem>().Play();
    }


}
