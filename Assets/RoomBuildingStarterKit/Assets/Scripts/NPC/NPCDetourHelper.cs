namespace RoomBuildingStarterKit.NPC
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.Common;
    using RoomBuildingStarterKit.Common.Extensions;
    using RoomBuildingStarterKit.Components;
    using RoomBuildingStarterKit.Entity;
    using System.Collections.Generic;
    using System.Linq;
    using UnityEngine;
    using UnityEngine.AI;
    using UnityEngine.Assertions;

    /// <summary>
    /// The NPCDetourHelper class used to NPC path finding.
    /// </summary>
    public class NPCDetourHelper : MonoBehaviour
    {
        /// <summary>
        /// The path finding stop distance eps.
        /// </summary>
        public float StopDistanceEps = 0.5f;

        /// <summary>
        /// The target floor entity.
        /// </summary>
        private FloorEntity targetFloorEntity;

        /// <summary>
        /// The target interact trigger.
        /// </summary>
        private InteractTriggerController targetInteractTrigger;

        /// <summary>
        /// The navmesh agent.
        /// </summary>
        private NavMeshAgent agent;

        /// <summary>
        /// The interact trigger list on a furniture.
        /// </summary>
        private List<InteractTriggerController> interactTriggers = new List<InteractTriggerController>();

        /// <summary>
        /// Gets the current time scale for a npc.
        /// </summary>
        public float TimeScale => Mathf.Pow(TimeController.inst.TimeScale, 1.8f);

        /// <summary>
        /// The target floor entity.
        /// </summary>
        public FloorEntity TargetFloorEntity
        {
            get => this.targetFloorEntity;
            set
            {
                this.targetFloorEntity = value;
                if (this.targetFloorEntity != null)
                {
                    this.targetInteractTrigger = null;
                }
            }
        }

        /// <summary>
        /// Gets or sets the 
        /// </summary>
        public InteractTriggerController TargetInteractTrigger
        {
            get => this.targetInteractTrigger;
            set
            {
                this.targetInteractTrigger = value;
                if (this.targetInteractTrigger != null)
                {
                    this.targetFloorEntity = null;
                }
            }
        }

        /// <summary>
        /// Checks whether the walk around place is valid.
        /// </summary>
        /// <returns>Walk place is valid or not.</returns>
        public bool IsValidWalkAroundPlace()
        {
            return this.TargetFloorEntity != null && this.TargetFloorEntity.OccupiedRoom == null;
        }

        /// <summary>
        /// Checks whether the target place is valid.
        /// </summary>
        /// <param name="interactableFurnitureType">The interactable furniture type.</param>
        /// <returns>The place is valid or not.</returns>
        public bool IsValidPlace(InteractableFurnitureType interactableFurnitureType)
        {
            return this.TargetInteractTrigger != null &&
                this.TargetInteractTrigger.OccupiedNPC == null &&
                (this.targetInteractTrigger.ReserveNPC == null || this.targetInteractTrigger.ReserveNPC == this.gameObject) &&
                this.TargetInteractTrigger.InteractableFurnitureType == interactableFurnitureType &&
                (GlobalRoomManager.inst.BluePrintingRoom.Room == null || GlobalRoomManager.inst.BluePrintingRoom.Room != this.TargetInteractTrigger.FurnitureController.FurnitureEntity.ParentRoom);
        }

        /// <summary>
        /// Checks whether there has a walk around place to go.
        /// </summary>
        /// <returns>Has walk around place or not.</returns>
        public bool HasWalkAroundPlace()
        {
            this.GetWalkAroundDestinationFromOffices();
            return this.IsValidWalkAroundPlace();
        }

        /// <summary>
        /// Goes to destination.
        /// </summary>
        public void GoToDestination()
        {
            Assert.IsTrue(this.TargetFloorEntity != null || this.TargetInteractTrigger != null, "NavMeshAgent Destination is null!");

            if (this.TargetFloorEntity != null)
            {
                this.agent.SetDestination(this.TargetFloorEntity.CenterWorldPosition);
                this.GetComponentInChildren<Animator>().SetTrigger("Walking");
            }
            else
            {
                var pos = this.TargetInteractTrigger.OutsideInteractTrigger.transform.position;
                pos.y = 0.2f;
                this.agent.SetDestination(pos);
                this.GetComponentInChildren<Animator>().SetTrigger("Walking");
                this.TargetInteractTrigger.ReserveNPC = this.gameObject;
            }
        }

        /// <summary>
        /// Checks whether the npc arrives at destinatnion.
        /// </summary>
        /// <returns>Arrive at destination or not.</returns>
        public bool ArriveAtDestination()
        {
            return (this.transform.position - this.agent.destination).magnitude <= this.agent.stoppingDistance;
        }

        /// <summary>
        /// Interacts with furniture props.
        /// </summary>
        public void InteractWithProps()
        {
            this.TargetInteractTrigger.OccupiedNPC = this.gameObject;
            this.agent.enabled = false;

            this.transform.position = this.TargetInteractTrigger.InsideInteractTrigger.transform.position;
            this.transform.rotation = this.TargetInteractTrigger.InsideInteractTrigger.transform.rotation;
        }

        public void AbortInteractWithProps()
        {
            if (this.TargetInteractTrigger != null && this.TargetInteractTrigger.OccupiedNPC == this.gameObject)
            {
                this.TargetInteractTrigger.ReserveNPC = null;
                this.TargetInteractTrigger.OccupiedNPC = null;
                this.TargetInteractTrigger = null;
            }
        }

        /// <summary>
        /// Cancels interact with furniture props.
        /// </summary>
        public void CancelInteractWithProps()
        {
            this.TargetInteractTrigger.OccupiedNPC = null;
            this.TargetInteractTrigger.ReserveNPC = null;

            this.transform.position = this.TargetInteractTrigger.OutsideInteractTrigger.transform.position;
            this.transform.rotation = this.TargetInteractTrigger.OutsideInteractTrigger.transform.rotation;

            this.TargetInteractTrigger = null;

            this.agent.enabled = true;
        }

        /// <summary>
        /// Checks whether there has a work place to go.
        /// </summary>
        /// <returns>Has work place or not.</returns>
        public bool HasWorkPlace()
        {
            this.GetDestinationFromOffices(1 << (int)RoomType.WorkingRoom, InteractableFurnitureType.Work);
            return this.IsValidPlace(InteractableFurnitureType.Work);
        }

        /// <summary>
        /// Checks whether there has a rest place to go.
        /// </summary>
        /// <returns>Has rest place to go or not.</returns>
        public bool HasRestPlace()
        {
            this.GetDestinationFromOffices(1 << (int)RoomType.LoungeRoom, InteractableFurnitureType.Rest);
            return this.IsValidPlace(InteractableFurnitureType.Rest);
        }

        /// <summary>
        /// Checks whether there has a drink place to go.
        /// </summary>
        /// <returns>Has a drink place or not.</returns>
        public bool HasDrinkPlace()
        {
            this.GetDestinationFromOffices((1 << (int)RoomType.WorkingRoom) | (1 << (int)RoomType.LoungeRoom), InteractableFurnitureType.Drink);
            return this.IsValidPlace(InteractableFurnitureType.Drink);
        }

        /// <summary>
        /// Checks whether there has a food place to go.
        /// </summary>
        /// <returns>Has a food place or not.</returns>
        public bool HasFoodPlace()
        {
            this.GetDestinationFromOffices(1 << (int)RoomType.LoungeRoom, InteractableFurnitureType.Food);
            return this.IsValidPlace(InteractableFurnitureType.Food);
        }

        /// <summary>
        /// Gets walk around destination from offices.
        /// </summary>
        private void GetWalkAroundDestinationFromOffices()
        {
            this.TargetFloorEntity = null;

            // Finds from nearest office.
            var office = this.GetCurrentOffice();
            if (office != null && office.activeSelf == true)
            {
                this.GetWalkAroundDestinationFromOffice(office);
                if (this.TargetFloorEntity != null)
                {
                    return;
                }
            }

            // Finds from other offices.
            var offices = GlobalOfficeMouseEventManager.inst.Offices.Where(o => o.activeSelf == true && o != office).ToList();
            offices.Shuffle<GameObject>();
            foreach (var o in offices)
            {
                this.GetWalkAroundDestinationFromOffice(o);
                if (this.TargetFloorEntity != null)
                {
                    return;
                }
            }
        }

        /// <summary>
        /// Gets walk around destination from an office.
        /// </summary>
        /// <param name="office"></param>
        private void GetWalkAroundDestinationFromOffice(GameObject office)
        {
            this.TargetFloorEntity = null;
            var floorEntities = office.GetComponent<FoundationManager>().OfficeFloorCollection.FloorEntities.Where(f => f.OccupiedRoom == null).ToList();
            if (floorEntities.Count == 0)
            {
                return;
            }

            var index = Random.Range(0, floorEntities.Count);
            this.TargetFloorEntity = floorEntities[index];
        }

        /// <summary>
        /// Gets destination from offices.
        /// </summary>
        /// <param name="roomTypeMask">The room type mask.</param>
        /// <param name="interactableFurnitureType">The interactable furniture type.</param>
        private void GetDestinationFromOffices(int roomTypeMask, InteractableFurnitureType interactableFurnitureType)
        {
            this.TargetInteractTrigger = null;

            // Get interact trigger from nearest room.
            var room = this.GetCurrentRoom();
            if (room != null && ((1 << (int)room.GetComponent<BluePrint>().RoomType) & roomTypeMask) != 0 && GlobalRoomManager.inst.BluePrintingRoom?.Room != room)
            {
                this.GetDestinationFromRoom(room, interactableFurnitureType);
                if (this.TargetInteractTrigger != null)
                {
                    return;
                }
            }

            // Finds from nearest office.
            var office = this.GetCurrentOffice();
            if (office != null && office.activeSelf == true)
            {
                this.GetDestinationFromOffice(office, roomTypeMask, interactableFurnitureType);
                if (this.TargetInteractTrigger != null)
                {
                    return;
                }
            }

            // Finds from other offices.
            var offices = GlobalOfficeMouseEventManager.inst.Offices.Where(o => o.activeSelf == true && o != office).ToList();
            offices.Shuffle<GameObject>();
            offices.ForEach(o =>
            {
                this.GetDestinationFromOffice(o, roomTypeMask, interactableFurnitureType);
                if (this.TargetInteractTrigger != null)
                {
                    return;
                }
            });
        }

        /// <summary>
        /// Gets destination from a room.
        /// </summary>
        /// <param name="room">The room gameObject.</param>
        /// <param name="interactableFurnitureType">The interactable furniture type.</param>
        private void GetDestinationFromRoom(GameObject room, InteractableFurnitureType interactableFurnitureType)
        {
            this.interactTriggers.Clear();
            foreach (var furnitureEntity in room.GetComponent<BluePrint>().BluePrintFurnitureEntities)
            {
                var furnitureController = furnitureEntity.Furniture.GetComponent<FurnitureController>();
                if (furnitureController != null)
                {
                    this.interactTriggers.AddRange(furnitureController.InteractTriggers.Where(t => t.InteractableFurnitureType == interactableFurnitureType && t.OccupiedNPC == null && t.ReserveNPC == null));
                }
            }

            if (this.interactTriggers.Count == 0)
            {
                return;
            }

            // Selects a nearest interact trigger.
            float minDistance = Mathf.Infinity;
            this.interactTriggers.ForEach(t =>
            {
                var dis = (t.transform.position.XZ() - this.transform.position.XZ()).magnitude;
                if (dis <= minDistance)
                {
                    minDistance = dis;
                    this.TargetInteractTrigger = t;
                }
            });
        }

        /// <summary>
        /// Gets destination from an office
        /// </summary>
        /// <param name="office">The office gameObject.</param>
        /// <param name="roomTypeMask">The room type mask.</param>
        /// <param name="interactableFurnitureType">The interactable furniture type.</param>
        private void GetDestinationFromOffice(GameObject office, int roomTypeMask, InteractableFurnitureType interactableFurnitureType)
        {
            this.TargetInteractTrigger = null;
            this.interactTriggers.Clear();

            // Gets interact trigger from room.
            var rooms = office.GetComponent<OfficeController>().Rooms.Where(r => ((1 << (int)r.RoomType) & roomTypeMask) != 0 && GlobalRoomManager.inst.BluePrintingRoom?.Room != r.Room).ToList();

            foreach (var room in rooms)
            {
                foreach (var furnitureEntity in room.Room.GetComponent<BluePrint>().BluePrintFurnitureEntities)
                {
                    var furnitureController = furnitureEntity.Furniture.GetComponent<FurnitureController>();
                    if (furnitureController != null)
                    {
                        this.interactTriggers.AddRange(furnitureController.InteractTriggers.Where(t => t.InteractableFurnitureType == interactableFurnitureType && t.OccupiedNPC == null && t.ReserveNPC == null));
                    }
                }
            }

            if (this.interactTriggers.Count == 0)
            {
                // Gets interact trigger outside room.
                GlobalFurnitureManager.inst.OfficeFurnitureEntities
                    .Where(f => f.OfficeType == office.GetComponent<OfficeController>().OfficeType)
                    .ToList()
                    .ForEach(f => this.interactTriggers.AddRange(f.Furniture.GetComponent<FurnitureController>().InteractTriggers.Where(t => t.InteractableFurnitureType == interactableFurnitureType && t.OccupiedNPC == null && t.ReserveNPC == null).ToList()));
            }

            if (this.interactTriggers.Count == 0)
            {
                return;
            }

            // Selects a nearest interact trigger.
            float minDistance = Mathf.Infinity;
            this.interactTriggers.ForEach(t =>
            {
                var dis = (t.transform.position.XZ() - this.transform.position.XZ()).magnitude;
                if (dis <= minDistance)
                {
                    minDistance = dis;
                    this.TargetInteractTrigger = t;
                }
            });
        }

        /// <summary>
        /// Gets npc current inside office.
        /// </summary>
        /// <returns></returns>
        public GameObject GetCurrentOffice()
        {
            Ray downRay = new Ray(this.transform.position + Vector3.up, -Vector3.up);
            RaycastHit hit;
            if (Physics.Raycast(downRay, out hit, 3f, LayerMask.GetMask("Floor")))
            {
                var floor = hit.collider.gameObject;
                var floorEntity = GlobalGridManager.inst.FloorGoToFloorEntityMaps[floor.GetInstanceID()];
                return floorEntity.Office;
            }

            return null;
        }

        /// <summary>
        /// Gets npc target office.
        /// </summary>
        /// <returns></returns>
        public GameObject GetTargetOffice()
        {
            var officeGetFromFurniture = this.TargetInteractTrigger?.GetComponent<InteractTriggerController>()?.FurnitureController?.transform?.parent?.parent?.parent?.gameObject?.GetComponent<BluePrint>()?.Office;
            var officeGetFromFloor = this.TargetFloorEntity?.Office;
            return officeGetFromFloor ?? officeGetFromFurniture;
        }

        /// <summary>
        /// Gets npc current inside room.
        /// </summary>
        /// <returns></returns>
        public GameObject GetCurrentRoom()
        {
            Ray downRay = new Ray(this.transform.position + Vector3.up, -Vector3.up);
            RaycastHit hit;
            if (Physics.Raycast(downRay, out hit, 3f, LayerMask.GetMask("Floor")))
            {
                var floor = hit.collider.gameObject;
                var floorEntity = GlobalGridManager.inst.FloorGoToFloorEntityMaps[floor.GetInstanceID()];
                return floorEntity.OccupiedRoom;
            }

            return null;
        }

        /// <summary>
        /// Gets npc target room.
        /// </summary>
        /// <returns></returns>
        public GameObject GetTargetRoom()
        {
            return this.TargetInteractTrigger?.GetComponent<InteractTriggerController>()?.FurnitureController?.transform?.parent?.parent?.parent?.gameObject;
        }

        /// <summary>
        /// Executes when gameObject instantiates.
        /// </summary>
        private void Awake()
        {
            this.agent = this.GetComponent<NavMeshAgent>();
        }
    }
}