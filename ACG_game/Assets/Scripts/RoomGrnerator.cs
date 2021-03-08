using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RoomGrnerator : MonoBehaviour
{
    public enum Direction { up, down, left, right };        //媒舉類型
    public Direction direction;

    [Header("房間信息")]
    public GameObject roomPrefab;
    public int roomNumber;                  //房間數量
    public Color starColor, endColor;       //顏色
    public GameObject endRoom;


    [Header("位置控制")]
    public Transform generatorPoint;
    public float xoffset;
    public float yoffset;
    public LayerMask roomLayer;

    public List<GameObject> rooms = new List<GameObject>();     //創建房間列表
    void Start()
    {
        for (int i = 0; i < roomNumber; i++)
        {
            rooms.Add(Instantiate(roomPrefab, generatorPoint.position, Quaternion.identity));

            //改變point位置
            ChangPointPos();
        }
        rooms[0].GetComponent<SpriteRenderer>().color = starColor;      //第一個房間
        foreach (var room in rooms)
        {
            if (room.transform.position.sqrMagnitude > endRoom.transform.position.sqrMagnitude)     //距離初始房間最遠的房間作為最後的房間
            {
                endRoom = room;
            }
        }
        endRoom.GetComponent<SpriteRenderer>().color = endColor;


    }


    void Update()
    {
        if (Input.anyKeyDown)
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);     //或的當前激活的場景,並從新進行加載
        }
    }

    public void ChangPointPos()
    {
        do   //dowhile先執行一次再做後續的判斷與後面的動作
        {
            direction =(Direction)Random.Range(0, 4);       //獲得隨機的值(0~4不包含4),加Direction轉換成媒舉型


            switch (direction)//上下左右位置隨機生成
            {
                case Direction.up:
                    generatorPoint.position += new Vector3(0, yoffset, 0);
                    break;
                case Direction.down:
                    generatorPoint.position += new Vector3(0, -yoffset, 0);
                    break;
                case Direction.left:
                    generatorPoint.position += new Vector3(-xoffset, 0, 0);
                    break;
                case Direction.right:
                    generatorPoint.position += new Vector3(xoffset, 0, 0);
                    break;
            }
        } while (Physics2D.OverlapCircle(generatorPoint.position,0.2f,roomLayer));

    }
}
