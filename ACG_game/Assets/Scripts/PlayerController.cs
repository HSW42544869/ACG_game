﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public Rigidbody2D rig;
    public Animator anim;
    public float speed;

    public Vector2 movement;
    void Start()
    {
        rig = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        movement.x = Input.GetAxisRaw("Horizontal");
        movement.y = Input.GetAxisRaw("Vertical");

        if (movement.x != 0)
        {
            transform.localScale = new Vector3(-movement.x, 1, 1);
        }

        SwitchAnim();
    }

    private void FixedUpdate()
    {
        rig.MovePosition(rig.position + movement * speed * Time.fixedDeltaTime);
    }

    public void SwitchAnim()
    {
        anim.SetFloat("speed", movement.magnitude);
    }
}
