typedef enum _THREAD_INFORMATION_CLASS
{
  ThreadMemoryPriority = 0,
  ThreadAbsoluteCpuPriority = 1,
  ThreadDynamicCodePolicy = 2,
  ThreadPowerThrottling = 3,
  ThreadInformationClassMax = 4,
} THREAD_INFORMATION_CLASS, *PTHREAD_INFORMATION_CLASS;

