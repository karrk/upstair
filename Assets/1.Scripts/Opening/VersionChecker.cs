using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class VersionChecker : MonoBehaviour
{
    public string URL = "https://pastebin.com/raw/CeMs490B"; // ����üũ�� ���� URL
    private string CurVersion; // ���� �������
    string latsetVersion; // �ֽŹ���
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
        if (latsetVersion == "����")
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
        yield return www.SendWebRequest(); // ������ ��û

        if (www.isNetworkError)
        {
            Debug.Log("error get page");
        }
        else
        {
            latsetVersion = www.downloadHandler.text; // ���� �Էµ� �ֽŹ���
        }
        VersionCheck();
    }

    public void OpenURL(string url) // ����� ����
    {
        Application.OpenURL(url);
    }


}
