namespace RoomBuildingStarterKit.Editor
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.NPC;
    using UnityEditor;
    using UnityEngine;

    /// <summary>
    /// The RefreshEmployeeTypeToPrefabMapping class is used to refresh Employee mapping.
    /// </summary>
    public class RefreshEmployeeTypeToPrefabMapping
    {
        /// <summary>
        /// Refreshes the Employee type to prefab mappings.
        /// </summary>
        [MenuItem("Tools/UpdateMappings/Refresh Employee Type To Prefab Mappings", priority = 0)]
        public static void Refresh()
        {
            var mapping = AssetDatabase.LoadAssetAtPath($@"Assets/RoomBuildingStarterKit/Assets/ScriptableObjects/Mappings/EmployeeTypeToPrefabMapping.asset", typeof(EmployeeTypeToPrefabMapping)) as EmployeeTypeToPrefabMapping;
            mapping.EmployeeTypeEnumGameObjectDict.Clear();

            var guids = AssetDatabase.FindAssets("", new[] { $@"Assets/RoomBuildingStarterKit/Assets/Prefabs/Employees" });
            foreach (var guid in guids)
            {
                var path = AssetDatabase.GUIDToAssetPath(guid);
                var prefab = AssetDatabase.LoadAssetAtPath(path, typeof(GameObject)) as GameObject;
                var employee = prefab.GetComponent<NPCController>();
                if (prefab != null && employee != null)
                {
                    mapping.EmployeeTypeEnumGameObjectDict[employee.EmployeeType] = prefab;
                }
            }

            EditorUtility.SetDirty(mapping);
        }
    }
}
