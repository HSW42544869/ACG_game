using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed;
    [Header("法術"),Tooltip("預製物")]
    public GameObject spells;
    [Header("法術生成點"),Tooltip("預製物")]
    public Transform point;
    public int Speedspelles = 500;
    public AudioClip soundFire;


    public bool inPortal;
    private Rigidbody2D rig;
    private AudioSource aud;
    private Animator anim;
    

    Vector2 movent;

    public void Awake()
    {
        rig = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        aud = GetComponent<AudioSource>();
       
    }

    private void Update()
    {
        movent.x = Input.GetAxisRaw("Horizontal");
        movent.y = Input.GetAxisRaw("Vertical");
        if (movent.x != 0)
        {
            transform.localScale = new Vector3(-movent.x, 1, 1);
        }
        //射擊動作
        if (Input.GetMouseButton(0))
        {
            anim.SetBool("attack", true);
            Spell();
        }
        else
        {
            anim.SetBool("attack", false);
        }
        SwitchAnim();
    }
    private void Dead()
    {
        //如果 死亡開關 為是 就 跳出
        if (anim.GetBool("dead")) return;
        enabled = false;
        anim.SetBool("dead", true);

        //if (Gamemanager.live > 1) Invoke("Replay", 2.5f);
    }
    private void FixedUpdate()
    {
        rig.MovePosition(rig.position + movent * speed * Time.fixedDeltaTime);
    }
    void SwitchAnim()
    {
        anim.SetFloat("walk", movent.magnitude);
    }
    private void Spell()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {

            //音源 的 播放一次音效(音效，隨機大小聲)
            //aud.PlayOneShot(soundFire, Random.Range(0.8f, 1.5f));
            //生成 子彈在槍口
            //生成(物件，座標，角度)
           GameObject temp = Instantiate(spells,point.position,point.rotation);

            temp.GetComponent<Rigidbody2D>().AddForce(transform.right  * (-Speedspelles));
           
            //spellsIns.GetComponent<Rigidbody2D>().AddForce(transform.right * Speedspelles);

        }
    }
}
