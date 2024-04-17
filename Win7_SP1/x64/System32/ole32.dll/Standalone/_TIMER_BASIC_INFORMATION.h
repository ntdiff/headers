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

typedef struct _TIMER_BASIC_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER RemainingTime;
  /* 0x0008 */ unsigned char TimerState;
  /* 0x0009 */ char __PADDING__[7];
} TIMER_BASIC_INFORMATION, *PTIMER_BASIC_INFORMATION; /* size: 0x0010 */

