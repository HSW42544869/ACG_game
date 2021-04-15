using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class player2 : MonoBehaviour
{
    [Header("�k�N"), Tooltip("�w�s��")]
    public GameObject spells;
    [Header("�k�N�ͦ��I"), Tooltip("�w�s��")]
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

            //���� �� ����@������(���ġA�H���j�p�n)
            aud.PlayOneShot(soundFire, Random.Range(0.8f, 1.5f));
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
        if (obj == "���`�ϰ�")
        {
            enabled = false;
            anim.SetBool("dead", true);
            //����I�s
            Invoke("Replay", 2);
        }
    }

    private void Replay()
    {
        SceneManager.LoadScene("���d");

    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        Dead(collision.gameObject.name);
    }
}
