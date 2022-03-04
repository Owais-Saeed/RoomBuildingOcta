using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetParentLoungeWall : MonoBehaviour
{
    void Awake()
    {
        if (gameObject.transform.parent == null)
            gameObject.transform.parent = FindParent();
    }

    private Transform FindParent()
    {
        GameObject parent = GameObject.Find("LoungeRoom(Clone)/RealRoom/Walls");
        return parent.transform;
    }
}
