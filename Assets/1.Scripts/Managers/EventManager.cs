using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EVENT_TYPE
{
    CRASH,
    GAME_INPUT_SIGN,
    GAME_RESTART,
    CHARACTER_DEAD,
    CHARACTER_JUMP,
    CAMERA_SHAKE,
    CONTACT_STAIR,
    SCORE_OVER,
    SCORE_10,
    SCORE_100,
    SCORE_1000,
}

public class EventManager : MonoBehaviour
{
    private static EventManager _instance;

    public static EventManager Instance
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

    public delegate void OnEvent(EVENT_TYPE eventType, Component sender, object Param = null);

    public Dictionary<EVENT_TYPE, List<OnEvent>> _listeners
        = new Dictionary<EVENT_TYPE, List<OnEvent>>();

    //public void ResetOptions()
    //{
    //    foreach (var item in _listeners)
    //    {
    //        if (!item.Value.Equals(null))
    //            item.Value.RemoveRange(0, item.Value.Count);
    //    }
    //}

    public void AddListener(EVENT_TYPE eventType, OnEvent listener)
    {
        List<OnEvent> listenList = null;

        if(_listeners.TryGetValue(eventType, out listenList))
        {
            listenList.Add(listener);
            return;
        }

        listenList = new List<OnEvent>();
        listenList.Add(listener);
        _listeners.Add(eventType, listenList);
    }

    public void PostNotification(EVENT_TYPE eventType, Component sender, object param = null)
    {
        List<OnEvent> listenList = null;

        if (!_listeners.TryGetValue(eventType, out listenList))
            return;

        for (int i = 0; i < listenList.Count; i++)
        {
            if (!listenList[i].Equals(null))
                listenList[i](eventType, sender, param);
        }
    }

    public void RemoveEvent(EVENT_TYPE eventType)
    {
        _listeners.Remove(eventType);
    }

    public void RemoveRedundancies()
    {
        Dictionary<EVENT_TYPE, List<OnEvent>> TmpListeners
            = new Dictionary<EVENT_TYPE, List<OnEvent>>();

        foreach (KeyValuePair<EVENT_TYPE,List<OnEvent>> item in _listeners)
        {
            for (int i = item.Value.Count-1; i >= 0; i--)
            {
                if (item.Value[i].Equals(null))
                    item.Value.RemoveAt(i);
            }

            if (item.Value.Count > 0)
                TmpListeners.Add(item.Key, item.Value);
        }

        _listeners = TmpListeners;
    }
}
