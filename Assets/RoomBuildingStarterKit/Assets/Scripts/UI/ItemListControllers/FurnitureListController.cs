namespace RoomBuildingStarterKit.UI
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.Common;
    using RoomBuildingStarterKit.Components;
    using System;
    using System.Linq;
    using UnityEngine;
    using UnityEngine.Assertions;

    /// <summary>
    /// The furniture list controller.
    /// </summary>
    public class FurnitureListController : ItemListControllerBase
    {
        /// <summary>
        /// The shop list items.
        /// </summary>
        [ChooseShopList]
        [SerializeField]
        public ChooseShopList ShopListItems = new ChooseShopList();

        /// <summary>
        /// The room type.
        /// </summary>
        protected RoomType roomType = RoomType.WorkingRoom;

        /// <summary>
        /// Sets the room type.
        /// </summary>
        public void Refresh(int roomType)
        { 
            this.roomType = (RoomType)roomType;
            this.ChooseShopList();
            this.RefreshList();
        }

        /// <summary>
        /// Chooses the shop list.
        /// </summary>
        protected override void ChooseShopList()
        {
            this.shopListType = this.ShopListItems.Items.First(s => s.ShopList.RoomType == this.roomType).ShopList;
        }

        /// <summary>
        /// Registers buttons.
        /// </summary>
        protected override void RegisterButtons()
        {
            Assert.IsTrue(this.itemButtons.Count == this.shopListType.ShopList.Items.Count);

            foreach (var item in this.itemButtons)
            {
                var furnitureShopItem = item.GetComponent<FurnitureShopItem>();
                var furnitureType = furnitureShopItem.FurnitureType;
                this.DisplayPurchasePrice(furnitureShopItem, furnitureType);
                item.onClick.AddListener(() => this.OnButtonClicked((int)furnitureType));
            }
        }

        /// <summary>
        /// Executes when buy furniture button clicked.
        /// </summary>
        /// <param name="i">The furniture index.</param>
        protected override void OnButtonClicked(int i)
        {
            if (this.roomType == RoomType.OfficeFurniture)
            {
                GlobalFurnitureManager.inst.OnPutFurnitureButtonClicked(i);
            }
            else
            {
                UI.inst.BluePrintData.OnPutFurnitureButtonClicked(i);
            }
        }

        /// <summary>
        /// Executes when close button clicked.
        /// </summary>
        protected override void OnCloseButtonClicked()
        {
            if (this.roomType == RoomType.OfficeFurniture)
            {
                InGameUI.inst.OnBuildOfficeFurnitureCompleted();
                GlobalFurnitureManager.inst.IsBuildingOfficeFurniture = false;
                GlobalFurnitureManager.inst.CancelBuildOfficeFurniture();
            }
            else
            {
                InteractPopupWindow.inst.Show();
                InteractPopupWindow.inst.SetText(UIText.CONFIRM_TO_CANCEL_BLUEPRINT);
                InteractPopupWindow.inst.ConfirmCallback = () =>
                {
                    GlobalRoomManager.inst.CancelBluePrintMode();
                    InGameUI.inst.OnBuildRoomCompleted();
                };
            }
        }

        /// <summary>
        /// Display the purchase price for current furniture.
        /// </summary>
        /// <param name="furnitureShopItem">The furniture shop item.</param>
        /// <param name="furnitureType">The furniture type.</param>
        private void DisplayPurchasePrice(FurnitureShopItem furnitureShopItem, FurnitureType furnitureType)
        {
            var price = GlobalFurnitureManager.inst.FurnitureTypeToPrefabs[furnitureType].GetComponent<FurnitureController>().PurchasePrice;
            furnitureShopItem.PriceText?.SetGlobalText(UIText.FURNITURE_PRICE, price.ToString());
        }
    }
}