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

typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER TotalUserTime;
  /* 0x0008 */ union _LARGE_INTEGER TotalKernelTime;
  /* 0x0010 */ union _LARGE_INTEGER ThisPeriodTotalUserTime;
  /* 0x0018 */ union _LARGE_INTEGER ThisPeriodTotalKernelTime;
  /* 0x0020 */ unsigned long TotalPageFaultCount;
  /* 0x0024 */ unsigned long TotalProcesses;
  /* 0x0028 */ unsigned long ActiveProcesses;
  /* 0x002c */ unsigned long TotalTerminatedProcesses;
} JOBOBJECT_BASIC_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION; /* size: 0x0030 */

