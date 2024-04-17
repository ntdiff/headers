typedef enum _KTHREAD_PPM_POLICY
{
  ThreadPpmDefault = 0,
  ThreadPpmThrottle = 1,
  ThreadPpmSemiThrottle = 2,
  ThreadPpmNoThrottle = 3,
  ThreadPpmMaximumThrottle = 4,
  MaxThreadPpmPolicy = 5,
} KTHREAD_PPM_POLICY, *PKTHREAD_PPM_POLICY;

