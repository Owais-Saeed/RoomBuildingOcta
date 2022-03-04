namespace RoomBuildingStarterKit.NPC
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.Common;
    using RoomBuildingStarterKit.Components;
    using RoomBuildingStarterKit.UI;
    using RoomBuildingStarterKit.VisualizeDictionary.Implementations;
    using System.Collections.Generic;
    using System.Linq;
    using UnityEngine;

    /// <summary> 
    /// The GlobalNPCManager class.
    /// </summary>
    [RequireComponent(typeof(MouseClickListener))]
    public class GlobalNPCManager : Singleton<GlobalNPCManager>
    {
        /// <summary>
        /// The employee type to prefab mapping.
        /// </summary>
        public EmployeeTypeToPrefabMapping EmployeeTypeToPrefabMapping;

        /// <summary>
        /// The npc hud canvas.
        /// </summary>
        public GameObject HUDCanvas;

        /// <summary>
        /// The npc board.
        /// </summary>
        public GameObject NPCBoard;

        /// <summary>
        /// The pickup hand ui image.
        /// </summary>
        public GameObject PickupHand;

        /// <summary>
        /// The pickup npc gameObject.
        /// </summary>
        private GameObject pickUpNPC;

        /// <summary>
        /// The mouse click listener.
        /// </summary>
        private MouseClickListener mouseClickListener;

        /// <summary>
        /// The last mouse hovered npc gameObject.
        /// </summary>
        private GameObject lastMouseHoveredNPC;

        /// <summary>
        /// Gets the employee type to prefab mappings.
        /// </summary>
        public EmployeeTypeEnumGameObjectDict EmployeeTypeToPrefabs
        {
            get => this.EmployeeTypeToPrefabMapping.EmployeeTypeEnumGameObjectDict;
        }

        /// <summary>
        /// Gets or sets the pickup npc gameObject.
        /// </summary>
        public GameObject PickupNPC => this.pickUpNPC;

        /// <summary>
        /// Gets or sets the hired npc list.
        /// </summary>
        public List<GameObject> HiredNPCs { get; set; } = new List<GameObject>(); 

        /// <summary>
        /// Creates new employee.
        /// </summary>
        /// <param name="employeeType">The employee type.</param>
        public void CreateNewEmployee(EmployeeType employeeType)
        {
            this.CancelPuttingNPC();

            var prefab = this.EmployeeTypeToPrefabs[employeeType];
            this.pickUpNPC = Instantiate(prefab, this.transform);
            this.pickUpNPC.transform.position = new Vector3(-100000, -100000, -100000);
            var fsms = this.pickUpNPC.GetComponents<PlayMakerFSM>().ToList();
            fsms.ForEach(f => f.SendEvent("New Created"));

            OutlinePostEffect.inst.ForceShowOutline();
            this.pickUpNPC.GetComponent<NPCMouseSelectController>().ChangeNPCLayer("Outline");

            this.CreateHUDForNPC(this.pickUpNPC);
        }

        /// <summary>
        /// Creates a hud for a npc.
        /// </summary>
        /// <param name="npc">The npc gameObject.</param>
        private void CreateHUDForNPC(GameObject npc)
        {
            var board = Instantiate(this.NPCBoard, this.HUDCanvas.transform);
            npc.GetComponent<NPCController>().HUD = board;
            board.GetComponent<NPCHUD>().NPC = npc;
        }

        /// <summary>
        /// Deletes a npc hud.
        /// </summary>
        /// <param name="npc"></param>
        private void DeleteNPCHUD(GameObject npc)
        {
            Destroy(npc.GetComponent<NPCController>().HUD);
        }

        /// <summary>
        /// Checks whether a npc can be picked up.
        /// </summary>
        /// <returns></returns>
        private bool CanPickUpNPC()
        {
            return this.pickUpNPC == null && Cursor.visible == true && GlobalRoomManager.inst.BluePrintingRoom.Room == null && InputWrapper.IsBlocking == false;
        }

        /// <summary>
        /// Destroys a npc gameObject.
        /// </summary>
        /// <param name="npc"></param>
        private void DestroyNPC(GameObject npc)
        {
            this.DeleteNPCHUD(npc);
            npc.GetComponent<NPCController>().GetSalary(1);
            Destroy(npc);
        }

        /// <summary>
        /// Cancels putting a npc.
        /// </summary>
        public void CancelPuttingNPC()
        {
            if (this.pickUpNPC != null)
            {
                this.DestroyNPC(this.pickUpNPC);
            }
        }

        /// <summary>
        /// Calculate income and paid by day.
        /// </summary>
        /// <param name="days">The days passed.</param>
        public void DayPass(int days)
        {
            double totalSalary = 0;
            double totalIncome = 0;

            foreach (var npcGO in this.HiredNPCs)
            {
                var npc = npcGO.GetComponent<NPCController>();
                
                if (npc.Hired == true && npc.UnPaidMoney <= 0)
                {
                    double salary = -days * npc.PurchasePrice;
                    if (CurrencyController.inst.Add(salary, false) == false)
                    {
                        npc.UnPaidMoney = salary;
                    }
                    else
                    {
                        totalSalary += salary;
                    }
                }

                totalIncome += npc.LabourValue * 10;
                npc.LabourValue = 0;
            }

            CurrencyController.inst.JumpInfo(totalSalary);
            CurrencyController.inst.Add(totalIncome);
        }

        /// <summary>
        /// Deletes the picked up npc.
        /// </summary>
        private void DeletePickedUpNPC()
        {
            if (this.pickUpNPC != null && InputWrapper.GetKeyDown(KeyCode.E))
            {
                this.HiredNPCs.Remove(this.pickUpNPC);

                this.DestroyNPC(this.pickUpNPC);
                OutlinePostEffect.inst.CancelForceShowOutline();
            }
        }

        /// <summary>
        /// Updates the pick up hand.
        /// </summary>
        private void UpdatePickupHand()
        {
            if (this.pickUpNPC != null && this.PickupHand.activeSelf == false)
            {
                this.PickupHand.SetActive(true);
            }
            else if (this.pickUpNPC == null && this.PickupHand.activeSelf == true)
            {
                this.PickupHand.SetActive(false);
            }
        }

        /// <summary>
        /// Focus on a npc by mouse hover.
        /// </summary>
        private void FocusOnNPC()
        {
            if (this.pickUpNPC != null || InputWrapper.IsBlocking == true)
            {
                return;
            }

            var additionLayer = this.mouseClickListener.MouseHoveredObject;
            var mouseHoveredNPC = additionLayer?.transform?.parent?.gameObject;
            if (mouseHoveredNPC != this.lastMouseHoveredNPC && this.lastMouseHoveredNPC != null)
            {
                this.lastMouseHoveredNPC.GetComponent<NPCController>().HideInfoHUD();
            }

            if (mouseHoveredNPC != null)
            {
                mouseHoveredNPC.GetComponent<NPCController>().ShowInfoHUD();
            }

            this.lastMouseHoveredNPC = mouseHoveredNPC;
        }

        /// <summary>
        /// Checks whether a npc can drop down.
        /// </summary>
        /// <returns></returns>
        private bool CanDropDown()
        {
            var mouseEventListener = GlobalOfficeMouseEventManager.inst.MouseEventListener;
            var floorEntity = mouseEventListener?.MouseHoveredFloorEntity;

            return this.pickUpNPC != null && InputWrapper.GetKeyUp(KeyCode.Mouse0) && floorEntity != null;
        }

        /// <summary>
        /// Drops down a npc.
        /// </summary>
        private void DropDownNPC()
        {
            if (this.CanDropDown())
            {
                OutlinePostEffect.inst.CancelForceShowOutline();

                if (this.pickUpNPC.GetComponent<NPCController>().Hired == false)
                {
                    this.HiredNPCs.Add(this.pickUpNPC);
                }

                this.pickUpNPC.GetComponent<NPCMouseSelectController>().ChangeNPCLayer("Selectable");
                this.pickUpNPC.GetComponent<NPCController>().Hired = true;
                this.pickUpNPC.GetComponents<PlayMakerFSM>().First(f => f.FsmName == "NPC_Pickup").SendEvent("DropDown");
                this.pickUpNPC = null;
            }
        }

        /// <summary>
        /// Updates mouse cursor visible.
        /// </summary>
        private void UpdateCursor()
        {
            if (this.pickUpNPC != null)
            {
                if (Cursor.visible == false && UIMouseEventDetector.CheckMouseEventOnUI() == true)
                {
                    Cursor.visible = true;
                }
                else if (Cursor.visible == true && UIMouseEventDetector.CheckMouseEventOnUI() == false)
                {
                    Cursor.visible = false;
                }
            }
            else if (Cursor.visible == false)
            {
                Cursor.visible = true;
            }
        }

        /// <summary>
        /// Picks up a npc.
        /// </summary>
        /// <returns>Pick up success or not.</returns>
        private bool PickUpNPC()
        {
            if (this.CanPickUpNPC() == false)
            {
                return false;
            }

            var additionalLayer = this.mouseClickListener.MouseClickedObject;
            if (additionalLayer != null)
            {
                this.pickUpNPC = additionalLayer.transform.parent.gameObject;
                OutlinePostEffect.inst.ForceShowOutline();
                this.pickUpNPC.GetComponent<NPCMouseSelectController>().ChangeNPCLayer("Outline");
                this.pickUpNPC.GetComponents<PlayMakerFSM>().First(f => f.FsmName == "NPC_Pickup").SendEvent("Pickup");
                return true;
            }

            return false;
        }

        /// <summary>
        /// Load npcs from savings.
        /// </summary>
        private void LoadNPCs()
        {
            if (SaveLoader.inst.NPCDatas.Any())
            {
                SaveLoader.inst.NPCDatas.ForEach(n =>
                {
                    var npc = Instantiate(this.EmployeeTypeToPrefabs[n.EmployeeType], this.transform);
                    npc.GetComponent<NPCController>().Load(n);

                    this.CreateHUDForNPC(npc);
                });
            }
        }

        /// <summary>
        /// Executes when gameObject instantiates.
        /// </summary>
        protected override void AwakeInternal()
        {
            this.mouseClickListener = this.GetComponent<MouseClickListener>();
        }

        private void OnEnable()
        {
            EventManager.RegisterEvent(EventManager.Event.TimeInterval_Day, this, nameof(this.DayPass));
        }

        private void OnDisable()
        {
            EventManager.UnRegisterEvent(EventManager.Event.TimeInterval_Day, this, nameof(this.DayPass));
        }

        /// <summary>
        /// Executes after OnEnable.
        /// </summary>
        private void Start()
        {
            Invoke("LoadNPCs", 1);
        }

        /// <summary>
        /// Executes every frame.
        /// </summary>
        private void Update()
        {
            if (this.PickUpNPC() == false)
            {
                this.DropDownNPC();  // DropDownNPC can only be called next frame after PickupNPC.
            }

            this.DeletePickedUpNPC();
            this.UpdatePickupHand();
            this.UpdateCursor();

            this.FocusOnNPC();
        }
    }
}