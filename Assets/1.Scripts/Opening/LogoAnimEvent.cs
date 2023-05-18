using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LogoAnimEvent : MonoBehaviour
{
    [SerializeField]
    Image _fadePanel;

    float _speed = 0.02f;

    public void FadeOut()
    {
        StartCoroutine(FadeAnim());
    }

    IEnumerator FadeAnim()
    {
        while (true)
        {
            if (_fadePanel.fillAmount >= 1)
                break;

            _fadePanel.fillAmount += _speed;

            yield return null;
        }

        FinishAnim();
    }

    public void FinishAnim()
    {
        SceneManager.LoadScene(1);
    }
}
