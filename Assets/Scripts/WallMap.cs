using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallMap : MonoBehaviour
{
    GameObject mapScriot;

    private void OnEnable()
    {
        mapScriot = transform.parent.GetChild(0).gameObject;

        mapScriot.SetActive(false);
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Player"))
        {
            mapScriot.SetActive(true);
        }
        
    }
}
