using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public Rigidbody2D rig;
    public Animator anim;
    public float speed;
    private int score;
    private AudioSource aud;
 

    public GameObject spells;
    public Transform pouint;
    [Header("法術生成速度"),Range(0,500)]
    public int Speedspelles = 500;
    public AudioClip soundFire;
    public bool inPortal;


    public Vector2 movement;
    void Start()
    {
        rig = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        aud = GetComponent<AudioSource>();
       
    }

    // Update is called once per frame
    void Update()
    {
        Move();
    }
    /// <summary>
    /// 角色移動
    /// </summary>
    private void Move()
    {
        //水平浮點數 = 輸入 的 取得軸向("水平") - 左右AD
        float h = Input.GetAxis("Horizontal");
        // 鋼體 的 速度 = 新 二為向量(水平浮點數 * 速度，剛體的加入度的y)
        rig.velocity = new Vector2(h * speed, rig.velocity.x);
        anim.SetBool("walk", h != 0);
        //垂直浮點數 = 輸入 的 取得軸向("垂直") - 上下WS
        float v = Input.GetAxis("Vertical");
        // 剛體 的 速度 = 新 二為向量(垂直浮點數 * 速度，剛體的加速度的x)
        rig.velocity = new Vector2(v * speed, rig.velocity.y);
        anim.SetBool("walk", v != 0);
        //走路方向向右
        if (Input.GetKeyDown(KeyCode.D))
        {
            transform.eulerAngles = new Vector3(0, -180, 0);
        }
        //走路方向向左
        if (Input.GetKeyDown(KeyCode.A))
        {
            transform.eulerAngles = new Vector3(0, 0, 0);
        }

        anim.SetBool("onrun", h > 0);
        anim.SetBool("underrun", h < 0);
    }
    /// <summary>
    /// 死亡開關
    /// </summary>
    public void Dead()
    {
        if (anim.GetBool("dead"))
        enabled = false;
        anim.SetBool("dead", true);
        
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.name.Equals("傳送門") || collision.tag.Equals("Finish"))
        {
            inPortal = true;
           
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.name == "傳送門" || collision.tag.Equals("Finish"))
        {
            inPortal = false;
            
        }
    }
}
