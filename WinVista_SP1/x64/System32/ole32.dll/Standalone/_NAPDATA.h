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

typedef struct _NAPDATA
{
  /* 0x0000 */ unsigned long NapLock;
  /* 0x0004 */ unsigned long Calls;
  /* 0x0008 */ unsigned long TimingErrors;
  /* 0x0010 */ union _LARGE_INTEGER TotalTime;
  /* 0x0018 */ union _LARGE_INTEGER FirstTime;
  /* 0x0020 */ union _LARGE_INTEGER MaxTime;
  /* 0x0028 */ union _LARGE_INTEGER MinTime;
} NAPDATA, *PNAPDATA; /* size: 0x0030 */

