typedef struct _PROCESS_DISK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 BytesRead;
  /* 0x0008 */ unsigned __int64 BytesWritten;
  /* 0x0010 */ unsigned __int64 ReadOperationCount;
  /* 0x0018 */ unsigned __int64 WriteOperationCount;
  /* 0x0020 */ unsigned __int64 FlushOperationCount;
} PROCESS_DISK_COUNTERS, *PPROCESS_DISK_COUNTERS; /* size: 0x0028 */

typedef struct _PROCESS_ENERGY_VALUES
{
  /* 0x0000 */ unsigned __int64 Cycles[2][4];
  /* 0x0040 */ unsigned __int64 DiskEnergy;
  /* 0x0048 */ unsigned __int64 NetworkTailEnergy;
  /* 0x0050 */ unsigned __int64 MBBTailEnergy;
  /* 0x0058 */ unsigned __int64 NetworkTxRxBytes;
  /* 0x0060 */ unsigned __int64 MBBTxRxBytes;
  union
  {
    /* 0x0068 */ unsigned long Foreground : 1; /* bit position: 0 */
    /* 0x0068 */ unsigned long WindowInformation;
  }; /* size: 0x0004 */
  /* 0x006c */ unsigned long PixelArea;
  /* 0x0070 */ __int64 PixelReportTimestamp;
  /* 0x0078 */ unsigned __int64 PixelTime;
  /* 0x0080 */ __int64 ForegroundReportTimestamp;
  /* 0x0088 */ unsigned __int64 ForegroundTime;
} PROCESS_ENERGY_VALUES, *PPROCESS_ENERGY_VALUES; /* size: 0x0090 */

typedef struct _SYSTEM_PROCESS_INFORMATION_EXTENSION
{
  /* 0x0000 */ struct _PROCESS_DISK_COUNTERS DiskCounters;
  /* 0x0028 */ unsigned __int64 ContextSwitches;
  union
  {
    /* 0x0030 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0030 */ unsigned long HasStrongId : 1; /* bit position: 0 */
      /* 0x0030 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long UserSidOffset;
  /* 0x0038 */ unsigned long PackageFullNameOffset;
  /* 0x0040 */ struct _PROCESS_ENERGY_VALUES EnergyValues;
  /* 0x00d0 */ unsigned long AppIdOffset;
  /* 0x00d4 */ unsigned long SharedCommitCharge;
} SYSTEM_PROCESS_INFORMATION_EXTENSION, *PSYSTEM_PROCESS_INFORMATION_EXTENSION; /* size: 0x00d8 */

