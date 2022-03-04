namespace RoomBuildingStarterKit.BuildSystem
{
    using RoomBuildingStarterKit.Common;
    using RoomBuildingStarterKit.NPC;
    using UnityEngine;
    
    /// <summary>
    /// The PickupHand class used to control icon on picked up npc's head.
    /// </summary>
    public class PickupHand : MonoBehaviour
    {
        private void OnEnable()
        {
            this.UpdateBillboardPosition();
        }

        /// <summary>
        /// Updates billboard position.
        /// </summary>
        private void UpdateBillboardPosition()
        {
            if (GlobalNPCManager.inst?.PickupNPC == null)
            {
                return;
            }

            var screenCenter = CameraController.inst.Cam.WorldToScreenPoint(GlobalNPCManager.inst.PickupNPC.transform.position + 2 * Vector3.up);
            this.transform.position = new Vector3(screenCenter.x, screenCenter.y, 0);
        }

        /// <summary>
        /// Executes every frame.
        /// </summary>
        private void Update()
        {
            this.UpdateBillboardPosition();
        }
    }
}