using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Map : MonoBehaviour
{
    private static Map _instance;

    public static Map Instance
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

    Vector3[,] _posArr;

    const int Height = 300;
    const int Width = 300;

    public GameObject _stone1;
    public GameObject _stone2;
    public GameObject _stone3;
    public GameObject _stone4;

    List<GameObject> rocksList;

    void Start()
    {
        rocksList = new List<GameObject>()
        {
            _stone1,_stone2,_stone3,_stone4
        };

        Init(35f,20f);

        CreateRock();
    }

    void Init(float interval,float depth)
    {
        _posArr = new Vector3[(int)(Width / interval), (int)(Height / interval)];

        Vector3 startPos =
                new Vector3(this.transform.position.x, 
                this.transform.position.y, 
                this.transform.position.z);

        for (int i = 0; i < _posArr.GetLength(0); i++)
        {
            Vector3 pos = new Vector3(startPos.x, startPos.y+(interval * i), startPos.z);
            int depthCount = 0;

            for (int j = 0; j < _posArr.GetLength(1); j++)
            {
                _posArr[i, j] = pos;
                pos += new Vector3(0, 0, interval);

                if(j >= _posArr.GetLength(1)/2)
                {
                    _posArr[i, j] += new Vector3(depth * depthCount, 0, 0);
                    depthCount++;
                }
            }
        }
    }

    void CreateRock()
    {
        foreach (Vector3 pos in _posArr)
        {
            GameObject obj = Instantiate(rocksList[Random.Range(0,rocksList.Count)],this.transform);

            Vector3 randPos = new Vector3(Random.Range(0, 10), 0, 0);
            obj.transform.position = pos + randPos;

            Vector3 randRot = new Vector3(Random.Range(0, 180), Random.Range(0, 180), Random.Range(0, 180));
            obj.transform.rotation = Quaternion.Euler(randRot);
        }
    }
}
