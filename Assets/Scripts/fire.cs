using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fire : MonoBehaviour
{
    [Header("法術生成位置")]
    public Transform firePoint;
    [Header("法術預製物")]
    public GameObject fire;

    [Header("法術飛行速度"),Range(500,1000)]
    public float firespeed=10f;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            shoot();
        }
    }

    private void shoot()
    {
        GameObject temp = Instantiate(fire, firePoint.position, firePoint.rotation);
        Rigidbody2D rb = temp.GetComponent<Rigidbody2D>();
        rb.AddForce(firePoint.up * firespeed, ForceMode2D.Impulse);
    }
}
