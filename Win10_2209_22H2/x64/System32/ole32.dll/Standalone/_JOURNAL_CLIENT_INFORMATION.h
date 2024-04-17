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

typedef struct _JOURNAL_CLIENT_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER StartTimeStamp;
  /* 0x0008 */ union _LARGE_INTEGER CurrentTimeStamp;
  /* 0x0010 */ unsigned __int64 RecordsToProcess;
  /* 0x0018 */ unsigned long RelativeFillLevel;
  /* 0x001c */ long __PADDING__[1];
} JOURNAL_CLIENT_INFORMATION, *PJOURNAL_CLIENT_INFORMATION; /* size: 0x0020 */

