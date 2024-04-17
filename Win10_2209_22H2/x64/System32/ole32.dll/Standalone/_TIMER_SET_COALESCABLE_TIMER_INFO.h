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

typedef struct _TIMER_SET_COALESCABLE_TIMER_INFO
{
  /* 0x0000 */ union _LARGE_INTEGER DueTime;
  /* 0x0008 */ void* TimerApcRoutine /* function */;
  /* 0x0010 */ void* TimerContext;
  /* 0x0018 */ struct _COUNTED_REASON_CONTEXT* WakeContext;
  /* 0x0020 */ unsigned long Period;
  /* 0x0024 */ unsigned long TolerableDelay;
  /* 0x0028 */ unsigned char* PreviousState;
} TIMER_SET_COALESCABLE_TIMER_INFO, *PTIMER_SET_COALESCABLE_TIMER_INFO; /* size: 0x0030 */

