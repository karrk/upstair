using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BaseSlider : MonoBehaviour
{
    protected Slider _slider;

    protected virtual string ValueName
    {
        get;
    }

    void Start()
    {
        _slider = GetComponent<Slider>();

        _slider.onValueChanged.AddListener((float value) => { 
            ChangeValue(value);
            SaveValue(value);
        });

        GetOptionValue(ValueName);
    }

    protected virtual void GetOptionValue(string key)
    {
        if (PlayerPrefs.HasKey(key))
            ChangeValue(PlayerPrefs.GetFloat(key));
    }

    protected virtual void ChangeValue(float value)
    {

    }

    protected virtual void SaveValue(float value)
    {
        PlayerPrefs.SetFloat(ValueName, value);
    }

}
