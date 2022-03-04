using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Setparent : MonoBehaviour
{
    public GameObject parent;
    // Start is called before the first frame update
    void Awake()
    {
        if (gameObject.name == "RealRoomFloor_LoungeRoom")
        {
            gameObject.transform.parent = FindParentLoungeRoom();
        }
        else
        {
            gameObject.transform.parent = FindParent();
        }
    }

    private Transform FindParent()
    {
        parent = GameObject.Find("MainResturant41x41/Rooms");
        return parent.transform;
    }
    
    private Transform FindParentLoungeRoom()
    {
        parent = GameObject.Find("LoungeRoom(Clone)/RealRoom/Floors");
        return parent.transform;
    }
}
