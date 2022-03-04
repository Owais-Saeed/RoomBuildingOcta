namespace RoomBuildingStarterKit.UI
{
    using RoomBuildingStarterKit.Common;
    using RoomBuildingStarterKit.NPC;
    using UnityEngine;
    using UnityEngine.Assertions;

    /// <summary>
    /// The EmployeeListController is used to control the ui employee list.
    /// </summary>
    public class EmployeeListController : ItemListControllerBase
    {
        /// <summary>
        /// The employee shop list.
        /// </summary>
        public ShopListBase EmployeeShopList;

        /// <summary>
        /// Chooses a shop list to display.
        /// </summary>
        protected override void ChooseShopList()
        {
            this.shopListType = this.EmployeeShopList;
        }

        /// <summary>
        /// Registers buttons.
        /// </summary>
        protected override void RegisterButtons()
        {
            Assert.IsTrue(this.itemButtons.Count == this.shopListType.ShopList.Items.Count);

            foreach(var item in this.itemButtons)
            {
                var employeeShopItem = item.GetComponent<EmployeeShopItem>();
                var employeeType = employeeShopItem.EmployeeType;
                this.DisplayPurchasePrice(employeeShopItem, employeeType);

                item.onClick.AddListener(() => this.OnButtonClicked((int)employeeType));
            }
        }

        /// <summary>
        /// Clicks the employ button.
        /// </summary>
        /// <param name="i">The employee type.</param>
        protected override void OnButtonClicked(int i)
        {
            GlobalNPCManager.inst?.CreateNewEmployee((EmployeeType)i);
        }

        /// <summary>
        /// Close the ui employee list.
        /// </summary>
        protected override void OnCloseButtonClicked()
        {
            this.gameObject.SetActive(false);
        }

        private void OnDisable()
        {
            GlobalNPCManager.inst?.CancelPuttingNPC();
            Cursor.visible = true;
        }

        private void DisplayPurchasePrice(EmployeeShopItem employeeShopItem, EmployeeType employeeType)
        {
            var price = GlobalNPCManager.inst.EmployeeTypeToPrefabs[employeeType].GetComponent<NPCController>().PurchasePrice;
            employeeShopItem.PriceText.SetGlobalText(UIText.EMPLOY_PRICE, price.ToString());
        }
    }
}