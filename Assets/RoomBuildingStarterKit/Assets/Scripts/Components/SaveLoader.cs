namespace RoomBuildingStarterKit.BuildSystem
{
    using Newtonsoft.Json;
    using RoomBuildingStarterKit.Common;
    using RoomBuildingStarterKit.Components;
    using RoomBuildingStarterKit.NPC;
    using System;
    using System.Collections.Generic;
    using UnityEngine;

    /// <summary>
    /// The SaveLoaderSerializableData is used to store the serializable data in SaveLoader class.
    /// </summary>
    [JsonObject(MemberSerialization.OptIn)]
    public class SaveLoaderSerializableData
    {
        /// <summary>
        /// Gets or sets the office datas.
        /// </summary>
        [JsonProperty]
        public List<OfficeControllerSerializableData> OfficeDatas { get; set; } = new List<OfficeControllerSerializableData>();

        /// <summary>
        /// Gets or sets the room datas.
        /// </summary>
        [JsonProperty]
        public List<BluePrintSerializableData> RoomDatas { get; set; } = new List<BluePrintSerializableData>();

        /// <summary>
        /// Gets or sets the npc datas.
        /// </summary>
        [JsonProperty]
        public List<NPCSerializableData> NPCDatas { get; set; } = new List<NPCSerializableData>();

        /// <summary>
        /// Gets or sets the game time.
        /// </summary>
        [JsonProperty]
        public GameTime GameTime { get; set; } = null;

        /// <summary>
        /// Gets or sets the game funds.
        /// </summary>
        [JsonProperty]
        public double GameFunds { get; set; } = -1;

        /// Gets or sets the furniture manager datas.
        /// </summary>
        [JsonProperty]
        public GlobalFurnitureManagerSerializableData FurnitureManagerData { get; set; } = new GlobalFurnitureManagerSerializableData();
    }

    /// <summary>
    /// The SaveLoader class used to save/load game.
    /// </summary>
    public class SaveLoader : Singleton<SaveLoader>
    {
        /// <summary>
        /// The serializable data.
        /// </summary>
        private SaveLoaderSerializableData serializableData = new SaveLoaderSerializableData();

        /// <summary>
        /// Gets or sets the office datas.
        /// </summary>
        public List<OfficeControllerSerializableData> OfficeDatas { get => this.serializableData.OfficeDatas; set => this.serializableData.OfficeDatas = value; }

        /// <summary>
        /// Gets or sets the room datas.
        /// </summary>
        [JsonProperty]
        public List<BluePrintSerializableData> RoomDatas { get => this.serializableData.RoomDatas; set => this.serializableData.RoomDatas = value; }

        /// <summary>
        /// Gets or sets the game time.
        /// </summary>
        [JsonProperty]
        public GameTime GameTime { get => this.serializableData.GameTime; set => this.serializableData.GameTime = value; }

        /// <summary>
        /// Gets or sets the game funds.
        /// </summary>
        [JsonProperty]
        public double GameFunds { get => this.serializableData.GameFunds; set => this.serializableData.GameFunds = value; }

        /// <summary>
        /// Gets or sets the npc datas.
        /// </summary>
        [JsonProperty]
        public List<NPCSerializableData> NPCDatas { get => this.serializableData.NPCDatas; set => this.serializableData.NPCDatas = value; }

        /// Gets or sets the furniture manager datas.
        /// </summary>
        [JsonProperty]
        public GlobalFurnitureManagerSerializableData FurnitureManagerData { get => this.serializableData.FurnitureManagerData; set => this.serializableData.FurnitureManagerData = value; }

        /// <summary>
        /// Save game data into file.
        /// </summary>
        /// <param name="fileName">The file name.</param>
        public void Save(string fileName)
        {
            if (Global.inst.RuntimeMode == RuntimeMode.OfficeEditor)
            {
                return;
            }

            this.ClearData();
            EventManager.TriggerEvent(EventManager.Event.Save, fileName);
            string jsonString = JsonConvert.SerializeObject(this.serializableData);

            try
            {
                SaveHelper.Save(fileName, jsonString);
            }
            catch (SaveGameContentException e)
            {
                Debug.LogError(e.Message);
            }
        }

        /// <summary>
        /// Executes when gameObject instantiates.
        /// </summary>
        protected override void AwakeInternal()
        {
            if (!string.IsNullOrEmpty(Global.inst?.LoadFileName))
            {
                this.Load(Global.inst.LoadFileName);
                Global.inst.LoadFileName = string.Empty;
            }
        }

        /// <summary>
        /// Loads game data from file.
        /// </summary>
        /// <param name="fileName">The file name.</param>
        private void Load(string fileName)
        {
            try
            {
                var fileContent = SaveHelper.Load(fileName);
                if (!string.IsNullOrEmpty(fileContent))
                {
                    var saveLoader = JsonConvert.DeserializeObject<SaveLoaderSerializableData>(fileContent);
                    this.OfficeDatas = saveLoader.OfficeDatas;
                    this.RoomDatas = saveLoader.RoomDatas;
                    this.NPCDatas = saveLoader.NPCDatas;
                    this.GameTime = saveLoader.GameTime;
                    this.GameFunds = saveLoader.GameFunds;
                    this.FurnitureManagerData = saveLoader.FurnitureManagerData;
                }
            }
            catch (Exception)
            {
            }
        }

        /// <summary>
        /// Clear game datas.
        /// </summary>
        private void ClearData()
        {
            this.OfficeDatas.Clear();
            this.RoomDatas.Clear();
            this.NPCDatas.Clear();
        }
    }
}
