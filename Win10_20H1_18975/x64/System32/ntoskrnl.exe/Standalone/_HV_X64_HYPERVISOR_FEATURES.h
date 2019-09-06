typedef union _HV_PARTITION_PRIVILEGE_MASK
{
  union
  {
    /* 0x0000 */ unsigned __int64 AsUINT64;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 AccessVpRunTimeReg : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 AccessPartitionReferenceCounter : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 AccessSynicRegs : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 AccessSyntheticTimerRegs : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 AccessIntrCtrlRegs : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 AccessHypercallMsrs : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 AccessVpIndex : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 AccessResetReg : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 AccessStatsReg : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 AccessPartitionReferenceTsc : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 AccessGuestIdleReg : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 AccessFrequencyRegs : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 AccessDebugRegs : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 AccessReenlightenmentControls : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned __int64 AccessRootSchedulerReg : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned __int64 Reserved1 : 17; /* bit position: 15 */
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
      /* 0x0000 */ unsigned __int64 AccessVpExitTracing : 1; /* bit position: 46 */
      /* 0x0000 */ unsigned __int64 EnableExtendedGvaRangesForFlushVirtualAddressList : 1; /* bit position: 47 */
      /* 0x0000 */ unsigned __int64 AccessVsm : 1; /* bit position: 48 */
      /* 0x0000 */ unsigned __int64 AccessVpRegisters : 1; /* bit position: 49 */
      /* 0x0000 */ unsigned __int64 UnusedBit : 1; /* bit position: 50 */
      /* 0x0000 */ unsigned __int64 FastHypercallOutput : 1; /* bit position: 51 */
      /* 0x0000 */ unsigned __int64 EnableExtendedHypercalls : 1; /* bit position: 52 */
      /* 0x0000 */ unsigned __int64 StartVirtualProcessor : 1; /* bit position: 53 */
      /* 0x0000 */ unsigned __int64 Isolation : 1; /* bit position: 54 */
      /* 0x0000 */ unsigned __int64 Reserved3 : 9; /* bit position: 55 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} HV_PARTITION_PRIVILEGE_MASK, *PHV_PARTITION_PRIVILEGE_MASK; /* size: 0x0008 */

typedef struct _HV_X64_HYPERVISOR_FEATURES
{
  /* 0x0000 */ union _HV_PARTITION_PRIVILEGE_MASK PartitionPrivileges;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned int MaxSupportedCState : 4; /* bit position: 0 */
    /* 0x0008 */ unsigned int HpetNeededForC3PowerState_Deprecated : 1; /* bit position: 4 */
    /* 0x0008 */ unsigned int Reserved : 27; /* bit position: 5 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x000c */ unsigned int MwaitAvailable_Deprecated : 1; /* bit position: 0 */
    /* 0x000c */ unsigned int GuestDebuggingAvailable : 1; /* bit position: 1 */
    /* 0x000c */ unsigned int PerformanceMonitorsAvailable : 1; /* bit position: 2 */
    /* 0x000c */ unsigned int CpuDynamicPartitioningAvailable : 1; /* bit position: 3 */
    /* 0x000c */ unsigned int XmmRegistersForFastHypercallAvailable : 1; /* bit position: 4 */
    /* 0x000c */ unsigned int GuestIdleAvailable : 1; /* bit position: 5 */
    /* 0x000c */ unsigned int HypervisorSleepStateSupportAvailable : 1; /* bit position: 6 */
    /* 0x000c */ unsigned int NumaDistanceQueryAvailable : 1; /* bit position: 7 */
    /* 0x000c */ unsigned int FrequencyRegsAvailable : 1; /* bit position: 8 */
    /* 0x000c */ unsigned int SyntheticMachineCheckAvailable : 1; /* bit position: 9 */
    /* 0x000c */ unsigned int GuestCrashRegsAvailable : 1; /* bit position: 10 */
    /* 0x000c */ unsigned int DebugRegsAvailable : 1; /* bit position: 11 */
    /* 0x000c */ unsigned int Npiep1Available : 1; /* bit position: 12 */
    /* 0x000c */ unsigned int DisableHypervisorAvailable : 1; /* bit position: 13 */
    /* 0x000c */ unsigned int ExtendedGvaRangesForFlushVirtualAddressListAvailable : 1; /* bit position: 14 */
    /* 0x000c */ unsigned int FastHypercallOutputAvailable : 1; /* bit position: 15 */
    /* 0x000c */ unsigned int SvmFeaturesAvailable : 1; /* bit position: 16 */
    /* 0x000c */ unsigned int SintPollingModeAvailable : 1; /* bit position: 17 */
    /* 0x000c */ unsigned int HypercallMsrLockAvailable : 1; /* bit position: 18 */
    /* 0x000c */ unsigned int DirectSyntheticTimers : 1; /* bit position: 19 */
    /* 0x000c */ unsigned int RegisterPatAvailable : 1; /* bit position: 20 */
    /* 0x000c */ unsigned int RegisterBndcfgsAvailable : 1; /* bit position: 21 */
    /* 0x000c */ unsigned int WatchdogTimerAvailable : 1; /* bit position: 22 */
    /* 0x000c */ unsigned int SyntheticTimeUnhaltedTimerAvailable : 1; /* bit position: 23 */
    /* 0x000c */ unsigned int DeviceDomainsAvailable : 1; /* bit position: 24 */
    /* 0x000c */ unsigned int S1DeviceDomainsAvailable : 1; /* bit position: 25 */
    /* 0x000c */ unsigned int LbrAvailable : 1; /* bit position: 26 */
    /* 0x000c */ unsigned int IptAvailable : 1; /* bit position: 27 */
    /* 0x000c */ unsigned int CrossVtlFlushAvailable : 1; /* bit position: 28 */
    /* 0x000c */ unsigned int IdleSpecCtrlAvailable : 1; /* bit position: 29 */
    /* 0x000c */ unsigned int Reserved1 : 2; /* bit position: 30 */
  }; /* bitfield */
} HV_X64_HYPERVISOR_FEATURES, *PHV_X64_HYPERVISOR_FEATURES; /* size: 0x0010 */

