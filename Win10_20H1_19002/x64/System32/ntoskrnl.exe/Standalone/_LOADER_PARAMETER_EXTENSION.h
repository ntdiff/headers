typedef struct _PROFILE_PARAMETER_BLOCK
{
  /* 0x0000 */ unsigned short Status;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned short DockingState;
  /* 0x0006 */ unsigned short Capabilities;
  /* 0x0008 */ unsigned long DockID;
  /* 0x000c */ unsigned long SerialNumber;
} PROFILE_PARAMETER_BLOCK, *PPROFILE_PARAMETER_BLOCK; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _LOADER_PERFORMANCE_DATA
{
  /* 0x0000 */ unsigned __int64 StartTime;
  /* 0x0008 */ unsigned __int64 EndTime;
  /* 0x0010 */ unsigned __int64 PreloadEndTime;
  /* 0x0018 */ unsigned __int64 TcbLoaderStartTime;
  /* 0x0020 */ unsigned __int64 LoadHypervisorTime;
  /* 0x0028 */ unsigned __int64 LaunchHypervisorTime;
  /* 0x0030 */ unsigned __int64 LoadVsmTime;
  /* 0x0038 */ unsigned __int64 LaunchVsmTime;
  /* 0x0040 */ unsigned __int64 ExecuteTransitionStartTime;
  /* 0x0048 */ unsigned __int64 ExecuteTransitionEndTime;
  /* 0x0050 */ unsigned __int64 LoadDriversTime;
  /* 0x0058 */ unsigned __int64 CleanupVsmTime;
} LOADER_PERFORMANCE_DATA, *PLOADER_PERFORMANCE_DATA; /* size: 0x0060 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum _BOOT_ENTROPY_SOURCE_ID
{
  BootEntropySourceNone = 0,
  BootEntropySourceSeedfile = 1,
  BootEntropySourceExternal = 2,
  BootEntropySourceTpm = 3,
  BootEntropySourceRdrand = 4,
  BootEntropySourceTime = 5,
  BootEntropySourceAcpiOem0 = 6,
  BootEntropySourceUefi = 7,
  BootEntropySourceCng = 8,
  BootEntropySourceTcbTpm = 9,
  BootEntropySourceTcbRdrand = 10,
  BootMaxEntropySources = 10,
} BOOT_ENTROPY_SOURCE_ID, *PBOOT_ENTROPY_SOURCE_ID;

typedef enum _BOOT_ENTROPY_SOURCE_RESULT_CODE
{
  BootEntropySourceStructureUninitialized = 0,
  BootEntropySourceDisabledByPolicy = 1,
  BootEntropySourceNotPresent = 2,
  BootEntropySourceError = 3,
  BootEntropySourceSuccess = 4,
} BOOT_ENTROPY_SOURCE_RESULT_CODE, *PBOOT_ENTROPY_SOURCE_RESULT_CODE;

typedef struct _BOOT_ENTROPY_SOURCE_LDR_RESULT
{
  /* 0x0000 */ enum _BOOT_ENTROPY_SOURCE_ID SourceId;
  /* 0x0008 */ unsigned __int64 Policy;
  /* 0x0010 */ enum _BOOT_ENTROPY_SOURCE_RESULT_CODE ResultCode;
  /* 0x0014 */ long ResultStatus;
  /* 0x0018 */ unsigned __int64 Time;
  /* 0x0020 */ unsigned long EntropyLength;
  /* 0x0024 */ unsigned char EntropyData[64];
  /* 0x0064 */ long __PADDING__[1];
} BOOT_ENTROPY_SOURCE_LDR_RESULT, *PBOOT_ENTROPY_SOURCE_LDR_RESULT; /* size: 0x0068 */

typedef struct _BOOT_ENTROPY_LDR_RESULT
{
  /* 0x0000 */ unsigned long maxEntropySources;
  /* 0x0008 */ struct _BOOT_ENTROPY_SOURCE_LDR_RESULT EntropySourceResult[10];
  /* 0x0418 */ unsigned char SeedBytesForCng[48];
  /* 0x0448 */ unsigned char RngBytesForNtoskrnl[1024];
  /* 0x0848 */ unsigned char KdEntropy[32];
} BOOT_ENTROPY_LDR_RESULT, *PBOOT_ENTROPY_LDR_RESULT; /* size: 0x0868 */

typedef struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION
{
  /* 0x0000 */ unsigned long InitialHypervisorCrashdumpAreaPageCount;
  /* 0x0004 */ unsigned long HypervisorCrashdumpAreaPageCount;
  /* 0x0008 */ unsigned __int64 InitialHypervisorCrashdumpAreaSpa;
  /* 0x0010 */ unsigned __int64 HypervisorCrashdumpAreaSpa;
  /* 0x0018 */ unsigned __int64 HypervisorLaunchStatus;
  /* 0x0020 */ unsigned __int64 HypervisorLaunchStatusArg1;
  /* 0x0028 */ unsigned __int64 HypervisorLaunchStatusArg2;
  /* 0x0030 */ unsigned __int64 HypervisorLaunchStatusArg3;
  /* 0x0038 */ unsigned __int64 HypervisorLaunchStatusArg4;
} LOADER_PARAMETER_HYPERVISOR_EXTENSION, *PLOADER_PARAMETER_HYPERVISOR_EXTENSION; /* size: 0x0040 */

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

typedef struct _LOADER_BUGCHECK_PARAMETERS
{
  /* 0x0000 */ unsigned long BugcheckCode;
  /* 0x0008 */ unsigned __int64 BugcheckParameter1;
  /* 0x0010 */ unsigned __int64 BugcheckParameter2;
  /* 0x0018 */ unsigned __int64 BugcheckParameter3;
  /* 0x0020 */ unsigned __int64 BugcheckParameter4;
} LOADER_BUGCHECK_PARAMETERS, *PLOADER_BUGCHECK_PARAMETERS; /* size: 0x0028 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long AbnormalResetOccurred;
  /* 0x0008 */ unsigned long OfflineMemoryDumpCapable;
  /* 0x0010 */ union _LARGE_INTEGER ResetDataAddress;
  /* 0x0018 */ unsigned long ResetDataSize;
  /* 0x001c */ long __PADDING__[1];
} OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2, *POFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2; /* size: 0x0020 */

typedef struct _LOADER_HIVE_RECOVERY_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Recovered : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long LegacyRecovery : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long SoftRebootConflict : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long MostRecentLog : 3; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long Spare : 27; /* bit position: 0 */
  /* 0x0008 */ unsigned long LogNextSequence;
  /* 0x000c */ unsigned long LogMinimumSequence;
  /* 0x0010 */ unsigned long LogCurrentOffset;
} LOADER_HIVE_RECOVERY_INFO, *PLOADER_HIVE_RECOVERY_INFO; /* size: 0x0014 */

typedef struct _LOADER_RESET_REASON
{
  /* 0x0000 */ unsigned char Supplied;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ unsigned char Pch;
        /* 0x0009 */ unsigned char EmbeddedController;
        /* 0x000a */ unsigned char Reserved[6];
      } /* size: 0x0008 */ Component;
      /* 0x0008 */ unsigned __int64 AsULONG64;
      /* 0x0008 */ unsigned char AsBytes[8];
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Basic;
  /* 0x0010 */ unsigned long AdditionalInfo[8];
} LOADER_RESET_REASON, *PLOADER_RESET_REASON; /* size: 0x0030 */

typedef struct _VSM_PERFORMANCE_DATA
{
  /* 0x0000 */ unsigned __int64 LaunchVsmMark[8];
} VSM_PERFORMANCE_DATA, *PVSM_PERFORMANCE_DATA; /* size: 0x0040 */

typedef struct _LOADER_PARAMETER_EXTENSION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ struct _PROFILE_PARAMETER_BLOCK Profile;
  /* 0x0018 */ void* EmInfFileImage;
  /* 0x0020 */ unsigned long EmInfFileSize;
  /* 0x0028 */ void* TriageDumpBlock;
  /* 0x0030 */ struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;
  /* 0x0038 */ struct _SMBIOS3_TABLE_HEADER* SMBiosEPSHeader;
  /* 0x0040 */ void* DrvDBImage;
  /* 0x0048 */ unsigned long DrvDBSize;
  /* 0x0050 */ void* DrvDBPatchImage;
  /* 0x0058 */ unsigned long DrvDBPatchSize;
  /* 0x0060 */ struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;
  /* 0x0068 */ struct _LIST_ENTRY FirmwareDescriptorListHead;
  /* 0x0078 */ void* AcpiTable;
  /* 0x0080 */ unsigned long AcpiTableSize;
  struct /* bitfield */
  {
    /* 0x0084 */ unsigned long LastBootSucceeded : 1; /* bit position: 0 */
    /* 0x0084 */ unsigned long LastBootShutdown : 1; /* bit position: 1 */
    /* 0x0084 */ unsigned long IoPortAccessSupported : 1; /* bit position: 2 */
    /* 0x0084 */ unsigned long BootDebuggerActive : 1; /* bit position: 3 */
    /* 0x0084 */ unsigned long StrongCodeGuarantees : 1; /* bit position: 4 */
    /* 0x0084 */ unsigned long HardStrongCodeGuarantees : 1; /* bit position: 5 */
    /* 0x0084 */ unsigned long SidSharingDisabled : 1; /* bit position: 6 */
    /* 0x0084 */ unsigned long TpmInitialized : 1; /* bit position: 7 */
    /* 0x0084 */ unsigned long VsmConfigured : 1; /* bit position: 8 */
    /* 0x0084 */ unsigned long IumEnabled : 1; /* bit position: 9 */
    /* 0x0084 */ unsigned long IsSmbboot : 1; /* bit position: 10 */
    /* 0x0084 */ unsigned long BootLogEnabled : 1; /* bit position: 11 */
    /* 0x0084 */ unsigned long DriverVerifierEnabled : 1; /* bit position: 12 */
    /* 0x0084 */ unsigned long SuppressMonitorX : 1; /* bit position: 13 */
    /* 0x0084 */ unsigned long Unused : 7; /* bit position: 14 */
    /* 0x0084 */ unsigned long FeatureSimulations : 6; /* bit position: 21 */
    /* 0x0084 */ unsigned long MicrocodeSelfHosting : 1; /* bit position: 27 */
    /* 0x0084 */ unsigned long XhciLegacyHandoffSkip : 1; /* bit position: 28 */
    /* 0x0084 */ unsigned long DisableInsiderOptInHVCI : 1; /* bit position: 29 */
    /* 0x0084 */ unsigned long MicrocodeMinVerSupported : 1; /* bit position: 30 */
    /* 0x0084 */ unsigned long GpuIommuEnabled : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x0088 */ struct _LOADER_PERFORMANCE_DATA LoaderPerformanceData;
  /* 0x00e8 */ struct _LIST_ENTRY BootApplicationPersistentData;
  /* 0x00f8 */ void* WmdTestResult;
  /* 0x0100 */ struct _GUID BootIdentifier;
  /* 0x0110 */ unsigned long ResumePages;
  /* 0x0118 */ void* DumpHeader;
  /* 0x0120 */ void* BgContext;
  /* 0x0128 */ void* NumaLocalityInfo;
  /* 0x0130 */ void* NumaGroupAssignment;
  /* 0x0138 */ struct _LIST_ENTRY AttachedHives;
  /* 0x0148 */ unsigned long MemoryCachingRequirementsCount;
  /* 0x0150 */ void* MemoryCachingRequirements;
  /* 0x0158 */ struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;
  /* 0x09c0 */ unsigned __int64 ProcessorCounterFrequency;
  /* 0x09c8 */ struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;
  /* 0x0a08 */ struct _GUID HardwareConfigurationId;
  /* 0x0a18 */ struct _LIST_ENTRY HalExtensionModuleList;
  /* 0x0a28 */ union _LARGE_INTEGER SystemTime;
  /* 0x0a30 */ unsigned __int64 TimeStampAtSystemTimeRead;
  union
  {
    /* 0x0a38 */ unsigned __int64 BootFlags;
    struct /* bitfield */
    {
      /* 0x0a38 */ unsigned __int64 DbgMenuOsSelection : 1; /* bit position: 0 */
      /* 0x0a38 */ unsigned __int64 DbgHiberBoot : 1; /* bit position: 1 */
      /* 0x0a38 */ unsigned __int64 DbgSoftRestart : 1; /* bit position: 2 */
      /* 0x0a38 */ unsigned __int64 DbgMeasuredLaunch : 1; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0a40 */ unsigned __int64 InternalBootFlags;
    struct /* bitfield */
    {
      /* 0x0a40 */ unsigned __int64 DbgUtcBootTime : 1; /* bit position: 0 */
      /* 0x0a40 */ unsigned __int64 DbgRtcBootTime : 1; /* bit position: 1 */
      /* 0x0a40 */ unsigned __int64 DbgNoLegacyServices : 1; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0008 */
  /* 0x0a48 */ void* WfsFPData;
  /* 0x0a50 */ unsigned long WfsFPDataSize;
  /* 0x0a58 */ struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;
  /* 0x0a80 */ void* ApiSetSchema;
  /* 0x0a88 */ unsigned long ApiSetSchemaSize;
  /* 0x0a90 */ struct _LIST_ENTRY ApiSetSchemaExtensions;
  /* 0x0aa0 */ struct _UNICODE_STRING AcpiBiosVersion;
  /* 0x0ab0 */ struct _UNICODE_STRING SmbiosVersion;
  /* 0x0ac0 */ struct _UNICODE_STRING EfiVersion;
  /* 0x0ad0 */ struct _DEBUG_DEVICE_DESCRIPTOR* KdDebugDevice;
  /* 0x0ad8 */ struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable;
  /* 0x0af8 */ struct _UNICODE_STRING ManufacturingProfile;
  /* 0x0b08 */ void* BbtBuffer;
  /* 0x0b10 */ unsigned __int64 XsaveAllowedFeatures;
  /* 0x0b18 */ unsigned long XsaveFlags;
  /* 0x0b20 */ void* BootOptions;
  /* 0x0b28 */ unsigned long IumEnablement;
  /* 0x0b2c */ unsigned long IumPolicy;
  /* 0x0b30 */ long IumStatus;
  /* 0x0b34 */ unsigned long BootId;
  /* 0x0b38 */ struct _LOADER_PARAMETER_CI_EXTENSION* CodeIntegrityData;
  /* 0x0b40 */ unsigned long CodeIntegrityDataSize;
  /* 0x0b44 */ struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;
  /* 0x0b58 */ unsigned long SoftRestartCount;
  /* 0x0b60 */ __int64 SoftRestartTime;
  /* 0x0b68 */ void* HypercallCodeVa;
  /* 0x0b70 */ void* HalVirtualAddress;
  /* 0x0b78 */ unsigned __int64 HalNumberOfBytes;
  /* 0x0b80 */ struct _LEAP_SECOND_DATA* LeapSecondData;
  /* 0x0b88 */ unsigned long MajorRelease;
  /* 0x0b8c */ unsigned long Reserved1;
  /* 0x0b90 */ char NtBuildLab[224];
  /* 0x0c70 */ char NtBuildLabEx[224];
  /* 0x0d50 */ struct _LOADER_RESET_REASON ResetReason;
  /* 0x0d80 */ unsigned long MaxPciBusNumber;
  /* 0x0d84 */ unsigned long FeatureSettings;
  /* 0x0d88 */ unsigned long HotPatchReserveSize;
  /* 0x0d8c */ unsigned long RetpolineReserveSize;
  struct
  {
    /* 0x0d90 */ void* CodeBase;
    /* 0x0d98 */ unsigned __int64 CodeSize;
  } /* size: 0x0010 */ MiniExecutive;
  /* 0x0da0 */ struct _VSM_PERFORMANCE_DATA VsmPerformanceData;
  /* 0x0de0 */ struct _NUMA_MEMORY_RANGE* NumaMemoryRanges;
  /* 0x0de8 */ unsigned long NumaMemoryRangeCount;
  /* 0x0dec */ unsigned long IommuFaultPolicy;
} LOADER_PARAMETER_EXTENSION, *PLOADER_PARAMETER_EXTENSION; /* size: 0x0df0 */

