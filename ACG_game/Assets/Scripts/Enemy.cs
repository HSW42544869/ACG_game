using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [Header("���ʳt��"), Range(0, 100)]
    public float speed = 0.5f;
    public GameObject spell;
    public Transform point;
    public int speedspell;
    public AudioClip soundFire;
    [Header("�P���d��"), Range(0, 1000)]
    public float rangeTrack = 10.5f;
    [Header("�����d��"), Range(0, 1000)]
    public float rangeAttack = 10.5f;

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = new Color(1, 0, 0, 0.3f);
        Gizmos.DrawSphere(transform.position, rangeTrack);
    }
}
