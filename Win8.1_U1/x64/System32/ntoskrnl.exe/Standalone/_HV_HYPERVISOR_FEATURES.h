typedef union _HV_PARTITION_PRIVILEGE_MASK
{
  union
  {
    /* 0x0000 */ unsigned __int64 AsUINT64;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 AccessVpRunTimeMsr : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 AccessPartitionReferenceCounter : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 AccessSynicMsrs : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 AccessSyntheticTimerMsrs : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 AccessApicMsrs : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 AccessHypercallMsrs : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 AccessVpIndex : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 AccessResetMsr : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 AccessStatsMsr : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 AccessPartitionReferenceTsc : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 AccessGuestIdleMsr : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 AccessFrequencyMsrs : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 AccessDebugMsrs : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 Reserved1 : 19; /* bit position: 13 */
      /* 0x0000 */ unsigned __int64 CreatePartitions : 1; /* bit position: 32 */
      /* 0x0000 */ unsigned __int64 AccessPartitionId : 1; /* bit position: 33 */
      /* 0x0000 */ unsigned __int64 AccessMemoryPool : 1; /* bit position: 34 */
      /* 0x0000 */ unsigned __int64 AdjustMessageBuffers : 1; /* bit position: 35 */
      /* 0x0000 */ unsigned __int64 PostMessages : 1; /* bit position: 36 */
      /* 0x0000 */ unsigned __int64 SignalEvents : 1; /* bit position: 37 */
      /* 0x0000 */ unsigned __int64 CreatePort : 1; /* bit position: 38 */
      /* 0x0000 */ unsigned __int64 ConnectPort : 1; /* bit position: 39 */
      /* 0x0000 */ unsigned __int64 AccessStats : 1; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 Reserved2 : 2; /* bit position: 41 */
      /* 0x0000 */ unsigned __int64 Debugging : 1; /* bit position: 43 */
      /* 0x0000 */ unsigned __int64 CpuManagement : 1; /* bit position: 44 */
      /* 0x0000 */ unsigned __int64 ConfigureProfiler : 1; /* bit position: 45 */
      /* 0x0000 */ unsigned __int64 EnableExpandedStackwalking : 1; /* bit position: 46 */
      /* 0x0000 */ unsigned __int64 Reserved3 : 17; /* bit position: 47 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} HV_PARTITION_PRIVILEGE_MASK, *PHV_PARTITION_PRIVILEGE_MASK; /* size: 0x0008 */

typedef struct _HV_HYPERVISOR_FEATURES
{
  /* 0x0000 */ union _HV_PARTITION_PRIVILEGE_MASK PartitionPrivileges;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned int MaxSupportedCState : 4; /* bit position: 0 */
    /* 0x0008 */ unsigned int HpetNeededForC3PowerState : 1; /* bit position: 4 */
    /* 0x0008 */ unsigned int Reserved : 27; /* bit position: 5 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x000c */ unsigned int MwaitAvailable : 1; /* bit position: 0 */
    /* 0x000c */ unsigned int GuestDebuggingAvailable : 1; /* bit position: 1 */
    /* 0x000c */ unsigned int PerformanceMonitorsAvailable : 1; /* bit position: 2 */
    /* 0x000c */ unsigned int CpuDynamicPartitioningAvailable : 1; /* bit position: 3 */
    /* 0x000c */ unsigned int XmmRegistersForFastHypercallAvailable : 1; /* bit position: 4 */
    /* 0x000c */ unsigned int GuestIdleAvailable : 1; /* bit position: 5 */
    /* 0x000c */ unsigned int HypervisorSleepStateSupportAvailable : 1; /* bit position: 6 */
    /* 0x000c */ unsigned int NumaDistanceQueryAvailable : 1; /* bit position: 7 */
    /* 0x000c */ unsigned int FrequencyMsrsAvailable : 1; /* bit position: 8 */
    /* 0x000c */ unsigned int SyntheticMachineCheckAvailable : 1; /* bit position: 9 */
    /* 0x000c */ unsigned int GuestCrashMsrsAvailable : 1; /* bit position: 10 */
    /* 0x000c */ unsigned int DebugMsrsAvailable : 1; /* bit position: 11 */
    /* 0x000c */ unsigned int Npiep1Available : 1; /* bit position: 12 */
    /* 0x000c */ unsigned int DisableHypervisorAvailable : 1; /* bit position: 13 */
    /* 0x000c */ unsigned int Reserved1 : 18; /* bit position: 14 */
  }; /* bitfield */
} HV_HYPERVISOR_FEATURES, *PHV_HYPERVISOR_FEATURES; /* size: 0x0010 */

