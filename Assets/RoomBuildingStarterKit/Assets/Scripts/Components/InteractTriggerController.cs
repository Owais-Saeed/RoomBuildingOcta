namespace RoomBuildingStarterKit.BuildSystem
{
    using UnityEngine;

    /// <summary>
    /// The interactable furniture type.
    /// </summary>
    public enum InteractableFurnitureType
    {
        Work,
        Rest,
        Meeting,
        Drink,
        Food,
    }

    /// <summary>
    /// The interact type.
    /// </summary>
    public enum InteractType
    {
        Typing,
        Meeting,
        SittingOnSofa,
        Opening,
        Drinking,
        TeaBreaking,
        Writing,
    }

    /// <summary>
    /// The InteractTriggerController class used for NPC to interact with furnitures.
    /// </summary>
    public class InteractTriggerController : MonoBehaviour
    {
        /// <summary>
        /// The NPC interactable furniture type.
        /// </summary>
        public InteractableFurnitureType InteractableFurnitureType;

        /// <summary>
        /// The interact type.
        /// </summary>
        public InteractType InteractType;

        /// <summary>
        /// The NPC which has occupied the interact trigger.
        /// </summary>
        [HideInInspector]
        public GameObject OccupiedNPC;

        /// <summary>
        /// The NPC which has reserved the interact trigger.
        /// </summary>
        [HideInInspector]
        public GameObject ReserveNPC;

        /// <summary>
        /// The inside interact trigger.
        /// </summary>
        public GameObject InsideInteractTrigger;

        /// <summary>
        /// The outside interact trigger.
        /// </summary>
        public GameObject OutsideInteractTrigger;

        /// <summary>
        /// The index.
        /// </summary>
        [HideInInspector]
        public int Index;

        /// <summary>
        /// The furniture controller.
        /// </summary>
        [HideInInspector]
        public FurnitureController FurnitureController;
    }
}