namespace RoomBuildingStarterKit.UI
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.Common;
    using RoomBuildingStarterKit.Components;
    using UnityEngine;
    using UnityEngine.Assertions;

    /// <summary>
    /// The RoomListController is used to control the ui room list.
    /// </summary>
    public class RoomListController : ItemListControllerBase
    {
        /// <summary>
        /// The room shop list.
        /// </summary>
        public ShopListBase RoomShopList;

        /// <summary>
        /// Chooses a shop list to display.
        /// </summary>
        protected override void ChooseShopList()
        {
            this.shopListType = this.RoomShopList;
        }

        /// <summary>
        /// Registers buttons.
        /// </summary>
        protected override void RegisterButtons()
        {
            Assert.IsTrue(this.itemButtons.Count == this.shopListType.ShopList.Items.Count);

            foreach (var item in this.itemButtons)
            {
                var roomShopItem = item.GetComponent<RoomShopItem>();
                var roomType = roomShopItem.RoomType;

                this.DisplayPurchasePrice(roomShopItem, roomType);
                item.onClick.AddListener(() => this.OnButtonClicked((int)roomType));
            }
        }

        /// <summary>
        /// Clicks the build room button.
        /// </summary>
        /// <param name="i">The room type.</param>
        protected override void OnButtonClicked(int i)
        {
            if (i == (int)RoomType.OfficeFurniture)
            {
                InGameUI.inst.EnterBuildOfficeFurnitureMode();
                this.gameObject.SetActive(false);
            }
            else
            {
                GlobalRoomManager.inst.StartBuildRoom(i);
            }
        }

        /// <summary>
        /// Close the ui room list.
        /// </summary>
        protected override void OnCloseButtonClicked()
        {
            GlobalRoomManager.inst.CancelBuildRoom();
            this.gameObject.SetActive(false);
        }

        /// <summary>
        /// Display the purchase price for current furniture.
        /// </summary>
        /// <param name="furnitureShopItem">The furniture shop item.</param>
        /// <param name="furnitureType">The furniture type.</param>
        private void DisplayPurchasePrice(RoomShopItem roomShopItem, RoomType roomType)
        {
            if (roomType != RoomType.Office && roomType != RoomType.OfficeFurniture)
            {
                var realRoom = GlobalRoomManager.inst.RoomTypeToPrefabs[roomType].GetComponent<RealRoom>();
                var price = realRoom.PurchasePricePerGrid;
                roomShopItem.PriceText?.SetGlobalText(UIText.ROOM_PRICE, price.ToString());
            }
        }
    }
}