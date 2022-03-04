namespace RoomBuildingStarterKit.UI
{
    using System.Collections;
    using UnityEngine;
    using UnityEngine.SceneManagement;

    /// <summary>
    /// The LoadingPage.
    /// </summary>
    public class LoadingPage : MonoBehaviour
    {
        /// <summary>
        /// The async operation.
        /// </summary>
        private AsyncOperation operation;

        /// <summary>
        /// The wait for seconds coroutine.
        /// </summary>
        private WaitForSeconds interval = new WaitForSeconds(1f);

        /// <summary>
        /// The load scene coroutine.
        /// </summary>
        private Coroutine loadSceneCoroutine;

        /// <summary>
        /// The pending enter scene coroutine.
        /// </summary>
        private Coroutine pendingEnterSceneCoroutine;

        /// <summary>
        /// Loads scene.
        /// </summary>
        /// <param name="sceneName">The scene name.</param>
        public void LoadScene(string sceneName)
        {
            this.gameObject.SetActive(true);
            this.loadSceneCoroutine = this.StartCoroutine(this.LoadSceneAsync(sceneName));
        }

        /// <summary>
        /// Loads scene async.
        /// </summary>
        /// <param name="sceneName">The scene name.</param>
        /// <returns>The coroutine.</returns>
        private IEnumerator LoadSceneAsync(string sceneName)
        {
            this.operation = SceneManager.LoadSceneAsync(sceneName);
            while (!this.operation.isDone)
            {
                yield return null;
            }

            this.pendingEnterSceneCoroutine = StartCoroutine(this.PendingEnterScene());
            if (this.loadSceneCoroutine != null)
            {
                this.StopCoroutine(this.loadSceneCoroutine);
                this.loadSceneCoroutine = null;
            }
        }

        /// <summary>
        /// Waits to enter scene.
        /// </summary>
        /// <returns>The coroutine.</returns>
        private IEnumerator PendingEnterScene()
        {
            yield return this.interval;
            this.gameObject.SetActive(false);
            if (this.pendingEnterSceneCoroutine != null)
            {
                this.StopCoroutine(this.pendingEnterSceneCoroutine);
                this.pendingEnterSceneCoroutine = null;
            }
        }
    }
}
