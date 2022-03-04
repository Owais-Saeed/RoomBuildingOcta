namespace RoomBuildingStarterKit.BuildSystem
{
    using RoomBuildingStarterKit.VisualizeDictionary.Implementations;
    using UnityEngine;

    /// <summary>
    /// The EmployeeTypeToPrefabMapping class.
    /// </summary>
    [CreateAssetMenu(fileName = "EmployeeTypeToPrefabMapping", menuName = "BuildSystem/EmployeeTypeToPrefabMapping", order = 1)]
    public class EmployeeTypeToPrefabMapping : ScriptableObject
    {
        /// <summary>
        /// The Employee type dictionary <EmployeeType, GameObject>.
        /// </summary>
        [EmployeeTypeEnumGameObjectDict]
        public EmployeeTypeEnumGameObjectDict EmployeeTypeEnumGameObjectDict;
    }
}