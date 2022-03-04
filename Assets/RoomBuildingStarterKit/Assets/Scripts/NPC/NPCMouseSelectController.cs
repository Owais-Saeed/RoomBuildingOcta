namespace RoomBuildingStarterKit.NPC
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.Common;
    using UnityEngine;
    using UnityEngine.AI;

    /// <summary>
    /// The NPCMouseSelectController used to control npc selected by mouse.
    /// </summary>
    public class NPCMouseSelectController : MonoBehaviour
    {
        /// <summary>
        /// Stores self transform.
        /// </summary>
        private Transform selfTransform;

        /// <summary>
        /// Executes when npc be selected.
        /// </summary>
        public void OnSelected()
        {
            this.GetComponent<NPCDetourHelper>().AbortInteractWithProps();
            var pos = CameraController.inst.ProjectToGround(InputWrapper.MousePosition);
            pos.y = 2.1f;
            this.selfTransform.position = pos;
        }

        /// <summary>
        /// Executes by animation event after the npc land on the ground.
        /// </summary>
        public void OnGround()
        {
            var pos = this.selfTransform.position;
            pos.y = 0.3f;
            this.selfTransform.position = pos;
        }

        /// <summary>
        /// Changes the npc gameObject's layer.
        /// </summary>
        /// <param name="layerName">The layer name.</param>
        public void ChangeNPCLayer(string layerName)
        {
            var layer = LayerMask.NameToLayer(layerName);
            this.ChangeNPCLayerRecursively(this.gameObject, layer);
        }

        /// <summary>
        /// Changes the npc gameObject's layer recursively.
        /// </summary>
        /// <param name="obj">The npc gameObject.</param>
        /// <param name="layer">The npc gameObject's layer.</param>
        private void ChangeNPCLayerRecursively(GameObject obj, int layer)
        {
            if (obj.layer != LayerMask.NameToLayer("NPC") && obj.layer != LayerMask.NameToLayer("UI"))
            {
                obj.layer = layer;
                for (int i = 0; i < obj.transform.childCount; ++i)
                {
                    var child = obj.transform.GetChild(i).gameObject;
                    this.ChangeNPCLayerRecursively(child, layer);
                }
            }
        }

        /// <summary>
        /// Executes when gameObject instantiates.
        /// </summary>
        private void Awake()
        {
            this.selfTransform = this.transform;
        }
    }
}