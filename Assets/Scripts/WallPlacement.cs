using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallPlacement : MonoBehaviour
{
    public GameObject wallPref;
    public GameObject polePref;
    
    GameObject lastPole;
    private bool creating;
    ShowMousePosition pointer;

    // Start is called before the first frame update
    void Start()
    {
        pointer = GetComponent<ShowMousePosition>();
    }

    // Update is called once per frame
    void Update()
    {
        GetInput();
    }

    void GetInput()
    {
        if(Input.GetMouseButtonDown(0))
        {
            StartWall();
        }
        else if (Input.GetMouseButtonUp(0))
        {
            SettWall();
        }
        else
        {
            if (creating)
                UpdateWall();
        }
    }

    void StartWall()
    {
        creating = true;
        Vector3 startPos = pointer.GetWorldPoint();
        startPos = pointer.SnapPosition(startPos);

        GameObject startPole = Instantiate(polePref, startPos, Quaternion.identity);
        startPole.transform.position = new Vector3(startPos.x, startPos.y + 0.3f, startPos.z);
        lastPole = startPole;
    }

    void SettWall()
    {
        creating = false;
    }

    void UpdateWall()
    {
        Vector3 current = pointer.GetWorldPoint();
        current = pointer.SnapPosition(current);
        current = new Vector3(current.x, current.y + 0.3f, current.z);
        if(!current.Equals(lastPole.transform.position))
        {
            CreateWallSegment(current);
        }
    }

    void CreateWallSegment(Vector3 current)
    {
        GameObject newPole = Instantiate(polePref, current, Quaternion.identity);
        Vector3 middle = Vector3.Lerp(newPole.transform.position, lastPole.transform.position, 0.5f);
        GameObject newWall = Instantiate(wallPref, middle, Quaternion.identity);
        newWall.transform.LookAt(lastPole.transform);
        lastPole = newPole;
    }
}
