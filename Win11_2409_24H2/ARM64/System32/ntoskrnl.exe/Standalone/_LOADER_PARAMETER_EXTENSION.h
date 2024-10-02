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
  union
  {
    struct
    {
      /* 0x0028 */ unsigned __int64 HypervisorLaunchStatusArg2;
      /* 0x0030 */ unsigned __int64 HypervisorLaunchStatusArg3;
      /* 0x0038 */ unsigned __int64 HypervisorLaunchStatusArg4;
    }; /* size: 0x0018 */
    struct
    {
      /* 0x0028 */ void* RangeArray;
      /* 0x0030 */ unsigned long RangeCount;
      /* 0x0034 */ long __PADDING__[3];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
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
    /* 0x0000 */ unsigned long LoadedFromSnapshot : 1; /* bit position: 6 */
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

typedef struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION
{
  /* 0x0000 */ unsigned char OriginalBootStatus;
  /* 0x0001 */ unsigned char NewBootStatus;
  /* 0x0002 */ unsigned char ConfigurationLoaded;
  /* 0x0003 */ unsigned char Spare;
  union
  {
    union
    {
      /* 0x0004 */ unsigned long AllFlags;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long LkgSupported : 1; /* bit position: 0 */
        /* 0x0004 */ unsigned long FinalBootBeforeRecovery : 1; /* bit position: 1 */
        /* 0x0004 */ unsigned long ConfigurationComparisonAttempted : 1; /* bit position: 2 */
        /* 0x0004 */ unsigned long CurrentConfigurationLoadAttempted : 1; /* bit position: 3 */
        /* 0x0004 */ unsigned long LkgConfigurationLoadAttempted : 1; /* bit position: 4 */
        /* 0x0004 */ unsigned long UsageSubscriptionLoadAttempted : 1; /* bit position: 5 */
        /* 0x0004 */ unsigned long Spare : 26; /* bit position: 6 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0008 */ long ConfigurationComparisonStatus;
  /* 0x000c */ long CurrentConfigurationLoadStatus;
  /* 0x0010 */ long LkgConfigurationLoadStatus;
  /* 0x0014 */ long UsageSubscriptionLoadStatus;
} LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION, *PLOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION; /* size: 0x0018 */

typedef struct _LOADER_FEATURE_CONFIGURATION_INFORMATION
{
  /* 0x0000 */ void* FeatureConfigurationBuffer;
  /* 0x0008 */ unsigned __int64 FeatureConfigurationBufferSize;
  /* 0x0010 */ void* UsageSubscriptionBuffer;
  /* 0x0018 */ unsigned __int64 UsageSubscriptionBufferSize;
  /* 0x0020 */ void* DelayedUsageReportBuffer;
  /* 0x0028 */ unsigned __int64 DelayedUsageReportBufferSize;
  /* 0x0030 */ struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION DiagnosticInformation;
} LOADER_FEATURE_CONFIGURATION_INFORMATION, *PLOADER_FEATURE_CONFIGURATION_INFORMATION; /* size: 0x0048 */

typedef struct _ETW_BOOT_CONFIG
{
  /* 0x0000 */ unsigned long MaxLoggers;
  /* 0x0008 */ struct _LIST_ENTRY BootLoggersList;
} ETW_BOOT_CONFIG, *PETW_BOOT_CONFIG; /* size: 0x0018 */

typedef enum _TYPE_OF_MEMORY
{
  LoaderExceptionBlock = 0,
  LoaderSystemBlock = 1,
  LoaderFree = 2,
  LoaderBad = 3,
  LoaderLoadedProgram = 4,
  LoaderFirmwareTemporary = 5,
  LoaderFirmwarePermanent = 6,
  LoaderOsloaderHeap = 7,
  LoaderOsloaderStack = 8,
  LoaderSystemCode = 9,
  LoaderHalCode = 10,
  LoaderBootDriver = 11,
  LoaderConsoleInDriver = 12,
  LoaderConsoleOutDriver = 13,
  LoaderStartupDpcStack = 14,
  LoaderStartupKernelStack = 15,
  LoaderStartupPanicStack = 16,
  LoaderStartupPcrPage = 17,
  LoaderStartupPdrPage = 18,
  LoaderRegistryData = 19,
  LoaderMemoryData = 20,
  LoaderNlsData = 21,
  LoaderSpecialMemory = 22,
  LoaderBBTMemory = 23,
  LoaderZero = 24,
  LoaderXIPRom = 25,
  LoaderHALCachedMemory = 26,
  LoaderLargePageFiller = 27,
  LoaderErrorLogMemory = 28,
  LoaderVsmMemory = 29,
  LoaderFirmwareCode = 30,
  LoaderFirmwareData = 31,
  LoaderFirmwareReserved = 32,
  LoaderEnclaveMemory = 33,
  LoaderFirmwareKsr = 34,
  LoaderEnclaveKsr = 35,
  LoaderSkMemory = 36,
  LoaderSkFirmwareReserved = 37,
  LoaderIoSpaceMemoryZeroed = 38,
  LoaderIoSpaceMemoryFree = 39,
  LoaderIoSpaceMemoryKsr = 40,
  LoaderKernelShadowStack = 41,
  LoaderIsolatedHostVisible = 42,
  LoaderIsolatedKsr = 43,
  LoaderIoSpaceIsolatedKsr = 44,
  LoaderPersistentDatabase = 45,
  LoaderSyntheticFirmwareData = 46,
  LoaderMaximum = 47,
} TYPE_OF_MEMORY, *PTYPE_OF_MEMORY;

typedef struct _OSLOADER_PAGE_TABLE_LOG
{
  /* 0x0000 */ void* LegacyPte;
  /* 0x0008 */ unsigned __int64 Pfn;
  /* 0x0010 */ enum _TYPE_OF_MEMORY MemoryType;
  /* 0x0018 */ unsigned __int64 BasePage;
  /* 0x0020 */ unsigned __int64 PageCount;
} OSLOADER_PAGE_TABLE_LOG, *POSLOADER_PAGE_TABLE_LOG; /* size: 0x0028 */

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
    /* 0x0084 */ unsigned long IumPersistentDatabaseEnabled : 1; /* bit position: 2 */
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
    /* 0x0084 */ unsigned long KernelCetEnabled : 1; /* bit position: 14 */
    /* 0x0084 */ unsigned long SuppressSmap : 1; /* bit position: 15 */
    /* 0x0084 */ unsigned long PointerAuthKernelIpEnabled : 1; /* bit position: 16 */
    /* 0x0084 */ unsigned long SplitLargeNumaNodes : 1; /* bit position: 17 */
    /* 0x0084 */ unsigned long KernelCetAuditModeEnabled : 1; /* bit position: 18 */
    /* 0x0084 */ unsigned long VerboseSELEnabled : 1; /* bit position: 19 */
    /* 0x0084 */ unsigned long EarlyCrashDumpEnabled : 1; /* bit position: 20 */
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
  /* 0x0110 */ unsigned long Reserved1;
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
  /* 0x0a28 */ struct _LIST_ENTRY PrmUpdateModuleList;
  /* 0x0a38 */ struct _LIST_ENTRY PrmFirmwareModuleList;
  /* 0x0a48 */ union _LARGE_INTEGER SystemTime;
  /* 0x0a50 */ unsigned __int64 TimeStampAtSystemTimeRead;
  union
  {
    /* 0x0a58 */ unsigned __int64 BootFlags;
    struct /* bitfield */
    {
      /* 0x0a58 */ unsigned __int64 DbgMenuOsSelection : 1; /* bit position: 0 */
      /* 0x0a58 */ unsigned __int64 DbgHiberBoot : 1; /* bit position: 1 */
      /* 0x0a58 */ unsigned __int64 DbgSoftRestart : 1; /* bit position: 2 */
      /* 0x0a58 */ unsigned __int64 DbgMeasuredLaunch : 1; /* bit position: 3 */
      /* 0x0a58 */ unsigned __int64 DbgMeasuredLaunchCapable : 1; /* bit position: 4 */
      /* 0x0a58 */ unsigned __int64 DbgSystemHiveReplace : 1; /* bit position: 5 */
      /* 0x0a58 */ unsigned __int64 DbgMeasuredLaunchSmmProtections : 1; /* bit position: 6 */
      /* 0x0a58 */ unsigned __int64 DbgMeasuredLaunchSmmLevel : 7; /* bit position: 7 */
      /* 0x0a58 */ unsigned __int64 DbgBugCheckRecovery : 1; /* bit position: 14 */
      /* 0x0a58 */ unsigned __int64 DbgFASR : 1; /* bit position: 15 */
      /* 0x0a58 */ unsigned __int64 DbgUseCachedBcd : 1; /* bit position: 16 */
    }; /* bitfield */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0a60 */ unsigned __int64 InternalBootFlags;
    struct /* bitfield */
    {
      /* 0x0a60 */ unsigned __int64 DbgUtcBootTime : 1; /* bit position: 0 */
      /* 0x0a60 */ unsigned __int64 DbgRtcBootTime : 1; /* bit position: 1 */
      /* 0x0a60 */ unsigned __int64 DbgNoLegacyServices : 1; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0008 */
  /* 0x0a68 */ void* WfsFPData;
  /* 0x0a70 */ unsigned long WfsFPDataSize;
  /* 0x0a78 */ struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;
  /* 0x0aa0 */ void* ApiSetSchema;
  /* 0x0aa8 */ unsigned long ApiSetSchemaSize;
  /* 0x0ab0 */ struct _LIST_ENTRY ApiSetSchemaExtensions;
  /* 0x0ac0 */ struct _UNICODE_STRING AcpiBiosVersion;
  /* 0x0ad0 */ struct _UNICODE_STRING SmbiosVersion;
  /* 0x0ae0 */ struct _UNICODE_STRING EfiVersion;
  /* 0x0af0 */ struct _DEBUG_DEVICE_DESCRIPTOR* KdDebugDevice;
  /* 0x0af8 */ struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable;
  /* 0x0b18 */ struct _UNICODE_STRING ManufacturingProfile;
  /* 0x0b28 */ void* BbtBuffer;
  /* 0x0b30 */ unsigned __int64 XsaveAllowedFeatures;
  /* 0x0b38 */ unsigned long XsaveFlags;
  /* 0x0b40 */ void* BootOptions;
  /* 0x0b48 */ unsigned long IumEnablement;
  /* 0x0b4c */ unsigned long IumPolicy;
  /* 0x0b50 */ long IumStatus;
  /* 0x0b54 */ unsigned long BootId;
  /* 0x0b58 */ struct _LOADER_PARAMETER_CI_EXTENSION* CodeIntegrityData;
  /* 0x0b60 */ unsigned long CodeIntegrityDataSize;
  /* 0x0b64 */ struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;
  /* 0x0b78 */ unsigned long SoftRestartCount;
  /* 0x0b80 */ __int64 SoftRestartTime;
  /* 0x0b88 */ void* HalVirtualAddress;
  /* 0x0b90 */ unsigned __int64 HalNumberOfBytes;
  /* 0x0b98 */ struct _LEAP_SECOND_DATA* LeapSecondData;
  /* 0x0ba0 */ unsigned long MajorRelease;
  /* 0x0ba4 */ unsigned long Reserved2;
  /* 0x0ba8 */ char NtBuildLab[224];
  /* 0x0c88 */ char NtBuildLabEx[224];
  /* 0x0d68 */ struct _LOADER_RESET_REASON ResetReason;
  /* 0x0d98 */ unsigned long MaxPciBusNumber;
  /* 0x0d9c */ unsigned long FeatureSettings;
  /* 0x0da0 */ unsigned long HotPatchReserveSize;
  /* 0x0da4 */ unsigned long KernelScpReserveSize;
  /* 0x0da8 */ struct _VSM_PERFORMANCE_DATA VsmPerformanceData;
  /* 0x0de8 */ struct _NUMA_MEMORY_RANGE* NumaMemoryRanges;
  /* 0x0df0 */ unsigned long NumaMemoryRangeCount;
  /* 0x0df4 */ unsigned long IommuFaultPolicy;
  /* 0x0df8 */ struct _LOADER_FEATURE_CONFIGURATION_INFORMATION FeatureConfigurationInformation;
  /* 0x0e40 */ struct _ETW_BOOT_CONFIG EtwBootConfig;
  /* 0x0e58 */ struct _BOOT_FIRMWARE_RAMDISK_INFO* FwRamdiskInfo;
  /* 0x0e60 */ void* IpmiHwContext;
  /* 0x0e68 */ unsigned __int64 PointerAuthKernelIpKey[2];
  /* 0x0e78 */ union _LARGE_INTEGER Luid;
  struct
  {
    /* 0x0e80 */ struct _INSTALLED_MEMORY_RANGE* Ranges;
    /* 0x0e88 */ unsigned long RangeCount;
    /* 0x0e8c */ long __PADDING__[1];
  } /* size: 0x0010 */ InstalledMemory;
  /* 0x0e90 */ unsigned __int64 HypervisorVendorIdentity;
  union
  {
    union
    {
      /* 0x0e98 */ unsigned char AsUCHAR;
      struct /* bitfield */
      {
        /* 0x0e98 */ unsigned char ArchStartedInEl2 : 1; /* bit position: 0 */
        /* 0x0e98 */ unsigned char QcSlIsSupported : 1; /* bit position: 1 */
      }; /* bitfield */
    }; /* size: 0x0001 */
  } /* size: 0x0001 */ VirtualizationFlags;
  /* 0x0ea0 */ struct _LIST_ENTRY HotPatchList;
  /* 0x0eb0 */ void* BSPMicrocodeData;
  /* 0x0eb8 */ unsigned long BSPMicrocodeDataSize;
  struct
  {
    /* 0x0ec0 */ struct _GUID TargetVolume;
    /* 0x0ed0 */ struct _UNICODE_STRING* CimFiles;
    /* 0x0ed8 */ unsigned long CimFilesCount;
    /* 0x0edc */ long __PADDING__[1];
  } /* size: 0x0020 */ CimfsInformation;
  /* 0x0ee0 */ union _LARGE_INTEGER HalSoftRebootDatabase;
  struct /* bitfield */
  {
    /* 0x0ee8 */ unsigned long KasanEnabled : 1; /* bit position: 0 */
    /* 0x0ee8 */ unsigned long InitialSystemPowerStatePresent : 1; /* bit position: 1 */
    /* 0x0ee8 */ unsigned long Unused2 : 6; /* bit position: 2 */
    /* 0x0ee8 */ unsigned long KasanFlags : 8; /* bit position: 8 */
    /* 0x0ee8 */ unsigned long Unused3 : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x0eec */ unsigned long KernelLargeStackSize;
  /* 0x0ef0 */ unsigned __int64 PerformanceDataFrequency;
  /* 0x0ef8 */ unsigned long DriverProxyReserveSize;
  /* 0x0f00 */ void* FunctionOverrideCapabilityMask;
  /* 0x0f08 */ void* FunctionOverrideOptinCapabilities;
  /* 0x0f10 */ void* PrmFwHandlerTable;
  /* 0x0f18 */ unsigned long PrmFwHandlerCount;
  /* 0x0f20 */ unsigned __int64 InitialSystemPowerState;
  /* 0x0f28 */ void* MicrocodeRecord;
  /* 0x0f30 */ unsigned long MicrocodeRecordSize;
  /* 0x0f38 */ struct _BOOT_OSL_RAMDISK_INFO* OslRamdiskInfo;
  struct
  {
    /* 0x0f40 */ struct _COMPOSITEFS_LAYER_INFORMATION** Layers;
    /* 0x0f48 */ unsigned long LayersCount;
    /* 0x0f4c */ long __PADDING__[1];
  } /* size: 0x0010 */ CompositefsInformation;
  /* 0x0f50 */ struct _LOADER_FEATURE_CONFIGURATION_INFORMATION2* FeatureConfigurationInformation2;
  /* 0x0f58 */ unsigned long PageTableLogCount;
  /* 0x0f60 */ struct _OSLOADER_PAGE_TABLE_LOG PageTableLog[10];
  /* 0x10f0 */ unsigned __int64 EntropyAccumulatorConfig;
} LOADER_PARAMETER_EXTENSION, *PLOADER_PARAMETER_EXTENSION; /* size: 0x10f8 */

