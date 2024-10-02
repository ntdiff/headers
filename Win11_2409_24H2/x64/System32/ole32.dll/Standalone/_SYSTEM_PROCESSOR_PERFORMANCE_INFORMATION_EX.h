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

typedef struct _SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX
{
  /* 0x0000 */ union _LARGE_INTEGER IdleTime;
  /* 0x0008 */ union _LARGE_INTEGER KernelTime;
  /* 0x0010 */ union _LARGE_INTEGER UserTime;
  /* 0x0018 */ union _LARGE_INTEGER DpcTime;
  /* 0x0020 */ union _LARGE_INTEGER InterruptTime;
  /* 0x0028 */ unsigned long InterruptCount;
  /* 0x002c */ unsigned long Spare0;
  /* 0x0030 */ union _LARGE_INTEGER AvailableTime;
  /* 0x0038 */ union _LARGE_INTEGER Spare1;
  /* 0x0040 */ union _LARGE_INTEGER Spare2;
} SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX, *PSYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX; /* size: 0x0048 */

