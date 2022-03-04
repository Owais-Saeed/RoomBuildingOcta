namespace RoomBuildingStarterKit.UI
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.NPC;
    using System.Collections;
    using System.Collections.Generic;
    using TMPro;
    using UnityEngine;
    using UnityEngine.UI;

    /// <summary>
    /// The NPCHUD class is used to display NPC informations and intentions.
    /// </summary>
    public class NPCHUD : MonoBehaviour
    {
        /// <summary>
        /// The NPC intention display panel.
        /// </summary>
        public GameObject IntentionPanel;

        /// <summary>
        /// The NPC info display panel.
        /// </summary>
        public GameObject InfoPanel;

        /// <summary>
        /// The NPC sanity bar.
        /// </summary>
        public Slider SanityBar;

        /// <summary>
        /// The NPC hungry bar.
        /// </summary>
        public Slider HungryBar;

        /// <summary>
        /// The thirsty bar.  
        /// </summary>
        public Slider ThirstyBar;

        /// <summary>
        /// The intention icon.
        /// </summary>
        public Image IntentionIcon;

        /// <summary>
        /// The intention icon in info board.
        /// </summary>
        public Image IntentionIconInInfoBoard;

        /// <summary>
        /// The intention icon list.
        /// </summary>
        public List<Sprite> IntentionIconList;

        /// <summary>
        /// The sanity value.
        /// </summary>
        public TextMeshProUGUI SanityValue;

        /// <summary>
        /// The hungry value.
        /// </summary>
        public TextMeshProUGUI HungryValue;

        /// <summary>
        /// The thirsty value.
        /// </summary>
        public TextMeshProUGUI ThirstyValue;

        /// <summary>
        /// The npc controller.
        /// </summary>
        private NPCController npcController;

        /// <summary>
        /// The wait for seconds.
        /// </summary>
        private WaitForSeconds waitForSeconds = new WaitForSeconds(5);

        /// <summary>
        /// The show intention coroutine.
        /// </summary>
        private Coroutine showIntentionCoroutine;

        /// <summary>
        /// The hide info board coroutine.
        /// </summary>
        private Coroutine hideInfoBoardCoroutine;

        /// <summary>
        /// The last intention string.
        /// </summary>
        private string lastIntention = string.Empty;

        /// <summary>
        /// The npc board is disable or not.
        /// </summary>
        private bool isDisable = false;

        /// <summary>
        /// Gets or sets the NPC gameObject.
        /// </summary>
        public GameObject NPC { get; set; }

        /// <summary>
        /// Gets the NPC controller.
        /// </summary>
        private NPCController NPCController
        {
            get
            {
                if (this.npcController == null)
                {
                    this.npcController = this.NPC.GetComponent<NPCController>();
                }

                return this.npcController;
            }
        }

        /// <summary>
        /// Resets npc intention.
        /// </summary>
        public void ResetIntention()
        {
            this.lastIntention = string.Empty;
        }

        /// <summary>
        /// Shows the NPC intention HUD.
        /// </summary>
        /// <param name="text">The intention text.</param>
        public void ShowIntentionHUD(string text)
        {
            if (this.isDisable)
            {
                return;
            }

            this.lastIntention = text;

            if (this.InfoPanel.activeSelf == true)
            {
                this.IntentionIconInInfoBoard.sprite = this.IntentionIconList.Find(i => i.name == this.lastIntention);
                return;
            }

            if (this.showIntentionCoroutine != null)
            {
                StopCoroutine(this.showIntentionCoroutine);
                this.showIntentionCoroutine = null;
            }

            this.showIntentionCoroutine = StartCoroutine(this.ShowIntentionForAWhile(text));
        }

        /// <summary>
        /// Shows NPC information HUD.
        /// </summary>
        public void ShowInfoHUD()
        {
            if (this.isDisable)
            {
                return;
            }

            if (this.IntentionPanel.activeSelf == true)
            {
                this.HideIntentionHUDImmediately();
            }

            if (this.InfoPanel.activeSelf == false)
            {
                this.InfoPanel.SetActive(true);
                this.IntentionIconInInfoBoard.sprite = this.IntentionIconList.Find(i => i.name == this.lastIntention);
            }

            if (this.hideInfoBoardCoroutine != null)
            {
                this.StopCoroutine(this.hideInfoBoardCoroutine);
                this.hideInfoBoardCoroutine = null;
            }
        }

        /// <summary>
        /// Hides NPC information HUD.
        /// </summary>
        public void HideInfoHUD()
        {
            if (this.hideInfoBoardCoroutine != null)
            {
                this.StopCoroutine(this.hideInfoBoardCoroutine);
                this.hideInfoBoardCoroutine = null;
            }

            this.hideInfoBoardCoroutine = StartCoroutine(this.HideInfoHUDAfterAWhile());
        }

        /// <summary>
        /// Hides all huds immediately.
        /// </summary>
        public void HideAllHUDsImmediately()
        {
            this.HideInfoHUDImmediately();
            this.HideIntentionHUDImmediately();
        }

        /// <summary>
        /// Disables all HUDs.
        /// </summary>
        public void DisableAllHUDs()
        {
            this.isDisable = true;
            this.HideAllHUDsImmediately();
        }

        /// <summary>
        /// Enables all HUDs.
        /// </summary>
        public void EnableAllHUDs()
        {
            this.isDisable = false;
        }

        /// <summary>
        /// Hides the intention hud immediately.
        /// </summary>
        public void HideIntentionHUDImmediately()
        {
            if (this.showIntentionCoroutine != null)
            {
                StopCoroutine(this.showIntentionCoroutine);
                this.showIntentionCoroutine = null;
            }

            this.IntentionPanel.SetActive(false);
        }

        /// <summary>
        /// Hides the info hud immediately.
        /// </summary>
        public void HideInfoHUDImmediately()
        {
            if (this.hideInfoBoardCoroutine != null)
            {
                this.StopCoroutine(this.hideInfoBoardCoroutine);
                this.hideInfoBoardCoroutine = null;
            }

            this.InfoPanel.SetActive(false);
        }

        /// <summary>
        /// Hides the information HUD after a while.
        /// </summary>
        /// <returns>A coroutine.</returns>
        private IEnumerator HideInfoHUDAfterAWhile()
        {
            yield return this.waitForSeconds;

            this.InfoPanel.SetActive(false);

            if (this.hideInfoBoardCoroutine != null)
            {
                this.StopCoroutine(this.hideInfoBoardCoroutine);
                this.hideInfoBoardCoroutine = null;
            }
        }

        /// <summary>
        /// Shows the intention for a while.
        /// </summary>
        /// <param name="text">The intention text.</param>
        /// <returns>A coroutine.</returns>
        private IEnumerator ShowIntentionForAWhile(string text)
        {
            if (this.IntentionPanel.activeSelf == false)
            {
                this.IntentionPanel.SetActive(true);
            }

            this.IntentionIcon.sprite = this.IntentionIconList.Find(i => i.name == text);
            
            yield return this.waitForSeconds;
            
            this.IntentionPanel.SetActive(false);

            if(this.showIntentionCoroutine != null)
            {
                StopCoroutine(this.showIntentionCoroutine);
                this.showIntentionCoroutine = null;
            }
        }

        /// <summary>
        /// Updates the info hud.
        /// </summary>
        private void UpdateInfoHUD()
        {
            // Updates board position.
            // this.transform.position = this.NPC.transform.position + 1.5f * Vector3.up;
            // this.transform.rotation = CameraController.inst.Cam.transform.rotation;
            var screenCenter = CameraController.inst.Cam.WorldToScreenPoint(this.NPC.transform.position + 1.5f * Vector3.up);
            this.transform.position = new Vector3(screenCenter.x, screenCenter.y, 0);

            // Updates information.
            if (this.InfoPanel.activeSelf == true)
            {
                this.SanityValue.text = $"{this.NPCController.Sanity}/100";
                this.HungryValue.text = $"{this.NPCController.Hungry}/100";
                this.ThirstyValue.text = $"{this.NPCController.Thirsty}/100";

                this.SanityBar.value = this.NPCController.Sanity;
                this.HungryBar.value = this.NPCController.Hungry;
                this.ThirstyBar.value = this.NPCController.Thirsty;
            }
        }

        /// <summary>
        /// Executes every frame.
        /// </summary>
        private void Update()
        {
            this.UpdateInfoHUD();
        }
    }
}