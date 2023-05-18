using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackSubObjPool : MonoBehaviour
{
    //public List<GameObject> _subObjList;

    //int _initCreateCount = 10;

    //Dictionary<SubObjType, Queue<SubObject>> _subDic = new Dictionary<SubObjType, Queue<SubObject>>();
    //Queue<SubObject> _outObjectsPool = new Queue<SubObject>();

    //private void Start()
    //{
    //    InitPoolDic(_initCreateCount);
    //}

    //void InitPoolDic(int count)
    //{
    //    for (int i = 0; i < _subObjList.Count; i++)
    //    {
    //        Queue<SubObject> pool = new Queue<SubObject>();
    //        _subDic.Add((SubObjType)i, pool);

    //        for (int j = 0; j < count; j++)
    //        {
    //            pool.Enqueue(CreateObj(i));
    //        }
    //    }
    //}

    //SubObject CreateObj(int objNumber)
    //{
    //    SubObject obj = Instantiate(_subObjList[objNumber].GetComponent<SubObject>());

    //    //obj.gameObject.name = $"{(SubObjType)objNumber} Clone";
    //    obj.transform.SetParent(this.transform);
    //    obj.gameObject.SetActive(false);

    //    return obj;
    //}

    //internal SubObject GetSubObj()
    //{
    //    int rand = Random.Range(0, _subObjList.Count);

    //    //Queue<SubObject> pool = _subDic[(SubObjType)rand];
    //    SubObject obj;

    //    if (pool.Count > 0)
    //    {
    //        obj = pool.Dequeue();
    //        obj.gameObject.SetActive(true);
    //        obj.transform.position = BackgroundCreator.MainObjCreatePos;

    //        _outObjectsPool.Enqueue(obj.GetComponent<SubObject>());

    //        return obj;
    //    }

    //    _initCreateCount *= 2;

    //    for (int i = 0; i < _initCreateCount; i++)
    //    {
    //        pool.Enqueue(CreateObj(rand));
    //    }

    //    return GetSubObj();
    //}

    //internal void ReturnObj()
    //{
    //    SubObject obj = _outObjectsPool.Dequeue();

    //    obj.gameObject.SetActive(false);

    //    _subDic[obj.Type].Enqueue(obj);
    //}

    //internal void ReturnAll()
    //{
    //    while (true)
    //    {
    //        if (_outObjectsPool.Count <= 0)
    //            break;

    //        ReturnObj();
    //    }
    //}


}
