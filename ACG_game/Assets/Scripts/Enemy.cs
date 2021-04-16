using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [Header("���ʳt��"), Range(0.00001f, 50f)]
    public float speed = 0.01f;
    [Header("�k�N"), Tooltip("�s��n�ͦ����k�N�w�s��")]
    public GameObject spells;
    [Header("�k�N�ͦ��I"), Tooltip("�k�N�n�ͦ����_�l��}")]
    public GameObject point;
    [Header("�k�N�t��"), Range(0, 5000)]
    public float speedspells = 3000;
    [Header("��������")]
    public float attackDelay = 1;
    [Header("�I�i�k�N����")]
    public AudioClip soundspells;
    [Header("�l�ܽd��"), Range(0, 1000)]
    public float rangeTrack = 4.5f;
    [Header("�����d��"), Range(1, 1000)]
    public float rangeAttack = 3.5f;
    [Header("���`����")]
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
        //���a�ܧ� = �C������.�M��("���a����W��").�ܧ�
        player = GameObject.Find("���a").transform;
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
    /// �ĤH����
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
            ani.SetBool("�]�B�}��", false);

            Spells();
        }
        else if (dis < rangeTrack)
        {
            ani.SetBool("�]�B�}��", true);

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
    //�ĤH����
    private void Spells()
    {
        rig.velocity = Vector3.zero;
        if (timer >= attackDelay)
        {
            timer = 0;
            ani.SetBool("�����}��", true);
            GameObject spellsIns = Instantiate(spells, point.transform.position, point.transform.rotation);
            spellsIns.GetComponent<Rigidbody2D>().AddForce(transform.right * speedspells);
        }
        else
        {
            ani.SetBool("�����}��", false);
            timer += Time.deltaTime;
        }
    }
    /// <summary>
    /// �ĤH���`
    /// </summary>
    private void Dead()
    {
        aud.PlayOneShot(sounddead, 2.5f);
        ani.SetBool("���`�}��", true);
        enabled = false;
        GetComponent<CapsuleCollider2D>().enabled = false;
        rig.Sleep();
        Destroy(gameObject, 2f);
        gm.AddScore(score);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "�k�N")
        {
            Dead();
        }
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = new Color(0, 0, 1, 0.3f);                //�l�ܽd���C��
        Gizmos.DrawSphere(transform.position, rangeTrack);      //�l�ܽd��

        Gizmos.color = new Color(1, 0, 0, 0.3f);                //�����d���C��
        Gizmos.DrawSphere(transform.position, rangeAttack);     //�����d��
    }
}
