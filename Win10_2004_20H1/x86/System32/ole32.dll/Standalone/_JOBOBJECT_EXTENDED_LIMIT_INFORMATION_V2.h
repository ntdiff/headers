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

typedef struct _JOBOBJECT_BASIC_LIMIT_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER PerProcessUserTimeLimit;
  /* 0x0008 */ union _LARGE_INTEGER PerJobUserTimeLimit;
  /* 0x0010 */ unsigned long LimitFlags;
  /* 0x0014 */ unsigned long MinimumWorkingSetSize;
  /* 0x0018 */ unsigned long MaximumWorkingSetSize;
  /* 0x001c */ unsigned long ActiveProcessLimit;
  /* 0x0020 */ unsigned long Affinity;
  /* 0x0024 */ unsigned long PriorityClass;
  /* 0x0028 */ unsigned long SchedulingClass;
  /* 0x002c */ long __PADDING__[1];
} JOBOBJECT_BASIC_LIMIT_INFORMATION, *PJOBOBJECT_BASIC_LIMIT_INFORMATION; /* size: 0x0030 */

typedef struct _IO_COUNTERS
{
  /* 0x0000 */ unsigned __int64 ReadOperationCount;
  /* 0x0008 */ unsigned __int64 WriteOperationCount;
  /* 0x0010 */ unsigned __int64 OtherOperationCount;
  /* 0x0018 */ unsigned __int64 ReadTransferCount;
  /* 0x0020 */ unsigned __int64 WriteTransferCount;
  /* 0x0028 */ unsigned __int64 OtherTransferCount;
} IO_COUNTERS, *PIO_COUNTERS; /* size: 0x0030 */

typedef struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2
{
  /* 0x0000 */ struct _JOBOBJECT_BASIC_LIMIT_INFORMATION BasicLimitInformation;
  /* 0x0030 */ struct _IO_COUNTERS IoInfo;
  /* 0x0060 */ unsigned long ProcessMemoryLimit;
  /* 0x0064 */ unsigned long JobMemoryLimit;
  /* 0x0068 */ unsigned long PeakProcessMemoryUsed;
  /* 0x006c */ unsigned long PeakJobMemoryUsed;
  /* 0x0070 */ unsigned long JobTotalMemoryLimit;
  /* 0x0074 */ long __PADDING__[1];
} JOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2, *PJOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2; /* size: 0x0078 */

