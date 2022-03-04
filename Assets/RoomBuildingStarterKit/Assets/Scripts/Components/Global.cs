namespace RoomBuildingStarterKit.BuildSystem
{
    using RoomBuildingStarterKit.Common;

    /// <summary>
    /// The runtime mode enum.
    /// </summary>
    public enum RuntimeMode
    {
        Game,
        OfficeEditor,
    }

    /// <summary>
    /// The scene type enum.
    /// </summary>
    public enum SceneType
    {
        BuildSystemOnly,
        GamePlay,
    }

    /// <summary>
    /// The Global class.
    /// </summary>
    public class Global : SingletonGameObject<Global>
    {
        /// <summary>
        /// The build system settings.
        /// </summary>
        public BuildSystemSettings BuildSystemSettings;

        /// <summary>
        /// The game run time mode.
        /// </summary>
        public RuntimeMode RuntimeMode = RuntimeMode.Game;

        /// <summary>
        /// The scene type.
        /// </summary>
        public SceneType SceneType;

        /// <summary>
        /// Gets or sets the load file name.
        /// </summary>
        public string LoadFileName { get; set; } = string.Empty;

        /// <summary>
        /// Executes when the gameObject instantiates.
        /// </summary>
        protected override void AwakeInternal()
        {
            DontDestroyOnLoad(this.gameObject);
        }
    }
}