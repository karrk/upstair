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

        DOTween.Init(false, false, LogBehaviour.ErrorsOnly).SetCapacity(200, 100);
    }

    public void Restart()
    {
        SceneManager.LoadScene(1);
    }

    void Start()
    {
        InitResetOptions();
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    void InitResetOptions()
    {
        E_reset += JumpPosControll.Instance.ResetOptions;
        E_reset += MapManager.Instance.ResetOptions;
        E_reset += BotCreator.Instance.ResetOptions;
        E_reset += DeathManager.Instance.ResetOptions;
        E_reset += FindObjectOfType<ItemCreator>().ResetOptions;
        E_reset += Character.Instance.ResetOptions;
        E_reset += InputManager.Instance.ResetOptions;
        E_reset += ObjPool.Instance.ResetOptions;
        E_reset += CharacterControll.Instance.ResetOptions;
        E_reset += RockCreator.Instance.ResetOptions;
        E_reset += CameraControll.Instance.ResetOptions;
        E_reset += Water.Instance.ResetOptions;
        E_reset += CharacterAnim.Instance.ResetOptions;
        E_reset += ScoreManager.Instance.ResetOptions;
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

    int nextStepNum = MaxStair / MaxLevel; // ������ ����

    private int _level = 1;

    public int Level // ����
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

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.buildIndex == 1)
        {
            DOTween.Clear();
            E_reset();
        }
            
    }
}
