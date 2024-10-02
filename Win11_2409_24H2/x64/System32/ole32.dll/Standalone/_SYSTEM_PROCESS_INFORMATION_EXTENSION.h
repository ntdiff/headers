typedef struct _PROCESS_DISK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 BytesRead;
  /* 0x0008 */ unsigned __int64 BytesWritten;
  /* 0x0010 */ unsigned __int64 ReadOperationCount;
  /* 0x0018 */ unsigned __int64 WriteOperationCount;
  /* 0x0020 */ unsigned __int64 FlushOperationCount;
} PROCESS_DISK_COUNTERS, *PPROCESS_DISK_COUNTERS; /* size: 0x0028 */

typedef union _ENERGY_STATE_DURATION
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      /* 0x0000 */ unsigned long LastChangeTime;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long Duration : 31; /* bit position: 0 */
        /* 0x0004 */ unsigned long IsInState : 1; /* bit position: 31 */
      }; /* bitfield */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} ENERGY_STATE_DURATION, *PENERGY_STATE_DURATION; /* size: 0x0008 */

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
    /* 0x0068 */ union _ENERGY_STATE_DURATION Durations[3];
    struct
    {
      /* 0x0068 */ union _ENERGY_STATE_DURATION ForegroundDuration;
      /* 0x0070 */ union _ENERGY_STATE_DURATION DesktopVisibleDuration;
      /* 0x0078 */ union _ENERGY_STATE_DURATION PSMForegroundDuration;
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0080 */ unsigned long CompositionRendered;
  /* 0x0084 */ unsigned long CompositionDirtyGenerated;
  /* 0x0088 */ unsigned long CompositionDirtyPropagated;
  /* 0x008c */ unsigned long Reserved1;
  /* 0x0090 */ unsigned __int64 AttributedCycles[2][4];
  /* 0x00d0 */ unsigned __int64 WorkOnBehalfCycles[2][4];
} PROCESS_ENERGY_VALUES, *PPROCESS_ENERGY_VALUES; /* size: 0x0110 */

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
      /* 0x0030 */ unsigned long Classification : 4; /* bit position: 1 */
      /* 0x0030 */ unsigned long BackgroundActivityModerated : 1; /* bit position: 5 */
      /* 0x0030 */ unsigned long Spare : 26; /* bit position: 6 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long UserSidOffset;
  /* 0x0038 */ unsigned long PackageFullNameOffset;
  /* 0x0040 */ struct _PROCESS_ENERGY_VALUES EnergyValues;
  /* 0x0150 */ unsigned long AppIdOffset;
  /* 0x0158 */ unsigned __int64 SharedCommitCharge;
  /* 0x0160 */ unsigned long JobObjectId;
  /* 0x0164 */ unsigned long SpareUlong;
  /* 0x0168 */ unsigned __int64 ProcessSequenceNumber;
} SYSTEM_PROCESS_INFORMATION_EXTENSION, *PSYSTEM_PROCESS_INFORMATION_EXTENSION; /* size: 0x0170 */

