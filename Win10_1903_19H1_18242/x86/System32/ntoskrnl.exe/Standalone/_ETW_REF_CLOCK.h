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

typedef struct _ETW_REF_CLOCK
{
  /* 0x0000 */ union _LARGE_INTEGER StartTime;
  /* 0x0008 */ union _LARGE_INTEGER StartPerfClock;
} ETW_REF_CLOCK, *PETW_REF_CLOCK; /* size: 0x0010 */

