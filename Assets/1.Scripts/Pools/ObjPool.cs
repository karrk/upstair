using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjPool : MonoBehaviour
{
    private static ObjPool _instance = null;

    public static ObjPool Instance
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

    public enum StairType
    {
        SINGLE,
        DOUBLE,
        LEFT,
        RIGHT,

        CIRCLE,
        CIRCLE_LEFT,
        CIRCLE_RIGHT,

        LEFT_MOVE_STAIR,
        RIGHT_MOVE_STAIR,
        
        NONE,
    }

    public enum ItemType
    {
        JUMP,
        SUPERJUMP,
        NONE,
    }

    #region 풀 종류
    Stack<GameObject> _singlePool = new Stack<GameObject>();
    Stack<GameObject> _leftPool = new Stack<GameObject>();
    Stack<GameObject> _rightPool = new Stack<GameObject>();
    Stack<GameObject> _doublePool = new Stack<GameObject>();

    Stack<GameObject> _circlePool = new Stack<GameObject>();
    Stack<GameObject> _circleLeftPool = new Stack<GameObject>();
    Stack<GameObject> _circleRightPool = new Stack<GameObject>();

    Stack<GameObject> _rightMovePool = new Stack<GameObject>();
    Stack<GameObject> _leftMovePool = new Stack<GameObject>();

    Stack<GameObject> _jumpItemPool = new Stack<GameObject>();
    Stack<GameObject> _superJumpItemPool = new Stack<GameObject>();

    #endregion

    #region 프리팹 종류
    public GameObject _singleStair;
    public GameObject _doubleStair;
    public GameObject _leftStair;
    public GameObject _rightStair;

    public GameObject _circleStair;
    public GameObject _circleLeftStair;
    public GameObject _circleRightStair;

    public GameObject _rightMoveStair;
    public GameObject _leftMoveStair;

    [Space (10f)]
    public GameObject _jumpItem;
    public GameObject _superJumpItem;

    #endregion

    #region PoolType 종류
    ObjectPoolType _singlePoolType;
    ObjectPoolType _doublePoolType;
    ObjectPoolType _leftPoolType;
    ObjectPoolType _rightPoolType;

    ObjectPoolType _circlePoolType;
    ObjectPoolType _circleLeftPoolType;
    ObjectPoolType _circleRightPoolType;

    ObjectPoolType _rightMovePoolType;
    ObjectPoolType _leftMovePoolType;

    ObjectPoolType _jumpItemPoolType;
    ObjectPoolType _superJumpItemPoolType;

    #endregion

    public List<ObjectPoolType> _stairTypeList = new List<ObjectPoolType>();
    public List<ObjectPoolType> _itemTypeList = new List<ObjectPoolType>();

    void Start()
    {
        _singlePoolType = new ObjectPoolType(_singlePool, StairType.SINGLE, _singleStair);
        _doublePoolType = new ObjectPoolType(_doublePool, StairType.DOUBLE, _doubleStair);
        _leftPoolType = new ObjectPoolType(_leftPool, StairType.LEFT, _leftStair);
        _rightPoolType = new ObjectPoolType(_rightPool, StairType.RIGHT, _rightStair);

        _circlePoolType = new ObjectPoolType(_circlePool, StairType.CIRCLE, _circleStair);
        _circleLeftPoolType = new ObjectPoolType(_circleLeftPool, StairType.CIRCLE_LEFT, _circleLeftStair);
        _circleRightPoolType = new ObjectPoolType(_circleRightPool, StairType.CIRCLE_RIGHT, _circleRightStair);
        
        _rightMovePoolType = new ObjectPoolType(_rightMovePool, StairType.RIGHT_MOVE_STAIR, _rightMoveStair);
        _leftMovePoolType = new ObjectPoolType(_leftMovePool, StairType.LEFT_MOVE_STAIR, _leftMoveStair);

        _jumpItemPoolType = new ObjectPoolType(_jumpItemPool, ItemType.JUMP, _jumpItem);
        _superJumpItemPoolType = new ObjectPoolType(_superJumpItemPool, ItemType.SUPERJUMP, _superJumpItem);

        _stairTypeList.Add(_singlePoolType);
        _stairTypeList.Add(_doublePoolType);
        _stairTypeList.Add(_leftPoolType);
        _stairTypeList.Add(_rightPoolType);

        _stairTypeList.Add(_circlePoolType);
        _stairTypeList.Add(_circleLeftPoolType);
        _stairTypeList.Add(_circleRightPoolType);

        _stairTypeList.Add(_rightMovePoolType);
        _stairTypeList.Add(_leftMovePoolType);

        _itemTypeList.Add(_jumpItemPoolType);
        _itemTypeList.Add(_superJumpItemPoolType);

        Initialize<IStairType>(20,_stairTypeList);
        Initialize<I_ItemType>(2,_itemTypeList);
    }

    private void Initialize<T>(int count,List<ObjectPoolType> typeList) where T : IPoolingType
    {
        foreach (ObjectPoolType poolType in typeList)
        {
            for (int i = 0; i < count; i++)
            {
                poolType.Push(CreateNewObj<T>(poolType));
            }
        }
    }

    private GameObject CreateNewObj<T>(ObjectPoolType poolType) where T:IPoolingType
    {
        GameObject newObj = Instantiate(poolType._prefabObj);
        newObj.SetActive(false);
        newObj.transform.SetParent(transform);

        AssignObjType<T>(ref newObj, poolType._eType);

        return newObj;
    }

    public GameObject GetObj<T>(ObjectPoolType poolType) where T:IPoolingType
    {
        GameObject obj;
        
        if (poolType._pool.Count > 0)
        {
            obj = poolType.Pop();
        }
        else
        {
            obj = CreateNewObj<T>(poolType);
        }

        obj.gameObject.SetActive(true);

        return obj;
    }

    public void ReturnObj(Enum objType, GameObject obj)
    {
        List<ObjectPoolType> list;

        if (objType.Equals(StairType.SINGLE) || objType.Equals(StairType.DOUBLE)
            || objType.Equals(StairType.LEFT) || objType.Equals(StairType.RIGHT)
            || objType.Equals(StairType.CIRCLE) || objType.Equals(StairType.CIRCLE_LEFT)
            || objType.Equals(StairType.CIRCLE_RIGHT) || objType.Equals(StairType.RIGHT_MOVE_STAIR)
            || objType.Equals(StairType.LEFT_MOVE_STAIR)
            )
        {
            list = _stairTypeList;
        }
        else
            list = _itemTypeList;
        
        foreach (ObjectPoolType poolType in list)
        {
            if (poolType._eType == objType)
            {
                obj.SetActive(false);
                poolType.Push(obj);
            }
        }
    }

    private void AssignObjType<T>(ref GameObject obj, Enum type) where T : IPoolingType
    {
        if (obj.TryGetComponent<T>(out T target))
        {
            target.ObjType = type;
        }
    }
}
