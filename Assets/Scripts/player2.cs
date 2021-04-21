using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class player2 : MonoBehaviour
{
    [Header("�k�N"), Tooltip("�w�s��")]
    public GameObject spells;
    [Header("�I�k����")]
    public AudioClip soundFire;
    [Header("�ͩR�ƶq"), Range(0, 10)]
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
        if (inPortal && Input.GetKeyDown(KeyCode.R))                    //�p�G�b���̭�
        {
            int lvIndex = SceneManager.GetActiveScene().buildIndex;     //���o��e�����s��

            lvIndex++;                                                  //�s���[�@

            SceneManager.LoadScene(lvIndex);                            //���J�U�@��

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

            //���� �� ����@������(���ġA�H���j�p�n)
            aud.PlayOneShot(soundFire);
            //�ͦ� �l�u�b�j�f
            //�ͦ�(����A�y�СA����)
            GameObject temp = Instantiate(spells, point.position, point.rotation);

            temp.GetComponent<Rigidbody2D>().AddForce(transform.right * (-Speedspelles));

            //spellsIns.GetComponent<Rigidbody2D>().AddForce(transform.right * Speedspelles);

        }
    }
    /// <summary>
    /// ���`�ϰ�
    /// </summary>
    /// <param name="obj"></param>
    private void Dead(string obj)
    {
        //�p�G����W��==���`�ϰ�
        if (obj == "���`�ϰ�" || obj == "�ĤH����")
        {

            if (anim.GetBool("���`�}��")) return;
            enabled = false;
            anim.SetBool("dead", true);
            //����I�s
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
        //�i�J�ǰe��
        if (collision.name== "�ǰe��") inDoor = true;
       
    }
    //���}�ǰe��
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.name== "�ǰe��") inDoor = false;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        Dead(collision.gameObject.tag);
    }
}
