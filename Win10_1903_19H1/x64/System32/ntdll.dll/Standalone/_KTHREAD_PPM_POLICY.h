typedef enum _KTHREAD_PPM_POLICY
{
  ThreadPpmDefault = 0,
  ThreadPpmThrottle = 1,
  ThreadPpmSemiThrottle = 2,
  ThreadPpmNoThrottle = 3,
  MaxThreadPpmPolicy = 4,
} KTHREAD_PPM_POLICY, *PKTHREAD_PPM_POLICY;

