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

