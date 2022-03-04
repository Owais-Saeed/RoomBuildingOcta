namespace RoomBuildingStarterKit.Common.Extensions
{
    using UnityEngine;

    /// <summary>
    /// The Unity built-in Vector extension methods.
    /// </summary>
    public static class VectorExtension
    {
        public static Vector2 XZ(this Vector3 vec)
        {
            return new Vector2(vec.x, vec.z);
        }
    }
}