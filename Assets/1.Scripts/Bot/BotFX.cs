using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotFX : MonoBehaviour
{
    ParticleSystem _botFX;

    private void OnEnable()
    {
        _botFX = transform.Find("PunchFX").GetComponent<ParticleSystem>();
    }

    public void PlayBotPunchFX()
    {
        _botFX.transform.LookAt(Camera.main.transform);
        _botFX.Play();
    }
}
