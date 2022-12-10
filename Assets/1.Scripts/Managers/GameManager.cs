using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;

    public static GameManager Instance
    {
        get
        {
            if (instance == null)
                return null;

            return instance;
        }
    }

    public delegate void Reset();

    public event Reset E_reset;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
            Destroy(this.gameObject);

        DOTween.Init(true, false, LogBehaviour.ErrorsOnly).SetCapacity(200, 10);
    }

    public void Restart()
    {
        SceneManager.LoadScene(1);
        DOTween.KillAll(true);
        E_reset();
    }

    void Start()
    {
        InitResetOptions();
    }

    void InitResetOptions()
    {
        E_reset += FindObjectOfType<ItemCreator>().ResetOptions;
        E_reset += Character.Instance.ResetOptions;
        E_reset += InputManager.Instance.ResetOptions;
        E_reset += ObjPool.Instance.ResetOptions;
        E_reset += CharacterControll.Instance.ResetOptions;
        
        E_reset += EventManager.Instance.ResetOptions;
        E_reset += RockCreator.Instance.ResetOptions;
        E_reset += CameraControll.Instance.ResetOptions;
        E_reset += Water.Instance.ResetOptions;
        E_reset += CharacterAnim.Instance.ResetOptions;
    }

    public int Score
    {
        get
        {
            if (Character.Instance.CurrentStair == null)
                return 0;

            return int.Parse(Character.Instance.CurrentStair.name);
        }
    }

    const int MaxStair = 1000;
    const int MaxLevel = 20;

    public int TotalQuater = 10;

    public int CurrentQuater
    {
        get
        {
            double quater = (double)TotalQuater / (double)MaxLevel * (double)Level;
            return (int)System.Math.Truncate(quater);
        }
    }

    int nextStepNum = MaxStair / MaxLevel; // 레벨별 간격

    private int _level = 1;

    public int Level // 수정
    {
        get
        {
            while (true)
            {
                if (Score < nextStepNum)
                    break;

                nextStepNum = nextStepNum * 2;
                _level++;
            }

            if (_level >= MaxLevel)
                _level = MaxLevel;

            return _level;
        }
    }


}
