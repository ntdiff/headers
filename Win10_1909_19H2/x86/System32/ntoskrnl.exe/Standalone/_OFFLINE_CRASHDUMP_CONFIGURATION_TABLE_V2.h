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

typedef struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long AbnormalResetOccurred;
  /* 0x0008 */ unsigned long OfflineMemoryDumpCapable;
  /* 0x0010 */ union _LARGE_INTEGER ResetDataAddress;
  /* 0x0018 */ unsigned long ResetDataSize;
  /* 0x001c */ long __PADDING__[1];
} OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2, *POFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2; /* size: 0x0020 */

