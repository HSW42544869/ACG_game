using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    // Start is called before the first frame update
    public void StartGame()
    {
        //�����޲z�����J����("�����W��")
        SceneManager.LoadScene("���d");
    }

    // Update is called once per frame
    public void QuitGame()
    {
        //���ε{�������}�C��
        Application.Quit();
    }
}