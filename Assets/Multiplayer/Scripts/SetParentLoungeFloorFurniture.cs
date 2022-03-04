using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetParentLoungeFloorFurniture : MonoBehaviour
{
    void Awake()
    {
        if (gameObject.transform.parent == null)
            gameObject.transform.parent = FindParent();
    }

    private Transform FindParent()
    {
        GameObject parent = GameObject.Find("LoungeRoom(Clone)/RealRoom/Furnitures");
        return parent.transform;
    }
}
