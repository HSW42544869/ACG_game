using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class player2 : MonoBehaviour
{
    [Header("法術"), Tooltip("預製物")]
    public GameObject spells;
    [Header("施法音效")]
    public AudioClip soundFire;
    [Header("生命數量"), Range(0, 10)]
    public int live = 3;
    public float speed;
    public Transform point;
    public int Speedspelles = 500;
    public bool inPortal;

    private Rigidbody2D rig;
    private AudioSource aud;
    private Animator anim;

    private GameManager gm;




    public void Awake()
    {
        rig = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        aud = GetComponent<AudioSource>();
        gm = FindObjectOfType<GameManager>();

    }
    private void Update()
    {
        Move();
        if (Input.GetMouseButton(0))
        {
            anim.SetBool("attack", true);
            Spell();
        }
        else
        {
            anim.SetBool("attack", false);
        }

        NextLevel();

    }
    private void NextLevel()
    {
        if (inPortal && Input.GetKeyDown(KeyCode.R))                    //如果在門裡面
        {
            int lvIndex = SceneManager.GetActiveScene().buildIndex;     //取得當前場景編號

            lvIndex++;                                                  //編號加一

            SceneManager.LoadScene(lvIndex);                            //載入下一關

        }
    }
    private void Move()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        rig.velocity = new Vector3(-v * speed, rig.velocity.y);
        rig.velocity = new Vector3(h * speed, rig.velocity.x);


        anim.SetBool("walk", h != 0);

        if (Input.GetKeyDown(KeyCode.D))
        {
            transform.eulerAngles = new Vector3(0, 180, 0);
        }
        if (Input.GetKeyDown(KeyCode.A))
        {
            transform.eulerAngles = new Vector3(0, 0, 0);
        }
    }
    private void Spell()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {

            //音源 的 播放一次音效(音效，隨機大小聲)
            aud.PlayOneShot(soundFire);
            //生成 子彈在槍口
            //生成(物件，座標，角度)
            GameObject temp = Instantiate(spells, point.position, point.rotation);

            temp.GetComponent<Rigidbody2D>().AddForce(transform.right * (-Speedspelles));

            //spellsIns.GetComponent<Rigidbody2D>().AddForce(transform.right * Speedspelles);

        }
    }
    /// <summary>
    /// 死亡區域
    /// </summary>
    /// <param name="obj"></param>
    private void Dead(string obj)
    {
        //如果物件名稱==死亡區域
        if (obj == "死亡區域" || obj == "敵人攻擊")
        {

            if (anim.GetBool("死亡開關")) return;
            enabled = false;
            anim.SetBool("dead", true);
            //延遲呼叫
            if(GameManager.live  >1) Invoke("Replay", 2);

            gm.PlayerDead();
        }
       
    }

    private void Replay()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);

    }
    public bool inDoor;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //進入傳送門
        if (collision.name== "傳送門") inDoor = true;
       
    }
    //離開傳送門
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.name== "傳送門") inDoor = false;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        Dead(collision.gameObject.tag);
    }
}
