namespace RoomBuildingStarterKit.Common
{
    using RoomBuildingStarterKit.BuildSystem;
    using UnityEngine;
    
    /// <summary>
    /// The mouse click event enum.
    /// </summary>
    public enum MouseClickEvent
    {
        PENDING_MOUSE_DOWN,
        PENDING_MOUSE_UP,
    }

    /// <summary>
    /// The mouse click listener class.
    /// </summary>
    public class MouseClickListener : MonoBehaviour
    {
        /// <summary>
        /// The layer mask.
        /// </summary>
        public LayerMask layerMask;

        /// <summary>
        /// The mouse click event.
        /// </summary>
        private MouseClickEvent mouseClickEvent = MouseClickEvent.PENDING_MOUSE_DOWN;

        /// <summary>
        /// Gets the mouse click gameObject.
        /// </summary>
        public GameObject MouseClickedObject { get; private set; }

        /// <summary>
        /// Gets the mouse hovered gameObject.
        /// </summary>
        public GameObject MouseHoveredObject { get; private set; }

        /// <summary>
        /// Checks the click event.
        /// </summary>
        private void CheckClickEvent()
        {
            this.MouseClickedObject = null;

            RaycastHit hit;
            var ray = CameraController.inst.Cam.ScreenPointToRay(InputWrapper.MousePosition);
            if (Physics.Raycast(ray, out hit, Mathf.Infinity, this.layerMask))
            {
                if (this.mouseClickEvent == MouseClickEvent.PENDING_MOUSE_DOWN && InputWrapper.GetKeyDown(KeyCode.Mouse0))
                {
                    this.mouseClickEvent = MouseClickEvent.PENDING_MOUSE_UP;
                }
                else if (this.mouseClickEvent == MouseClickEvent.PENDING_MOUSE_UP && InputWrapper.GetKeyUp(KeyCode.Mouse0))
                {
                    this.MouseClickedObject = hit.collider.gameObject;
                    this.mouseClickEvent = MouseClickEvent.PENDING_MOUSE_DOWN;
                }

                this.MouseHoveredObject = hit.collider.gameObject;
            }
            else
            {
                this.mouseClickEvent = MouseClickEvent.PENDING_MOUSE_DOWN;
                this.MouseHoveredObject = null;
            }
        }

        /// <summary>
        /// Executes every frame.
        /// </summary>
        private void Update()
        {
            this.CheckClickEvent();
        }
    }
}