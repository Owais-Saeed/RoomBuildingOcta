namespace RoomBuildingStarterKit.Components
{
    using RoomBuildingStarterKit.Common.Extensions;
    using System.Collections.Generic;
    using UnityEngine;
    using UnityEngine.UI;

    /// <summary>
    /// The PlayButtonController class.
    /// </summary>
    public class PlayButtonController : MonoBehaviour
    {
        /// <summary>
        /// The green play icon.
        /// </summary>
        public Sprite PlayIconGreen;

        /// <summary>
        /// The gray play icon.
        /// </summary>
        public Sprite PlayIconGray;

        /// <summary>
        /// The play icons.
        /// </summary>
        private List<Image> playIcons = new List<Image>();

        /// <summary>
        /// Updates play button images.
        /// </summary>
        /// <param name="timeScale">The time scale.</param>
        public void UpdatePlayButtonImages(int timeScale)
        {
            if (timeScale == -1)
            {
                this.playIcons.ForEach(p => p.sprite = this.PlayIconGray);
                return;
            }

            timeScale = Mathf.Clamp(timeScale, 0, 3);

            this.playIcons.ForEach(p => p.sprite = this.PlayIconGray);

            for (int i = 0; i <= timeScale; ++i)
            {
                this.playIcons[i].sprite = this.PlayIconGreen;
            }
        }

        /// <summary>
        /// Executes when gameObject instantiates.
        /// </summary>
        private void Awake()
        {
            this.transform.GetChilds<Image>(ref this.playIcons);
        }
    }
}