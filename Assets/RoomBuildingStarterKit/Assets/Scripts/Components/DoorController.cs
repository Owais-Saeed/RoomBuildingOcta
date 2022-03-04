namespace RoomBuildingStarterKit.Components
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.NPC;
    using UnityEngine;

    /// <summary>
    /// The door type enum.
    /// </summary>
    public enum DoorType
    {
        OfficeDoor,
        RoomDoor,
    }

    /// <summary>
    /// The DoorController used to control door open/close when npc pass through the door.
    /// </summary>
    public class DoorController : MonoBehaviour
    {
        /// <summary>
        /// The door type.
        /// </summary>
        public DoorType DoorType;

        /// <summary>
        /// The door animator.
        /// </summary>
        private Animator animator;

        /// <summary>
        /// The npc count in front of the door.
        /// </summary>
        private int NPCCount = 0;

        /// <summary>
        /// The parent room of the door.
        /// </summary>
        private GameObject parentRoom;

        /// <summary>
        /// The parent office of the door.
        /// </summary>
        private GameObject parentOffice;

        /// <summary>
        /// Executes when gameObject instantiates.
        /// </summary>
        private void Awake()
        {
            this.animator = this.GetComponent<Animator>();
            if (this.DoorType == DoorType.RoomDoor)
            {
                this.parentRoom = this.transform.parent?.parent?.parent?.gameObject;
                this.parentOffice = this.parentRoom.GetComponent<BluePrint>().Office;
            }
            else if (this.DoorType == DoorType.OfficeDoor)
            {
                this.parentOffice = this.transform.parent?.parent?.parent?.gameObject;
            }
        }

        /// <summary>
        /// Checks whether npc will pass through the room door or not.
        /// </summary>
        /// <param name="npc">The npc gameObject.</param>
        /// <returns>The npc will pass through room door or not.</returns>
        private bool CheckNPCPassThroughRoomDoor(GameObject npc)
        {
            var npcDetourHelper = npc?.GetComponent<NPCDetourHelper>();

            return npc != null &&
                GlobalRoomManager.inst.BluePrintingRoom?.Room != this.parentRoom &&
                GlobalNPCManager.inst?.PickupNPC != npc &&
                (npcDetourHelper.GetCurrentRoom() != this.parentRoom &&
                npcDetourHelper.GetTargetRoom() == this.parentRoom) ||
                (npcDetourHelper.GetCurrentRoom() == this.parentRoom &&
                npcDetourHelper.GetTargetRoom() != this.parentRoom);
        }

        /// <summary>
        /// Checks whether npc will pass through the office door or not.
        /// </summary>
        /// <param name="npc">The npc gameObject.</param>
        /// <returns>The npc will pass through room door or not.</returns>
        private bool CheckNPCPassThroughOfficeDoor(GameObject npc)
        {
            var npcDetourHelper = npc?.GetComponent<NPCDetourHelper>();

            return npc != null &&
                GlobalNPCManager.inst?.PickupNPC != npc &&
                (npcDetourHelper.GetCurrentOffice() != this.parentOffice &&
                npcDetourHelper.GetTargetOffice() == this.parentOffice) ||
                (npcDetourHelper.GetCurrentOffice() == this.parentOffice &&
                npcDetourHelper.GetTargetOffice() != this.parentOffice);
        }

        /// <summary>
        /// Triggers when other collider enter door collider.
        /// </summary>
        /// <param name="collider">Other collider.</param>
        private void OnTriggerEnter(Collider collider)
        {
            if (collider.gameObject.layer == LayerMask.NameToLayer("NPC"))
            {
                var npc = collider.transform.parent.gameObject;
                if (npc != null && (this.DoorType == DoorType.RoomDoor && this.CheckNPCPassThroughRoomDoor(npc) || this.DoorType == DoorType.OfficeDoor && this.CheckNPCPassThroughOfficeDoor(npc)))
                {
                    ++this.NPCCount;
                    this.animator.SetBool("Open", true);
                }
            }
        }

        /// <summary>
        /// Triggers when other collider exit door collider.
        /// </summary>
        /// <param name="collider">Other collider.</param>
        private void OnTriggerExit(Collider collider)
        {
            if (collider.gameObject.layer == LayerMask.NameToLayer("NPC"))
            {
                --this.NPCCount;
                if (this.NPCCount <= 0)
                {
                    this.NPCCount = 0;
                    this.animator.SetBool("Open", false);
                }
            }
        }
    }
}