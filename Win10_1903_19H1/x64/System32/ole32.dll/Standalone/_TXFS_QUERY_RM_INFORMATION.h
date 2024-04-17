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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TXFS_QUERY_RM_INFORMATION
{
  /* 0x0000 */ unsigned long BytesRequired;
  /* 0x0008 */ unsigned __int64 TailLsn;
  /* 0x0010 */ unsigned __int64 CurrentLsn;
  /* 0x0018 */ unsigned __int64 ArchiveTailLsn;
  /* 0x0020 */ unsigned __int64 LogContainerSize;
  /* 0x0028 */ union _LARGE_INTEGER HighestVirtualClock;
  /* 0x0030 */ unsigned long LogContainerCount;
  /* 0x0034 */ unsigned long LogContainerCountMax;
  /* 0x0038 */ unsigned long LogContainerCountMin;
  /* 0x003c */ unsigned long LogGrowthIncrement;
  /* 0x0040 */ unsigned long LogAutoShrinkPercentage;
  /* 0x0044 */ unsigned long Flags;
  /* 0x0048 */ unsigned short LoggingMode;
  /* 0x004a */ unsigned short Reserved;
  /* 0x004c */ unsigned long RmState;
  /* 0x0050 */ unsigned __int64 LogCapacity;
  /* 0x0058 */ unsigned __int64 LogFree;
  /* 0x0060 */ unsigned __int64 TopsSize;
  /* 0x0068 */ unsigned __int64 TopsUsed;
  /* 0x0070 */ unsigned __int64 TransactionCount;
  /* 0x0078 */ unsigned __int64 OnePCCount;
  /* 0x0080 */ unsigned __int64 TwoPCCount;
  /* 0x0088 */ unsigned __int64 NumberLogFileFull;
  /* 0x0090 */ unsigned __int64 OldestTransactionAge;
  /* 0x0098 */ struct _GUID RMName;
  /* 0x00a8 */ unsigned long TmLogPathOffset;
  /* 0x00ac */ long __PADDING__[1];
} TXFS_QUERY_RM_INFORMATION, *PTXFS_QUERY_RM_INFORMATION; /* size: 0x00b0 */

