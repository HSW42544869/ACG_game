using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public Rigidbody2D rig;
    public float speed;
    Animator anim;

    Vector2 movent;

    public void Start()
    {
        rig = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
    }

    private void Update()
    {
        movent.x = Input.GetAxisRaw("Horizontal");
        movent.y = Input.GetAxisRaw("Vertical");
        if (movent.x != 0)
        {
            transform.localScale = new Vector3(-movent.x, 1, 1);
        }
        SwitchAnim();
    }
    private void FixedUpdate()
    {
        rig.MovePosition(rig.position + movent * speed * Time.fixedDeltaTime);
    }
    void SwitchAnim()
    {
        anim.SetFloat("walk", movent.magnitude);
    }
}
