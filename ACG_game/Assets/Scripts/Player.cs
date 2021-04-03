using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public Rigidbody2D rb;
    public float speed;
    Animation anim;

    public void Start()
    {
        
    }

    private void Update()
    {
        Movement();
    }
    void Movement()
    {
        float horizontalmove;
        horizontalmove = Input.GetAxis("Horizontal");

        if (horizontalmove !=  1)
        {
            rb.velocity = new Vector2(horizontalmove * speed, rb.velocity.y);
        }
    }
}
