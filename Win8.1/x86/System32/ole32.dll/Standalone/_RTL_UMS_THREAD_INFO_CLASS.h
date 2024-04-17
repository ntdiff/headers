typedef enum _RTL_UMS_THREAD_INFO_CLASS
{
  UmsThreadInvalidInfoClass = 0,
  UmsThreadUserContext = 1,
  UmsThreadPriority = 2,
  UmsThreadAffinity = 3,
  UmsThreadTeb = 4,
  UmsThreadIsSuspended = 5,
  UmsThreadIsTerminated = 6,
  UmsThreadMaxInfoClass = 7,
} RTL_UMS_THREAD_INFO_CLASS, *PRTL_UMS_THREAD_INFO_CLASS;

