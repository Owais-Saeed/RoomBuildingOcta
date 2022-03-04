namespace RoomBuildingStarterKit.Common
{
    using System.Collections.Generic;
    using UnityEngine;

    public static class CollectionExtensions
    {
        /// <summary>
        /// Shuffles a list.
        /// </summary>
        /// <typeparam name="T">The element type.</typeparam>
        /// <param name="list">The list to be shuffled.</param>
        public static void Shuffle<T>(this List<T> list)
        {
            for (int i = 0; i < list.Count; ++i)
            {
                var temp = list[i];
                var index = Random.Range(i, list.Count);
                list[i] = list[index];
                list[index] = temp;
            }
        }
    }
}