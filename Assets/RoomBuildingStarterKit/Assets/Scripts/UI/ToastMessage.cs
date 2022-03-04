namespace RoomBuildingStarterKit.UI
{
    using RoomBuildingStarterKit.Common;
    using System.Collections.Generic;
    using UnityEngine;

    public class ToastMessage : Singleton<ToastMessage>
    {
        private Queue<UIText> messageQueue = new Queue<UIText>();

        private bool IsUsing = false;

        private TextMeshProUGUIWrapper text;

        private Animator animator;

        public void EnqueueMessage(UIText uiText)
        {
            this.messageQueue.Enqueue(uiText);
        }

        public void OnRelease()
        {
            this.IsUsing = false;
        }

        protected override void AwakeInternal()
        {
            this.text = this.GetComponent<TextMeshProUGUIWrapper>();
            this.animator = this.GetComponent<Animator>();
        }

        private void Start()
        {
            this.text.SetGlobalText(UIText.EMPTY_STRING);
        }

        private void Update()
        {
            if (this.IsUsing == false && this.messageQueue.Count > 0)
            {
                var uiText = this.messageQueue.Dequeue();
                this.text.SetGlobalText(uiText);
                this.animator.SetTrigger("Toast");
                this.IsUsing = true;
            }
        }
    }
}