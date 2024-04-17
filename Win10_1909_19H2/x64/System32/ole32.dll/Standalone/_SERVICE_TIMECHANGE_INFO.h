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

typedef struct _SERVICE_TIMECHANGE_INFO
{
  /* 0x0000 */ union _LARGE_INTEGER liNewTime;
  /* 0x0008 */ union _LARGE_INTEGER liOldTime;
} SERVICE_TIMECHANGE_INFO, *PSERVICE_TIMECHANGE_INFO; /* size: 0x0010 */

