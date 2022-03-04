namespace RoomBuildingStarterKit.UI
{
    using RoomBuildingStarterKit.Common;
    using UnityEngine;

    public class RecycleJumpInfo : MonoBehaviour
    {
        public void OnRecycle()
        {
            GameObjectRecycler.inst.Destroy(this.gameObject);
        }
    }
}