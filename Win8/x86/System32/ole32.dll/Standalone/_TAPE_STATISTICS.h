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

typedef struct _TAPE_STATISTICS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ union _LARGE_INTEGER RecoveredWrites;
  /* 0x0010 */ union _LARGE_INTEGER UnrecoveredWrites;
  /* 0x0018 */ union _LARGE_INTEGER RecoveredReads;
  /* 0x0020 */ union _LARGE_INTEGER UnrecoveredReads;
  /* 0x0028 */ unsigned char CompressionRatioReads;
  /* 0x0029 */ unsigned char CompressionRatioWrites;
  /* 0x002a */ char __PADDING__[6];
} TAPE_STATISTICS, *PTAPE_STATISTICS; /* size: 0x0030 */

