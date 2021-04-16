using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [Header("移動速度"), Range(0.00001f, 50f)]
    public float speed = 0.01f;
    [Header("法術"), Tooltip("存放要生成的法術預製物")]
    public GameObject spells;
    [Header("法術生成點"), Tooltip("法術要生成的起始位址")]
    public GameObject point;
    [Header("法術速度"), Range(0, 5000)]
    public float speedspells = 3000;
    [Header("攻擊延遲")]
    public float attackDelay = 1;
    [Header("施展法術音效")]
    public AudioClip soundspells;
    [Header("追蹤範圍"), Range(0, 1000)]
    public float rangeTrack = 4.5f;
    [Header("攻擊範圍"), Range(1, 1000)]
    public float rangeAttack = 3.5f;
    [Header("死亡音效")]
    public AudioClip sounddead;
    [Header("Score"), Range(0, 5000)]
    public int score = 50;



    private AudioSource aud;
    public Transform player;
    private Rigidbody2D rig;
    private float timer;
    private Animator ani;
    private GameManager gm;



    private void Awake()
    {
        //玩家變形 = 遊戲物件.尋找("玩家物件名稱").變形
        player = GameObject.Find("玩家").transform;
        rig = GetComponent<Rigidbody2D>();
        ani = GetComponent<Animator>();
        aud = GetComponent<AudioSource>();
        gm = FindObjectOfType<GameManager>();
    }
    private void Update()
    {
        Move();
    }
    /// <summary>
    /// 敵人移動
    /// </summary>

    private void Move()
    {

        if (player.position.x > transform.position.x)
        {
            transform.eulerAngles = Vector3.zero;
        }
        else
        {
            transform.eulerAngles = new Vector3(0, 180, 0);
        }

        float dis = Vector3.Distance(player.position, transform.position);
        if (dis < rangeAttack)
        {
            ani.SetBool("跑步開關", false);

            Spells();
        }
        else if (dis < rangeTrack)
        {
            ani.SetBool("跑步開關", true);

            Vector3 newPos = transform.position;
            if (player.transform.position.x != transform.position.x)
            {
                if (player.transform.position.x > transform.position.x)
                {
                    newPos.x += speed;
                }
                else
                {
                    newPos.x -= speed;
                }
            }
            if (player.transform.position.y != transform.position.y)
            {
                if (player.transform.position.y > transform.position.y)
                {
                    newPos.y += speed;
                }
                else
                {
                    newPos.y -= speed;
                }
            }
            transform.position = newPos;
        }
    }
    //敵人攻擊
    private void Spells()
    {
        rig.velocity = Vector3.zero;
        if (timer >= attackDelay)
        {
            timer = 0;
            ani.SetBool("攻擊開關", true);
            GameObject spellsIns = Instantiate(spells, point.transform.position, point.transform.rotation);
            spellsIns.GetComponent<Rigidbody2D>().AddForce(transform.right * speedspells);
        }
        else
        {
            ani.SetBool("攻擊開關", false);
            timer += Time.deltaTime;
        }
    }
    /// <summary>
    /// 敵人死亡
    /// </summary>
    private void Dead()
    {
        aud.PlayOneShot(sounddead, 2.5f);
        ani.SetBool("死亡開關", true);
        enabled = false;
        GetComponent<CapsuleCollider2D>().enabled = false;
        rig.Sleep();
        Destroy(gameObject, 2f);
        gm.AddScore(score);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "法術")
        {
            Dead();
        }
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = new Color(0, 0, 1, 0.3f);                //追蹤範圍顏色
        Gizmos.DrawSphere(transform.position, rangeTrack);      //追蹤範圍

        Gizmos.color = new Color(1, 0, 0, 0.3f);                //攻擊範圍顏色
        Gizmos.DrawSphere(transform.position, rangeAttack);     //攻擊範圍
    }
}
