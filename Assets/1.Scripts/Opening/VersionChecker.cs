using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class VersionChecker : MonoBehaviour
{
    public string URL = "https://pastebin.com/raw/CeMs490B"; // 버전체크를 위한 URL
    private string CurVersion; // 현재 빌드버전
    string latsetVersion; // 최신버전
    public Button _updateBtn;

    static bool _isMatch = true;

    OpenManager _openManager;

    void Start()
    {
        _openManager = FindObjectOfType<OpenManager>();

        CurVersion = Application.version;
        StartCoroutine(LoadTxtData(URL));

    }

    public void VersionCheck()
    {
        if (latsetVersion == "점검")
        {
            _openManager.Warning();
        }
        else if (CurVersion != latsetVersion)
        {
            _openManager.MissMatchAction();
        }
        else
        {
            _openManager.MatchAction();
        }
        Debug.Log("Current Version" + CurVersion + "Lastest Version" + latsetVersion);
    }


    IEnumerator LoadTxtData(string url)
    {
        UnityWebRequest www = UnityWebRequest.Get(url);
        yield return www.SendWebRequest(); // 페이지 요청

        if (www.isNetworkError)
        {
            Debug.Log("error get page");
        }
        else
        {
            latsetVersion = www.downloadHandler.text; // 웹에 입력된 최신버전
        }
        VersionCheck();
    }

    public void OpenURL(string url) // 스토어 열기
    {
        Application.OpenURL(url);
    }


}
