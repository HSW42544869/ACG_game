using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using CodeMonkey.Utils;

public class MonkeyEnemy : MonoBehaviour
{
    private Enemy pathfindingMovement;
    private Vector3 startingPosition;
    private Vector3 roamPosition;

    private void Awake()
    {
        pathfindingMovement = GetComponent<Enemy>();
    }
    private void Start()
    {
        startingPosition = transform.position;
        roamPosition = GetRoamPosition();
    }
    private void Update()
    {
      
    }
    private Vector3 GetRoamPosition()
    {
        return startingPosition + UtilsClass.GetRandomDir() * Random.Range(10f, 70f);
    }
}
