using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;


public class rcpSetActive : MonoBehaviourPunCallbacks
{
    private void Awake()
    {
        
    }

    public void RPC_Test(GameObject LoungName)
    {
        PhotonView LoungeView = LoungName.GetComponent<PhotonView>();
        //photonView.RPC("RPC_SetActive", RpcTarget.AllBuffered, LoungeView.ViewID);
        photonView.RPC("RPC_SetActive2", RpcTarget.AllBuffered);
    }

    [PunRPC]
    private void RPC_SetActive(int LoungeID)
    {
        Debug.Log("testing pp");

        GameObject LoungName = PhotonView.Find(LoungeID).gameObject;
        //PhotonView LoungName = PhotonView.Find(LoungeID);

        Debug.Log(LoungName);

        //    GameObject player = PhotonView.Find(playerViewID).gameObject;

        //    // get child by position 
        //    GameObject body = gameObject.transform.GetChild(0).gameobject;
        //    // get child by name
        GameObject RealRoom = LoungName.gameObject.transform.Find("RealRoom").gameObject;
        GameObject BluePrint = LoungName.gameObject.transform.Find("BluePrint").gameObject;


        RealRoom.SetActive(true);
        BluePrint.SetActive(false);
    }

    [PunRPC]
    private void RPC_SetActive2()
    {
        Debug.Log("testing pp");

        GameObject LoungName = GameObject.Find("LoungeRoom(Clone)");

        Debug.Log(LoungName);

        //    GameObject player = PhotonView.Find(playerViewID).gameObject;

        //    // get child by position 
        //    GameObject body = gameObject.transform.GetChild(0).gameobject;
        //    // get child by name
        GameObject RealRoom = LoungName.gameObject.transform.Find("RealRoom").gameObject;
        GameObject BluePrint = LoungName.gameObject.transform.Find("BluePrint").gameObject;

        Debug.Log(RealRoom.name);
        RealRoom.SetActive(true);
        BluePrint.SetActive(false);
    }


}
