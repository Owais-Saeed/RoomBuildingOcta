namespace RoomBuildingStarterKit.BuildSystem
{
    using Newtonsoft.Json;
    using RoomBuildingStarterKit.Common;
    using RoomBuildingStarterKit.Components;
    using RoomBuildingStarterKit.Entity;
    using System;
    using System.Collections.Generic;
    using UnityEngine;

    /// <summary>
    /// The WallFurnitureEntity class.
    /// </summary>
    [JsonObject(MemberSerialization.OptIn)]
    public class GroundFurnitureEntity : FurnitureEntityBase
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GroundFurnitureEntity"/> class.
        /// </summary>
        /// <param name="floorEntity">The floor entity.</param>
        /// <param name="floorEntities">The floor entities.</param>
        /// <param name="direction">The furniture direction.</param>
        /// <param name="furnitureType">The furniture type.</param>
        /// <param name="position">The position.</param>
        /// <param name="rotation">The rotation.</param>
        /// <param name="customProperties">The custom properties.</param>
        [JsonConstructor]
        public GroundFurnitureEntity(FloorEntity floorEntity, List<FloorEntity> floorEntities, short direction, FurnitureType furnitureType, CustomVector3 position, CustomVector3 rotation, FurnitureCustomPersistentProperties customProperties) 
            : base(furnitureType, floorEntity, position, rotation, direction, customProperties)
        {
            this.FloorEntities = floorEntities;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="GroundFurnitureEntity"/> class.
        /// </summary>
        /// <param name="floorEntity">The floor entity.</param>
        /// <param name="floorEntities">The floor entities.</param>
        /// <param name="direction">The furniture direction.</param>
        /// <param name="furnitureType">The furniture type.</param>
        /// <param name="furniture">The furniture gameObject.</param>
        /// <param name="parentRoom">The room this furniture belongs to.</param>
        public GroundFurnitureEntity(FloorEntity floorEntity, List<FloorEntity> floorEntities, short direction, FurnitureType furnitureType, GameObject furniture, GameObject parentRoom) 
            : base(furnitureType, furniture, direction, floorEntity, parentRoom)
        {
            this.FloorEntities = floorEntities;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="GroundFurnitureEntity"/> class.
        /// </summary>
        /// <param name="floorEntity">The floor entity.</param>
        /// <param name="floorEntities">The floor entities.</param>
        /// <param name="direction">The furniture direction.</param>
        /// <param name="furnitureType">The furniture type.</param>
        /// <param name="furniture">The furniture gameObject.</param>
        /// <param name="parentRoom">The room this furniture belongs to.</param>
        /// <param name="customProperties">The custom properties.</param>
        public GroundFurnitureEntity(FloorEntity floorEntity, List<FloorEntity> floorEntities, short direction, FurnitureType furnitureType, GameObject furniture, GameObject parentRoom, FurnitureCustomPersistentProperties customProperties) 
            : base(furnitureType, furniture, direction, floorEntity, parentRoom, customProperties)
        {
            this.FloorEntities = floorEntities;
        }

        /// <summary>
        /// Gets or sets the floor entities.
        /// </summary>
        [JsonProperty]
        public List<FloorEntity> FloorEntities { get; set; }

        /// <summary>
        /// Gets or sets the office type.
        /// </summary>
        [JsonProperty]
        public OfficeType OfficeType { get; set; }
    }
}