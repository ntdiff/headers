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

typedef struct _KTIMER_EXPIRATION_TRACE
{
  /* 0x0000 */ unsigned __int64 InterruptTime;
  /* 0x0008 */ union _LARGE_INTEGER PerformanceCounter;
} KTIMER_EXPIRATION_TRACE, *PKTIMER_EXPIRATION_TRACE; /* size: 0x0010 */

