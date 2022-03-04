namespace RoomBuildingStarterKit.Common
{
    using Newtonsoft.Json;
    using RoomBuildingStarterKit.Configurations;
    using System;
    using System.Collections;
    using System.Collections.Generic;
    using System.IO;
    using TMPro;
    using UnityEngine;
    using UnityEngine.Networking;

    /// <summary>
    /// The language definitions.
    /// </summary>
    public enum Language
    {
        ENGLISH,
        CHINESE,
    }

    /// <summary>
    /// The LanguageManager class.
    /// </summary>
    public class LanguageManager : Singleton<LanguageManager>
    {
        /// <summary>
        /// The language setting.
        /// </summary>
        public LanguageSetting LanguageSetting;

        /// <summary>
        /// The fonts.
        /// </summary>
        public List<TMP_FontAsset> Fonts = new List<TMP_FontAsset>();

        /// <summary>
        /// The language settings change callback.
        /// </summary>
        public Action OnChangeLanguageHandler = () => { };

        /// <summary>
        /// The multi-language texts.
        /// </summary>
        private Dictionary<string, Dictionary<string, string>> multiLanguageTexts;

        /// <summary>
        /// Gets multi-language text with specified font.
        /// </summary>
        /// <param name="text">The ui text enum.</param>
        /// <param name="font">The font.</param>
        /// <returns>The text string.</returns>
        public string GetText(UIText text, out TMP_FontAsset font)
        {
            font = this.Fonts[this.LanguageSetting.Index];
            return this.GetText(text);
        }

        /// <summary>
        /// Gets multi-language text.
        /// </summary>
        /// <param name="text">The ui text enum.</param>
        /// <returns>The text string.</returns>
        public string GetText(UIText text)
        {
            return this.multiLanguageTexts[text.ToString()][this.LanguageSetting.Value.ToString()];
        }

        /// <summary>
        /// Executes when gameObject instantiates..
        /// </summary>
        protected override void AwakeInternal()
        {
#if UNITY_EDITOR
            var content = File.ReadAllText($"{Application.dataPath}\\RoomBuildingStarterKit\\Assets\\Config\\GameText.json");
            this.multiLanguageTexts = JsonConvert.DeserializeObject<Dictionary<string, Dictionary<string, string>>>(content);
#elif UNITY_WEBGL
            StartCoroutine(WebGameText());
#else
            var content = File.ReadAllText($"{Application.streamingAssetsPath}\\Data\\GameText.json");
            this.multiLanguageTexts = JsonConvert.DeserializeObject<Dictionary<string, Dictionary<string, string>>>(content);
#endif

            //this.multiLanguageTexts = JsonConvert.DeserializeObject<Dictionary<string, Dictionary<string, string>>>(content);
        }

        private IEnumerator WebGameText()
        {
            string path = Path.Combine(Application.streamingAssetsPath, "Data");
            path = Path.Combine(path, "GameText.json");
            if (path.Contains("://") || path.Contains(":///"))
            {
                UnityWebRequest webReq = UnityWebRequest.Get(path);
                yield return webReq.SendWebRequest();
                this.multiLanguageTexts = JsonConvert.DeserializeObject<Dictionary<string, Dictionary<string, string>>>(webReq.downloadHandler.text);
            }
            else
            {
                var content = File.ReadAllText(path);
                this.multiLanguageTexts = JsonConvert.DeserializeObject<Dictionary<string, Dictionary<string, string>>>(content);
                Debug.LogError("didnt get anything");
            }
        }
    }
}
