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
  /* 0x0018 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0020 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x0028 */ unsigned long ActiveProcessLimit;
  /* 0x0030 */ unsigned __int64 Affinity;
  /* 0x0038 */ unsigned long PriorityClass;
  /* 0x003c */ unsigned long SchedulingClass;
} JOBOBJECT_BASIC_LIMIT_INFORMATION, *PJOBOBJECT_BASIC_LIMIT_INFORMATION; /* size: 0x0040 */

