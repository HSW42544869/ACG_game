using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class player2 : MonoBehaviour
{
    [Header("法術"), Tooltip("預製物")]
    public GameObject spells;
    [Header("法術生成點"), Tooltip("預製物")]
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




    public void Awake()
    {
        rig = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        aud = GetComponent<AudioSource>();

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
            aud.PlayOneShot(soundFire, Random.Range(0.8f, 1.5f));
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
        if (obj == "死亡區域")
        {
            enabled = false;
            anim.SetBool("dead", true);
            //延遲呼叫
            Invoke("Replay", 2);
        }
    }

    private void Replay()
    {
        SceneManager.LoadScene("關卡");

    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        Dead(collision.gameObject.name);
    }
}
