using RoomBuildingStarterKit.NPC;
using UnityEngine;

public class AnimatorEventReceiver : MonoBehaviour
{
    /// <summary>
    /// Executes by animation event after the npc land on the ground.
    /// </summary>
    public void OnGround()
    {
        this.transform.parent.gameObject.GetComponent<NPCMouseSelectController>().OnGround();
    }
}