namespace RoomBuildingStarterKit.Components
{
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.Common;
    using System;
    using System.Collections.Generic;
    using TMPro;
    using UnityEngine;

    /// <summary>
    /// The CurrencyController is used to control the game currency.
    /// </summary>
    public class CurrencyController : Singleton<CurrencyController>
    {
        public double DefaultFunds = 100000;

        public GameObject JumpMoneyPrefab;

        public TextMeshProUGUI CurrentFunds;

        public TextMeshProUGUI FundsIncrement;

        private double funds;

        private double increment;

        private Queue<double> jumpInfoQueue = new Queue<double>(); 

        public double Funds 
        { 
            get => this.funds;

            private set
            {
                this.funds = (value < 0 ? 0 : value);
                this.UpdateFunds();
            }
        }

        public double Increment
        {
            get => this.increment;

            set
            {
                this.increment = value;
                this.UpdateIncrement();
            }
        }

        /// <summary>
        /// Jumps the money change info.
        /// </summary>
        /// <param name="count">The money change count.</param>
        public void JumpInfo(double count)
        {
            if (count == 0)
            {
                return;
            }

            this.jumpInfoQueue.Enqueue(count);
        }

        /// <summary>
        /// Add money.
        /// </summary>
        /// <param name="count">The money count.</param>
        /// <param name="jumpInfo">Jump money info or not.</param>
        public bool Add(double count, bool jumpInfo = true)
        {
            if (this.CanAfford(count) == false)
            {
                return false;
            }

            if (jumpInfo)
            {
                this.JumpInfo(count);
            }

            this.Funds += count;

            return true;
        }

        public bool CanAfford(double count)
        {
            return this.funds + count >= 0;
        }

        public bool CanAfford()
        {
            return this.funds + this.increment >= 0;
        }

        public bool Pay()
        {
            if (this.CanAfford(this.Increment) == false)
            {
                return false;
            }

            this.JumpInfo(this.Increment);

            this.Funds += this.Increment;
            this.Increment = 0;

            return true;
        }

        /// <summary>
        /// Saves this funds.
        /// </summary>
        /// <param name="fileName">The file name.</param>
        public void Save(string fileName)
        {
            SaveLoader.inst.GameFunds = this.Funds;
        }

        private string FundsSimplify(double funds)
        {
            if (funds >= 1e12)
            {
                return $"{ Math.Round(funds / 1e12, 1)}T";
            }
            else if (funds >= 1e9)
            {
                return $"{ Math.Round(funds / 1e9, 1)}G";
            }
            else if (funds >= 1e6)
            {
                return $"{ Math.Round(funds / 1e6, 1)}M";
            }
            else if (funds >= 1e3)
            {
                return $"{ Math.Round(funds / 1e3, 1)}K";
            }
            else
            {
                return $"{funds}";
            }
        }

        private void UpdateFunds()
        {
            this.CurrentFunds.text = this.FundsSimplify(this.funds);
        }

        private void UpdateIncrement()
        {
            if (this.increment == 0)
            {
                this.FundsIncrement.text = string.Empty;
            }
            else
            {
                this.FundsIncrement.text = (this.increment > 0 ? "+" : string.Empty) + this.FundsSimplify(this.increment);
            }

            this.FundsIncrement.color = (this.increment < 0 ? Color.red : Color.green);
        }

        /// <summary>
        /// Executes when enable gameObject.
        /// </summary>
        private void OnEnable()
        {
            EventManager.RegisterEvent(EventManager.Event.Save, this, nameof(Save));
        }

        /// <summary>
        /// Executes when disable gameObject.
        /// </summary>
        private void OnDisable()
        {
            EventManager.UnRegisterEvent(EventManager.Event.Save, this, nameof(Save));
        }

        private void Start()
        {
            if (SaveLoader.inst.GameFunds != -1)
            {
                this.Funds = SaveLoader.inst.GameFunds;
            }
            else
            {
                this.Funds = this.DefaultFunds;
            }

            Invoke(nameof(this.JumpQueueInfo), 0.6f);
        }

        private void JumpQueueInfo()
        {
            if (this.jumpInfoQueue.Count > 0)
            {
                var count = this.jumpInfoQueue.Dequeue();

                var jump = GameObjectRecycler.inst.Instantiate(this.JumpMoneyPrefab, this.CurrentFunds.transform.parent);
                jump.GetComponent<TextMeshProUGUI>().text = (count > 0 ? "+" : string.Empty) + count;
                jump.GetComponent<Animator>().SetTrigger("ShowUp");

                jump.GetComponent<TextMeshProUGUI>().color = (count > 0 ? Color.green : Color.red);
            }

            Invoke(nameof(this.JumpQueueInfo), 0.6f);
        }
    }
}