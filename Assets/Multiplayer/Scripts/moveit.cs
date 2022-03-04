using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class moveit : MonoBehaviour
{
    public float speed = 5;

    PhotonView view;

    private void Start()
    {
        view = GetComponent<PhotonView>();
    }
    void Update()
    {
        if(view.IsMine)
        {
            float x = Input.GetAxisRaw("Horizontal");
            float y = Input.GetAxisRaw("Vertical");
            gameObject.transform.Translate(new Vector3(x, 0, -y) * speed * Time.deltaTime);
        }

    }
}
