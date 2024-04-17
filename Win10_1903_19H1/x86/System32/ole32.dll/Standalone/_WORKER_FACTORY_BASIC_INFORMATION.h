typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _WORKER_FACTORY_BASIC_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER Timeout;
  /* 0x0008 */ union _LARGE_INTEGER RetryTimeout;
  /* 0x0010 */ union _LARGE_INTEGER IdleTimeout;
  /* 0x0018 */ unsigned char Paused;
  /* 0x0019 */ unsigned char TimerSet;
  /* 0x001a */ unsigned char QueuedToExWorker;
  /* 0x001b */ unsigned char MayCreate;
  /* 0x001c */ unsigned char CreateInProgress;
  /* 0x001d */ unsigned char InsertedIntoQueue;
  /* 0x001e */ unsigned char Shutdown;
  /* 0x0020 */ unsigned long BindingCount;
  /* 0x0024 */ unsigned long ThreadMinimum;
  /* 0x0028 */ unsigned long ThreadMaximum;
  /* 0x002c */ unsigned long PendingWorkerCount;
  /* 0x0030 */ unsigned long WaitingWorkerCount;
  /* 0x0034 */ unsigned long TotalWorkerCount;
  /* 0x0038 */ unsigned long ReleaseCount;
  /* 0x0040 */ __int64 InfiniteWaitGoal;
  /* 0x0048 */ void* StartRoutine /* function */;
  /* 0x004c */ void* StartParameter;
  /* 0x0050 */ void* ProcessId;
  /* 0x0054 */ unsigned long StackReserve;
  /* 0x0058 */ unsigned long StackCommit;
  /* 0x005c */ long LastThreadCreationStatus;
} WORKER_FACTORY_BASIC_INFORMATION, *PWORKER_FACTORY_BASIC_INFORMATION; /* size: 0x0060 */

