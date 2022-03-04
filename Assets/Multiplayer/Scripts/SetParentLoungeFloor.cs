using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetParentLoungeFloor : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
        if(gameObject.transform.parent == null)
            gameObject.transform.parent = FindParent();
    }

    private Transform FindParent()
    {
        GameObject parent = GameObject.Find("LoungeRoom(Clone)/RealRoom/Floors");
        return parent.transform;
    }

}