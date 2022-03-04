namespace RoomBuildingStarterKit.NPC
{
    using Newtonsoft.Json;
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.Common;
    using RoomBuildingStarterKit.Components;
    using RoomBuildingStarterKit.UI;
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using UnityEngine;
    using UnityEngine.AI;

    /// <summary>
    /// The PlayMakerFSM variable class.
    /// </summary>
    [JsonObject(MemberSerialization.OptIn)]
    public class FSMVariable
    {
        /// <summary>
        /// The variable name.
        /// </summary>
        [JsonProperty]
        public string VariableName;

        /// <summary>
        /// The variable type.
        /// </summary>
        [JsonProperty]
        public string VariableType;

        /// <summary>
        /// The variable value.
        /// </summary>
        [JsonProperty]
        public string VariableValue;

        /// <summary>
        /// Converts the instance to string.
        /// </summary>
        /// <returns></returns>
        public override string ToString()
        {
            return "{ " + $"Name: {this.VariableName}, Type: {this.VariableType}, Value: {this.VariableValue}" + " }";
        }
    }

    /// <summary>
    /// The PlayMakerFSM data class.
    /// </summary>
    [JsonObject(MemberSerialization.OptIn)]
    public class FSMData
    {
        /// <summary>
        /// The fsm name.
        /// </summary>
        [JsonProperty]
        public string FSMName;

        /// <summary>
        /// The fsm active state name.
        /// </summary>
        [JsonProperty]
        public string FSMActiveStateName;

        /// <summary>
        /// The fsm variables.
        /// </summary>
        [JsonProperty]
        public List<FSMVariable> FSMVariables = new List<FSMVariable>();

        /// <summary>
        /// Converts the instance to string.
        /// </summary>
        /// <returns></returns>
        public override string ToString()
        {
            return $"FSMName: {this.FSMName}, ActiveStateName: {this.FSMActiveStateName}, Variables: {string.Join(",", this.FSMVariables.Select(v => v.ToString()))}";
        }
    }

    /// <summary>
    /// The NPC serializable data class.
    /// </summary>
    [JsonObject(MemberSerialization.OptIn)]
    public class NPCSerializableData
    {
        /// <summary>
        /// The employee type.
        /// </summary>
        [JsonProperty]
        public EmployeeType EmployeeType;

        /// <summary>
        /// The animator state name hash.
        /// </summary>
        [JsonProperty]
        public int AnimatorStateNameHash;

        /// <summary>
        /// The animator state normalized time.
        /// </summary>
        [JsonProperty]
        public float AnimatorStateNormalizedTime;

        /// <summary>
        /// The npc position.
        /// </summary>
        [JsonProperty]
        public CustomVector3 Position;

        /// <summary>
        /// The npc rotation.
        /// </summary>
        [JsonProperty]
        public CustomVector3 Rotation;

        /// <summary>
        /// The target floor entity's index.
        /// </summary>
        [JsonProperty]
        public int TargetFloorEntityIndex;

        /// <summary>
        /// The target interact furniture id.
        /// </summary>
        [JsonProperty]
        public Guid TargetInteractFurnitureId;

        /// <summary>
        /// The target interact trigger index.
        /// </summary>
        [JsonProperty]
        public int TargetInteractTriggerIndex;

        /// <summary>
        /// The fsm data list.
        /// </summary>
        [JsonProperty]
        public List<FSMData> FSMDatas = new List<FSMData>();

        /// <summary>
        /// Converts the instance to string.
        /// </summary>
        /// <returns></returns>
        public override string ToString()
        {
            return $"AnimatorStateNameHash: {this.AnimatorStateNameHash}, AnimatorStateNormalizedTime: {this.AnimatorStateNormalizedTime}\n" +
                $"Position: {this.Position}, Rotation: {this.Rotation}" +
                $"TargetFloorIndex: {this.TargetFloorEntityIndex}, TargetFurnitureId: {this.TargetInteractFurnitureId}, TargetInteractTriggerIndex: {this.TargetInteractTriggerIndex}" +
                string.Join("\n", this.FSMDatas.Select(d => d.ToString()));
        }
    }

    /// <summary>
    /// The NPCController class.
    /// </summary>
    public class NPCController : MonoBehaviour
    {
        [Tooltip("Salary of the NPC, the npc will get paid by day.")]
        public int PurchasePrice;

        [Tooltip("The money player can get when sell a NPC.")]
        public int SellPrice;

        /// <summary>
        /// The employee type.
        /// </summary>
        public EmployeeType EmployeeType;

        /// <summary>
        /// The npc animator.
        /// </summary>
        private Animator animator;

        /// <summary>
        /// The npc detour helper.
        /// </summary>
        private NPCDetourHelper detourHelper;

        /// <summary>
        /// The npc data.
        /// </summary>
        private NPCSerializableData npcData;

        /// <summary>
        /// The npc action fsm.
        /// </summary>
        private PlayMakerFSM npcActionFSM;

        /// <summary>
        /// The npc serializable data.
        /// </summary>
        public NPCSerializableData NPCData => this.npcData;

        /// <summary>
        /// The npc ui hud.
        /// </summary>
        public GameObject HUD { get; set; }

        /// <summary>
        /// Gets the npc's sanity.
        /// </summary>
        public int Sanity => (int)float.Parse(this.npcActionFSM.FsmVariables.GetVariable("SAN").RawValue.ToString());

        /// <summary>
        /// Gets the npc's hungry.
        /// </summary>
        public int Hungry => (int)float.Parse(this.npcActionFSM.FsmVariables.GetVariable("HUNGRY").RawValue.ToString());

        /// <summary>
        /// Gets the npc's thirsty.
        /// </summary>
        public int Thirsty => (int)float.Parse(this.npcActionFSM.FsmVariables.GetVariable("THIRSTY").RawValue.ToString());

        /// <summary>
        /// Gets or sets whether the NPC has been hired.
        /// </summary>
        public bool Hired { get; set; } = false;

        /// <summary>
        /// Gets or sets the unpaid money.
        /// </summary>
        public double UnPaidMoney { get; set; }

        /// <summary>
        /// Gets or sets the NPC's labour value.
        /// </summary>
        public int LabourValue { get; set; }

        /// <summary>
        /// Hides all npc's huds immediately.
        /// </summary>
        public void HideAllBoradImmediately()
        {
            this.HUD?.GetComponent<NPCHUD>()?.HideAllHUDsImmediately();
        }

        /// <summary>
        /// Disables all boards when game pause.
        /// </summary>
        public void DisableAllBoard()
        {
            this.HUD?.GetComponent<NPCHUD>()?.DisableAllHUDs();
        }

        /// <summary>
        /// Enables all boards when game resume.
        /// </summary>
        public void EnableAllBoard()
        {
            this.HUD?.GetComponent<NPCHUD>()?.EnableAllHUDs();
        }

        /// <summary>
        /// Resets npc's intention.
        /// </summary>
        public void ResetIntention()
        {
            this.HUD?.GetComponent<NPCHUD>()?.ResetIntention();
        }

        /// <summary>
        /// The npc's work income.
        /// </summary>
        public void WorkIncome()
        {
            this.LabourValue += 1;
        }

        /// <summary>
        /// Shows the npc's intention HUD.
        /// </summary>
        /// <param name="text">The intention text.</param>
        public void ShowIntentionHUD(string text)
        {
            this.HUD?.GetComponent<NPCHUD>()?.ShowIntentionHUD(text);
        }

        /// <summary>
        /// Shows the npc's info HUD.
        /// </summary>
        public void ShowInfoHUD()
        {
            this.HUD?.GetComponent<NPCHUD>()?.ShowInfoHUD();
        }

        /// <summary>
        /// Hides the npc's info hud.
        /// </summary>
        public void HideInfoHUD()
        {
            this.HUD?.GetComponent<NPCHUD>()?.HideInfoHUD();
        }

        /// <summary>
        /// Saves the npc's data.
        /// </summary>
        /// <param name="fileName">The saving filename.</param>
        public void Save(string fileName)
        {
            this.npcData = new NPCSerializableData();

            npcData.EmployeeType = this.EmployeeType;

            var fsms = this.GetComponents<PlayMakerFSM>().ToList();
            this.npcData.FSMDatas = fsms.Where(f => f.isActiveAndEnabled).Select(f =>
            {
                return new FSMData
                {
                    FSMName = f.FsmName,
                    FSMActiveStateName = f.ActiveStateName,
                    FSMVariables = f.FsmVariables.GetAllNamedVariables().ToList().Where(v => v.IsNone == false).Select(v =>
                    {
                        return new FSMVariable { VariableName = v.Name, VariableType = v.RawValue.GetType().ToString(), VariableValue = v.RawValue.ToString() };
                    }).ToList(),
                };
            }).ToList();

            this.npcData.AnimatorStateNameHash = this.animator.GetCurrentAnimatorStateInfo(0).fullPathHash;
            this.npcData.AnimatorStateNormalizedTime = this.animator.GetCurrentAnimatorStateInfo(0).normalizedTime;

            this.npcData.Position = new CustomVector3(this.transform.position);
            this.npcData.Rotation = new CustomVector3(this.transform.rotation.eulerAngles);

            this.npcData.TargetFloorEntityIndex = this.detourHelper.TargetFloorEntity?.Index ?? -1;
            this.npcData.TargetInteractFurnitureId = this.detourHelper.TargetInteractTrigger?.FurnitureController?.FurnitureEntity?.CustomProperties.ID ?? Guid.Empty;
            this.npcData.TargetInteractTriggerIndex = this.detourHelper.TargetInteractTrigger?.Index ?? -1;

            SaveLoader.inst.NPCDatas.Add(this.npcData);
        }

        /// <summary>
        /// Loads the npc's data.
        /// </summary>
        /// <param name="data">The npc's data.</param>
        public void Load(NPCSerializableData data)
        {
            // Restores transform.
            this.transform.position = data.Position.ToVector3();
            this.transform.rotation = Quaternion.Euler(data.Rotation.ToVector3());

            // Restores animator.
            this.animator.Play(data.AnimatorStateNameHash, 0, data.AnimatorStateNormalizedTime);

            // Restores nav target.
            this.detourHelper.TargetFloorEntity = (data.TargetFloorEntityIndex != -1 ? GlobalGridManager.inst.FloorGoToFloorEntityMaps.Values.First(f => f.Index == data.TargetFloorEntityIndex) : null);
            this.detourHelper.TargetInteractTrigger = (data.TargetInteractFurnitureId != Guid.Empty && data.TargetInteractTriggerIndex != -1 ?
                GlobalFurnitureManager.inst.FurnitureGoToFurnitureEntityMaps.Values.First(f => f.CustomProperties.ID == data.TargetInteractFurnitureId)?.Furniture?.GetComponent<FurnitureController>().InteractTriggers[data.TargetInteractTriggerIndex] : null);
            
            if (this.detourHelper.TargetInteractTrigger != null)
            {
                this.detourHelper.TargetInteractTrigger.OccupiedNPC = this.gameObject;
            }

            // ReEnable NavMeshAgents.
            // Because nav mesh agent will split from gameObject and exists at a wierd position. Only reEnable it could solve this issue...
            this.GetComponent<NavMeshAgent>().enabled = false;
            this.GetComponent<NavMeshAgent>().enabled = true;

            // Restores PlayMakerFSM.
            var fsms = this.GetComponents<PlayMakerFSM>();
            data.FSMDatas.ForEach(f =>
            {
                var fsm = fsms.First(ff => ff.FsmName == f.FSMName);
                
                // Set variables.
                f.FSMVariables.ForEach(v =>
                {
                    if (Type.GetType(v.VariableType).IsEnum)
                    {
                        fsm.FsmVariables.GetVariable(v.VariableName).RawValue = Enum.Parse(Type.GetType(v.VariableType), v.VariableValue);
                    }
                    else
                    {
                        fsm.FsmVariables.GetVariable(v.VariableName).RawValue = Convert.ChangeType(v.VariableValue, Type.GetType(v.VariableType));
                    }
                });
                
                // Set state.
                fsm.SetState(f.FSMActiveStateName);
            });
        }

        /// <summary>
        /// Checks whether the npc has been paid.
        /// </summary>
        /// <returns></returns>
        public bool GetPaid()
        {
            if (this.UnPaidMoney == 0)
            {
                return true;
            }

            if (CurrencyController.inst.Add(this.UnPaidMoney))
            {
                this.UnPaidMoney = 0;
                return true;
            }

            return false;
        }

        /// <summary>
        /// Gets salary by day.
        /// </summary>
        /// <param name="days">The days since last get paid.</param>
        public void GetSalary(int days)
        {
            if (this.Hired == false || this.UnPaidMoney > 0)
            {
                return;
            }

            double salary = -days * this.PurchasePrice;

            if (CurrencyController.inst.Add(salary) == false)
            {
                this.UnPaidMoney = salary;
            }
        }

        /// <summary>
        /// Executes when enable gameObject.
        /// </summary>
        private void OnEnable()
        {
            EventManager.RegisterEvent(EventManager.Event.Save, this, nameof(this.Save));
            EventManager.RegisterEvent(EventManager.Event.Pause, this, nameof(this.DisableAllBoard));
            EventManager.RegisterEvent(EventManager.Event.Resume, this, nameof(this.EnableAllBoard));
        }

        /// <summary>
        /// Executes when disable gameObject.
        /// </summary>
        private void OnDisable()
        {
            EventManager.UnRegisterEvent(EventManager.Event.Save, this, nameof(this.Save));
            EventManager.UnRegisterEvent(EventManager.Event.Pause, this, nameof(this.DisableAllBoard));
            EventManager.UnRegisterEvent(EventManager.Event.Resume, this, nameof(this.EnableAllBoard));
        }

        /// <summary>
        /// Executes when gameObject instantiates.
        /// </summary>
        private void Awake()
        {
            this.animator = this.GetComponentInChildren<Animator>();
            this.detourHelper = this.GetComponent<NPCDetourHelper>();

          //  this.npcActionFSM = this.GetComponents<PlayMakerFSM>().First(f => f.FsmName == "NPC_Action");
        }
    }
}