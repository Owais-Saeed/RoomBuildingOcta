namespace RoomBuildingStarterKit.Components
{
    using Newtonsoft.Json;
    using RoomBuildingStarterKit.BuildSystem;
    using RoomBuildingStarterKit.Common;
    using TMPro;
    using UnityEngine;
    using UnityEngine.UI;

    /// <summary>
    /// The Game Time struct.
    /// </summary>
    [JsonObject(MemberSerialization.OptIn)]
    public class GameTime
    {
        /// <summary>
        /// The total minutes.
        /// </summary>
        [JsonProperty]
        public int TotalMinutes = 9 * 60;

        /// <summary>
        /// The year.
        /// </summary>
        [JsonProperty]
        public int Year = 2022;

        /// <summary>
        /// The month.
        /// </summary>
        [JsonProperty]
        public int Month = 0;

        /// <summary>
        /// The day.
        /// </summary>
        [JsonProperty]
        public int Day = 0;

        /// <summary>
        /// The hour.
        /// </summary>
        [JsonProperty]
        public int Hour;

        /// <summary>
        /// The minute.
        /// </summary>
        [JsonProperty]
        public int Minute;

        /// <summary>
        /// Increases game time by one minute.
        /// </summary>
        /// <param name="minute">The minute count.</param>
        public void Increase(int minute)
        {
            this.Minute += minute;
            this.Hour += this.Minute / 60;

            // Day.
            if (this.Hour / 24 > 0)
            {
                EventManager.TriggerEvent(EventManager.Event.TimeInterval_Day, this.Hour / 24);
            }

            this.Day += this.Hour / 24;

            var days = this.GetMonthDayCount(this.Year, this.Month + 1);
            this.Month += this.Day / days;
            
            this.Year += this.Month / 12;

            this.Month %= 12;
            this.Day %= days;
            this.Hour %= 24;
            this.Minute %= 60;
        }

        /// <summary>
        /// Checks whether a year is a leap year.
        /// </summary>
        /// <param name="year">The year.</param>
        /// <returns>Is leay year or not.</returns>
        private bool IsLeapYear(int year)
        {
            return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
        }

        /// <summary>
        /// Gives the year and month, gets the day count in this month.
        /// </summary>
        /// <param name="year">The year.</param>
        /// <param name="month">The month.</param>
        /// <returns>The day count in thie given month.</returns>
        private int GetMonthDayCount(int year, int month)
        {
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                return 31;
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                return 30;
            }
            else if (this.IsLeapYear(year))
            {
                return 29;
            }

            return 28;
        }
    }

    /// <summary>
    /// The TimeController class used to control time scale in game.
    /// </summary>
    public class TimeController : Singleton<TimeController>
    {
        [Range(1f, 3f)]
        [Tooltip("The exponent of time scale.")]
        public float TimeScaleExp = 1f;

        /// <summary>
        /// The time text.
        /// </summary>
        public TextMeshProUGUI TimeText;

        /// <summary>
        /// The play button.
        /// </summary>
        public Button PlayButton;

        /// <summary>
        /// The pause button.
        /// </summary>
        public Button PauseButton;

        /// <summary>
        /// The time scale.
        /// </summary>
        private int timeScale = 0;

        /// <summary>
        /// The last time scale.
        /// </summary>
        private int lastTimeScale = 0;

        /// <summary>
        /// The game time.
        /// </summary>
        private GameTime gameTime;

        /// <summary>
        /// The last time.
        /// </summary>
        private float lastTime = 0;

        /// <summary>
        /// Gets or sets the time scale.
        /// </summary>
        public int TimeScale => this.timeScale + 1;

        public void EnterBluePrintMode()
        {
            this.PlayButton.GetComponent<PlayButtonController>().UpdatePlayButtonImages(-1);
            this.PlayButton.interactable = false;
            this.PauseButton.interactable = false;
        }

        public void LeaveBluePrintMode()
        {
            this.PlayButton.interactable = true;
            this.PauseButton.interactable = true;
        }

        /// <summary>
        /// Executes when play button clicked.
        /// </summary>
        public void OnPlayButtonClick()
        {
            if (this.timeScale == -1)
            {
                this.timeScale = this.lastTimeScale;
                this.PlayButton.GetComponent<PlayButtonController>().UpdatePlayButtonImages(this.timeScale);
            }
            else
            {
                this.timeScale = (this.timeScale + 1) % 3;
                this.PlayButton.GetComponent<PlayButtonController>().UpdatePlayButtonImages(this.timeScale);
            }
        }

        /// <summary>
        /// Executes when pause button clicked.
        /// </summary>
        public void OnPauseButtonClick()
        {
            if (this.timeScale != -1)
            {
                this.lastTimeScale = this.timeScale;
                this.timeScale = -1;
            }
        }

        /// <summary>
        /// Updates game time.
        /// </summary>
        private void UpdateTime()
        {
            if (this.timeScale == -1)
            {
                return;
            }

            this.TimeText.text = $"{this.gameTime.Year}/{(this.gameTime.Month + 1) / 10}{(this.gameTime.Month + 1) % 10}/{(this.gameTime.Day + 1) / 10}{(this.gameTime.Day + 1) % 10}\n{this.gameTime.Hour / 10}{this.gameTime.Hour % 10}:{this.gameTime.Minute / 10}{this.gameTime.Minute % 10} " + (this.gameTime.Hour < 12 ? "AM" : "PM");

            if (Time.time - this.lastTime > 1f / Mathf.Pow(this.TimeScale, this.TimeScaleExp))
            {
                this.gameTime.Increase(1);
                this.lastTime = Time.time;
            }
        }

        private void Start()
        {
            if (SaveLoader.inst.GameTime != null)
            {
                this.gameTime = SaveLoader.inst.GameTime;
            }
            else
            {
                SaveLoader.inst.GameTime = this.gameTime = new GameTime { Hour = 9, Minute = 0 };
            }
        }

        /// <summary>
        /// Executes per frame.
        /// </summary>
        private void Update()
        {
            this.UpdateTime();
        }
    }
}
