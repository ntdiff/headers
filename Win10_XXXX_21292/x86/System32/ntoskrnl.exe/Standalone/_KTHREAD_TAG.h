typedef enum _KTHREAD_TAG
{
  KThreadTagNone = 0,
  KThreadTagMediaBuffering = 1,
  KThreadTagDeadline = 2,
  KThreadTagMediaOther = 3,
  KThreadTagMax = 4,
} KTHREAD_TAG, *PKTHREAD_TAG;

