using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SensorSlider : BaseSlider
{
    protected override string ValueName
    {
        get
        {
            return "SensorValue";
        }
    }

    protected override void ChangeValue(float value)
    {
        _slider.value = value;
        InputManager.Instance.OptionSlideDistance = value;
    }
}
