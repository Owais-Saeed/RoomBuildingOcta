namespace RoomBuildingStarterKit.VisualizeDictionary.Implementations
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.NPC;
    using RoomBuildingStarterKit.UI;
    using System;
    using UnityEngine;

    /// <summary>
    /// The visualize dictionary entry <string, GameObject>.
    /// </summary>
    [Serializable]
    public class StringGameObjectEntry : DictEntry<string, GameObject>
    {
    }

    /// <summary>
    /// The visualize dictionary entry <Menu, GameObject>.
    /// </summary>
    [Serializable]
    public class MenuEnumGameObjectEntry : DictEntry<Menus, GameObject>
    {
    }

    /// <summary>
    /// The visualize dictionary entry <FurnitureType, GameObject>.
    /// </summary>
    [Serializable]
    public class FurnitureTypeEnumGameObjectEntry : DictEntry<FurnitureType, GameObject>
    {
    }

    /// <summary>
    /// The visualize dictionary entry <RoomType, GameObject>.
    /// </summary>
    [Serializable]
    public class RoomTypeEnumGameObjectEntry : DictEntry<RoomType, GameObject>
    {
    }

    /// <summary>
    /// The visualize dictionary entry <EmployeeType, GameObject>.
    /// </summary>
    [Serializable]
    public class EmployeeTypeEnumGameObjectEntry : DictEntry<EmployeeType, GameObject>
    {
    }
}

