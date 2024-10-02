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

typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER TotalUserTime;
  /* 0x0008 */ union _LARGE_INTEGER TotalKernelTime;
  /* 0x0010 */ union _LARGE_INTEGER ThisPeriodTotalUserTime;
  /* 0x0018 */ union _LARGE_INTEGER ThisPeriodTotalKernelTime;
  /* 0x0020 */ unsigned long TotalPageFaultCount;
  /* 0x0024 */ unsigned long TotalProcesses;
  /* 0x0028 */ unsigned long ActiveProcesses;
  /* 0x002c */ unsigned long TotalTerminatedProcesses;
} JOBOBJECT_BASIC_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION; /* size: 0x0030 */

typedef struct _IO_COUNTERS
{
  /* 0x0000 */ unsigned __int64 ReadOperationCount;
  /* 0x0008 */ unsigned __int64 WriteOperationCount;
  /* 0x0010 */ unsigned __int64 OtherOperationCount;
  /* 0x0018 */ unsigned __int64 ReadTransferCount;
  /* 0x0020 */ unsigned __int64 WriteTransferCount;
  /* 0x0028 */ unsigned __int64 OtherTransferCount;
} IO_COUNTERS, *PIO_COUNTERS; /* size: 0x0030 */

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

typedef struct _PROCESS_NETWORK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 BytesIn;
  /* 0x0008 */ unsigned __int64 BytesOut;
} PROCESS_NETWORK_COUNTERS, *PPROCESS_NETWORK_COUNTERS; /* size: 0x0010 */

typedef struct _JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V3
{
  /* 0x0000 */ struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
  /* 0x0030 */ struct _IO_COUNTERS IoInfo;
  /* 0x0060 */ struct _PROCESS_DISK_COUNTERS DiskIoInfo;
  /* 0x0088 */ unsigned __int64 ContextSwitches;
  /* 0x0090 */ union _LARGE_INTEGER TotalCycleTime;
  /* 0x0098 */ unsigned __int64 ReadyTime;
  /* 0x00a0 */ struct _PROCESS_ENERGY_VALUES EnergyValues;
  /* 0x01b0 */ unsigned __int64 KernelWaitTime;
  /* 0x01b8 */ unsigned __int64 UserWaitTime;
  /* 0x01c0 */ struct _PROCESS_NETWORK_COUNTERS NetworkIoInfo;
} JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V3, *PJOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V3; /* size: 0x01d0 */

