using UnityEngine;
using UnityEngine.UI;                       // 引用 介面 API
using UnityEngine.SceneManagement;

/// <summary>
/// 遊戲管理器：管理生命、分數
/// </summary>
public class GameManager : MonoBehaviour
{
    // 陣列
    [Header("生命物件陣列")]
    public GameObject[] lives;
    [Header("分數文字介面")]
    public Text textScore;
    [Header("結束畫面")]
    public GameObject final;

    public static int enemyCount;

    // 一般欄位 重新載入場景 會還原為預設值
    // 靜態欄位 重新載入場景 不會還原為預設值
    public static int live = 3;
    public static int score;
    private object tags;

    public void Start()
    {
        //enemyCount = GameObject.FindGameObjectsWithTag(tags.Enemy.ToString()).Length;
    }
    private void Awake()
    {
        SetCollision();

        SetLive();
        AddScore(0);
    }

    private void Update()
    {
        BakeToMenu();
        QuitGame();
    }

    private void BakeToMenu()
    {
        if(live == 0 && Input.GetKeyDown(KeyCode.R)) SceneManager.LoadScene("選單");
    }

    private void QuitGame()
    {
        if (live == 0 && Input.GetKeyDown(KeyCode.Escape)) Application.Quit();
    }

    /// <summary>
    /// 添加分數與更新分數介面
    /// </summary>
    /// <param name="add">要添加多少分數</param>
    public void AddScore(int add)
    {
        score += add;                           // 累加分數
        textScore.text = "Score：" + score;       // 更新文字介面
    }

    /// <summary>
    /// 玩家死亡
    /// </summary>
    public void PlayerDead()
    {
        live--;

        SetLive();

        if (live == 0) final.SetActive(true);
    }

    /// <summary>
    ///  更新生命介面
    /// </summary>
    private void SetLive()
    {
        // 陣列欄位[編號] 的 方法()
        //lives[0].SetActive(false);

        //for (int i = 1; i < 100; i++)
        //{
        //    print("迴圈：" + i);
        //}

        for (int i = 0; i < lives.Length; i++)
        {
            // 判斷式 只有一行敘述時 可以省略 大括號
            if (i >= live) lives[i].SetActive(false);
        }
    }

    /// <summary>
    /// 設定碰撞：所有圖層的碰撞
    /// </summary>
    private void SetCollision()
    {
        Physics2D.IgnoreLayerCollision(LayerMask.NameToLayer("敵人"), LayerMask.NameToLayer("敵人"));
        Physics2D.IgnoreLayerCollision(LayerMask.NameToLayer("玩家"), LayerMask.NameToLayer("玩家法術"));
        Physics2D.IgnoreLayerCollision(LayerMask.NameToLayer("敵人"), LayerMask.NameToLayer("敵人攻擊"));
        Physics2D.IgnoreLayerCollision(LayerMask.NameToLayer("玩家法術"), LayerMask.NameToLayer("敵人攻擊"));
        Physics2D.IgnoreLayerCollision(LayerMask.NameToLayer("敵人攻擊"), LayerMask.NameToLayer("敵人攻擊"));
    }
}
