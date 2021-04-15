using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    // Start is called before the first frame update
    public void StartGame()
    {
        //場景管理的載入場景("場景名稱")
        SceneManager.LoadScene("關卡");
    }

    // Update is called once per frame
    public void QuitGame()
    {
        //應用程式的離開遊戲
        Application.Quit();
    }
}
