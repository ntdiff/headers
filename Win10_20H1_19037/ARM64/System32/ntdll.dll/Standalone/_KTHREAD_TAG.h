typedef enum _KTHREAD_TAG
{
  KThreadTagNone = 0,
  KThreadTagMediaBuffering = 1,
  KThreadTagDeadline = 2,
  KThreadTagMax = 3,
} KTHREAD_TAG, *PKTHREAD_TAG;

