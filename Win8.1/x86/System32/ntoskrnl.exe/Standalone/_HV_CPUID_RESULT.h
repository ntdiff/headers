typedef struct _HV_VENDOR_AND_MAX_FUNCTION
{
  /* 0x0000 */ unsigned int MaxFunction;
  /* 0x0004 */ unsigned char VendorName[12];
} HV_VENDOR_AND_MAX_FUNCTION, *PHV_VENDOR_AND_MAX_FUNCTION; /* size: 0x0010 */

typedef struct _HV_HYPERVISOR_INTERFACE_INFO
{
  /* 0x0000 */ unsigned int Interface;
  /* 0x0004 */ unsigned int ReservedEbx;
  /* 0x0008 */ unsigned int ReservedEcx;
  /* 0x000c */ unsigned int ReservedEdx;
} HV_HYPERVISOR_INTERFACE_INFO, *PHV_HYPERVISOR_INTERFACE_INFO; /* size: 0x0010 */

typedef struct _HV_HYPERVISOR_VERSION_INFO
{
  /* 0x0000 */ unsigned int BuildNumber;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned int MinorVersion : 16; /* bit position: 0 */
    /* 0x0004 */ unsigned int MajorVersion : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x0008 */ unsigned int ServicePack;
  struct /* bitfield */
  {
    /* 0x000c */ unsigned int ServiceNumber : 24; /* bit position: 0 */
    /* 0x000c */ unsigned int ServiceBranch : 8; /* bit position: 24 */
  }; /* bitfield */
} HV_HYPERVISOR_VERSION_INFO, *PHV_HYPERVISOR_VERSION_INFO; /* size: 0x0010 */

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

typedef struct _HV_ENLIGHTENMENT_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int UseHypercallForAddressSpaceSwitch : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int UseHypercallForLocalFlush : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned int UseHypercallForRemoteFlush : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int UseApicMsrs : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int UseMsrForReset : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned int UseRelaxedTiming : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned int UseDmaRemapping : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned int UseInterruptRemapping : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned int UseX2ApicMsrs : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned int DeprecateAutoEoi : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned int Reserved : 22; /* bit position: 10 */
  }; /* bitfield */
  /* 0x0004 */ unsigned int LongSpinWaitCount;
  /* 0x0008 */ unsigned int ReservedEcx;
  /* 0x000c */ unsigned int ReservedEdx;
} HV_ENLIGHTENMENT_INFORMATION, *PHV_ENLIGHTENMENT_INFORMATION; /* size: 0x0010 */

typedef struct _HV_IMPLEMENTATION_LIMITS
{
  /* 0x0000 */ unsigned int MaxVirtualProcessorCount;
  /* 0x0004 */ unsigned int MaxLogicalProcessorCount;
  /* 0x0008 */ unsigned int MaxInterruptMappingCount;
  /* 0x000c */ unsigned int ReservedEdx;
} HV_IMPLEMENTATION_LIMITS, *PHV_IMPLEMENTATION_LIMITS; /* size: 0x0010 */

typedef struct _HV_HYPERVISOR_HARDWARE_FEATURES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int ApicOverlayAssistInUse : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int MsrBitmapsInUse : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned int ArchitecturalPerformanceCountersInUse : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int SecondLevelAddressTranslationInUse : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int DmaRemappingInUse : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned int InterruptRemappingInUse : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned int MemoryPatrolScrubberPresent : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned int Reserved : 25; /* bit position: 7 */
  }; /* bitfield */
  /* 0x0004 */ unsigned int ReservedEbx;
  /* 0x0008 */ unsigned int ReservedEcx;
  /* 0x000c */ unsigned int ReservedEdx;
} HV_HYPERVISOR_HARDWARE_FEATURES, *PHV_HYPERVISOR_HARDWARE_FEATURES; /* size: 0x0010 */

typedef union _HV_CPUID_RESULT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned int Eax;
      /* 0x0004 */ unsigned int Ebx;
      /* 0x0008 */ unsigned int Ecx;
      /* 0x000c */ unsigned int Edx;
    }; /* size: 0x0010 */
    /* 0x0000 */ unsigned int AsUINT32[4];
    struct // _TAG_UNNAMED_52
    {
      /* 0x0000 */ unsigned int ReservedEax;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned int ReservedEbx : 24; /* bit position: 0 */
        /* 0x0004 */ unsigned int InitialApicId : 8; /* bit position: 24 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned int ReservedEcx : 31; /* bit position: 0 */
        /* 0x0008 */ unsigned int HypervisorPresent : 1; /* bit position: 31 */
      }; /* bitfield */
      /* 0x000c */ unsigned int ReservedEdx;
    } /* size: 0x0010 */ VersionAndFeatures;
    /* 0x0000 */ struct _HV_VENDOR_AND_MAX_FUNCTION HvVendorAndMaxFunction;
    /* 0x0000 */ struct _HV_HYPERVISOR_INTERFACE_INFO HvInterface;
    /* 0x0000 */ struct _HV_HYPERVISOR_VERSION_INFO MsHvVersion;
    /* 0x0000 */ struct _HV_HYPERVISOR_FEATURES MsHvFeatures;
    /* 0x0000 */ struct _HV_ENLIGHTENMENT_INFORMATION MsHvEnlightenmentInformation;
    /* 0x0000 */ struct _HV_IMPLEMENTATION_LIMITS MsHvImplementationLimits;
    /* 0x0000 */ struct _HV_HYPERVISOR_HARDWARE_FEATURES MsHvHardwareFeatures;
  }; /* size: 0x0010 */
} HV_CPUID_RESULT, *PHV_CPUID_RESULT; /* size: 0x0010 */

