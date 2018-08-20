enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _POOL_TYPE;
enum _EVENT_TYPE;
union _LARGE_INTEGER;
enum _IRQ_PRIORITY;
struct _IO_RESOURCE_DESCRIPTOR;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _DEVICE_RELATION_TYPE;
enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum _SYSTEM_POWER_STATE;
enum _POWER_STATE_TYPE;
enum POWER_ACTION;
enum _WHEA_ERROR_TYPE;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _INTERFACE_TYPE;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
enum _WHEA_ERROR_PACKET_DATA_FORMAT;
enum _NT_PRODUCT_TYPE;
struct _SYSTEM_POWER_STATE_CONTEXT;
enum _DEVICE_POWER_STATE;
union _POWER_STATE;
enum _ALTERNATIVE_ARCHITECTURE_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _EXCEPTION_DISPOSITION;
enum _KSPIN_LOCK_QUEUE_NUMBER;
enum _IO_ALLOCATION_ACTION;
enum _REG_NOTIFY_CLASS;
union _WHEA_REVISION;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
struct _GUID;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _WHEA_CPU_VENDOR;
struct LIST_ENTRY64;
struct _NT_TIB;
struct _KPCR;
struct LIST_ENTRY32;
struct _LIST_ENTRY;
struct _SINGLE_LIST_ENTRY;
struct _UNICODE_STRING;
struct _STRING;
union _ULARGE_INTEGER;
struct _KTHREAD;
struct _DISPATCHER_HEADER;
struct _KEVENT;
struct _FAST_MUTEX;
struct _IO_RESOURCE_LIST;
union _SLIST_HEADER;
struct _GENERAL_LOOKASIDE_POOL;
struct _LOOKASIDE_LIST_EX;
struct _RTL_DYNAMIC_HASH_TABLE;
struct _EVENT_DATA_DESCRIPTOR;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _EVENT_DESCRIPTOR;
union _WHEA_ERROR_PACKET_FLAGS;
struct _WHEA_ERROR_PACKET_V2;
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
union _WHEA_TIMESTAMP;
union _WHEA_ERROR_RECORD_HEADER_FLAGS;
union _WHEA_PERSISTENCE_INFO;
struct _WHEA_ERROR_RECORD_HEADER;
struct _GENERAL_LOOKASIDE;
struct _NPAGED_LOOKASIDE_LIST;
struct _PAGED_LOOKASIDE_LIST;
struct _ETHREAD;
struct _IO_STATUS_BLOCK;
struct _KDEVICE_QUEUE_ENTRY;
struct _KAPC;
struct _IRP;
struct _MDL;
struct _EPROCESS;
struct _EXCEPTION_RECORD;
struct _WAIT_CONTEXT_BLOCK;
struct _KDEVICE_QUEUE;
struct _KDPC;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _DRIVER_EXTENSION;
struct _FLOATING_SAVE_AREA;
struct _DESCRIPTOR;
struct _FAST_IO_DISPATCH;
struct _CONTEXT;
struct _KSPECIAL_REGISTERS;
struct _KPROCESSOR_STATE;
struct _FILE_OBJECT;
struct _VPB;
struct _SECTION_OBJECT_POINTERS;
struct _IO_COMPLETION_CONTEXT;
struct _FILE_BASIC_INFORMATION;
struct _FILE_STANDARD_INFORMATION;
struct _KPROCESS;
struct _IO_TIMER;
struct _INTERFACE;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _PRIVILEGE_SET;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _OWNER_ENTRY;
struct _ERESOURCE;
struct _KSEMAPHORE;
struct _SCSI_REQUEST_BLOCK;
union _MCG_STATUS;
union _MCI_STATUS;
struct _WHEA_XPF_MCA_SECTION;
struct _KSYSTEM_TIME;
struct _COMPRESSED_DATA_INFO;
struct _PROCLOCALSAPIC;
struct _DEVOBJ_EXTENSION;
struct _IO_STACK_LOCATION;
struct _FACS;
struct _IO_SECURITY_CONTEXT;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _INITIAL_PRIVILEGE_SET;
struct _ACCESS_STATE;
struct _XSTATE_FEATURE;
struct _DESCRIPTION_HEADER;
struct HalpMpInfo;
struct _FILE_GET_QUOTA_INFORMATION;
struct _DEVICE_CAPABILITIES;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _KiIoAccessMap;
struct _OBJECT_TYPE;
struct _POWER_SEQUENCE;
struct _CM_RESOURCE_LIST;
struct _KGDTENTRY;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _ECP_LIST;
struct _TXN_PARAMETER_BLOCK;
struct _LOCAL_NMISOURCE;
struct _WHEA_ERROR_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _KSPIN_LOCK_QUEUE;
struct _KPRCB;
struct _KIDTENTRY;
struct _KTSS;
struct _OBJECT_ATTRIBUTES;
struct _DMA_ADAPTER;
struct _ADAPTER_OBJECT;
struct _DMA_OPERATIONS;
struct _RTL_BITMAP;
struct _XSTATE_CONFIGURATION;
struct _KUSER_SHARED_DATA;
struct _HARDWARE_PTE_X86;
struct _HARDWARE_PTE_X86PAE;
struct _GEN_ADDR;
struct _FADT;
struct _CONTROLLER_OBJECT;
struct _RSDT_32;
struct _HAL_ENLIGHTENMENT;
struct _IOSAPIC;
struct _MAPIC;
struct _RSDP;
struct _ISA_VECTOR;
union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS;
struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION;
struct _PLATFORM_INTERRUPT;
union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS;
struct _WHEA_XPF_PROCESSOR_ERROR_SECTION;
struct _IOAPIC;
struct _PROCLOCALAPIC;
struct _IO_NMISOURCE;

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3,
} DEVICE_USAGE_NOTIFICATION_TYPE, *PDEVICE_USAGE_NOTIFICATION_TYPE;

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
} POOL_TYPE, *PPOOL_TYPE;

typedef enum _EVENT_TYPE
{
  NotificationEvent = 0,
  SynchronizationEvent = 1,
} EVENT_TYPE, *PEVENT_TYPE;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _IRQ_PRIORITY
{
  IrqPriorityUndefined = 0,
  IrqPriorityLow = 1,
  IrqPriorityNormal = 2,
  IrqPriorityHigh = 3,
} IRQ_PRIORITY, *PIRQ_PRIORITY;

typedef struct _IO_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Option;
  /* 0x0001 */ unsigned char Type;
  /* 0x0002 */ unsigned char ShareDisposition;
  /* 0x0003 */ unsigned char Spare1;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short Spare2;
  union // _TAG_UNNAMED_2
  {
    union
    {
      struct // _TAG_UNNAMED_3
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Port;
      struct // _TAG_UNNAMED_3
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory;
      struct // _TAG_UNNAMED_4
      {
        /* 0x0008 */ unsigned long MinimumVector;
        /* 0x000c */ unsigned long MaximumVector;
        /* 0x0010 */ unsigned short AffinityPolicy;
        /* 0x0012 */ unsigned short Group;
        /* 0x0014 */ enum _IRQ_PRIORITY PriorityPolicy;
        /* 0x0018 */ unsigned long TargetedProcessors;
      } /* size: 0x0014 */ Interrupt;
      struct // _TAG_UNNAMED_5
      {
        /* 0x0008 */ unsigned long MinimumChannel;
        /* 0x000c */ unsigned long MaximumChannel;
      } /* size: 0x0008 */ Dma;
      struct // _TAG_UNNAMED_3
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Generic;
      struct // _TAG_UNNAMED_6
      {
        /* 0x0008 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct // _TAG_UNNAMED_7
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long MinBusNumber;
        /* 0x0010 */ unsigned long MaxBusNumber;
        /* 0x0014 */ unsigned long Reserved;
      } /* size: 0x0010 */ BusNumber;
      struct // _TAG_UNNAMED_8
      {
        /* 0x0008 */ unsigned long Priority;
        /* 0x000c */ unsigned long Reserved1;
        /* 0x0010 */ unsigned long Reserved2;
      } /* size: 0x000c */ ConfigData;
      struct // _TAG_UNNAMED_9
      {
        /* 0x0008 */ unsigned long Length40;
        /* 0x000c */ unsigned long Alignment40;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory40;
      struct // _TAG_UNNAMED_10
      {
        /* 0x0008 */ unsigned long Length48;
        /* 0x000c */ unsigned long Alignment48;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory48;
      struct // _TAG_UNNAMED_11
      {
        /* 0x0008 */ unsigned long Length64;
        /* 0x000c */ unsigned long Alignment64;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory64;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u;
} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR; /* size: 0x0020 */

typedef enum _FILE_INFORMATION_CLASS
{
  FileDirectoryInformation = 1,
  FileFullDirectoryInformation = 2,
  FileBothDirectoryInformation = 3,
  FileBasicInformation = 4,
  FileStandardInformation = 5,
  FileInternalInformation = 6,
  FileEaInformation = 7,
  FileAccessInformation = 8,
  FileNameInformation = 9,
  FileRenameInformation = 10,
  FileLinkInformation = 11,
  FileNamesInformation = 12,
  FileDispositionInformation = 13,
  FilePositionInformation = 14,
  FileFullEaInformation = 15,
  FileModeInformation = 16,
  FileAlignmentInformation = 17,
  FileAllInformation = 18,
  FileAllocationInformation = 19,
  FileEndOfFileInformation = 20,
  FileAlternateNameInformation = 21,
  FileStreamInformation = 22,
  FilePipeInformation = 23,
  FilePipeLocalInformation = 24,
  FilePipeRemoteInformation = 25,
  FileMailslotQueryInformation = 26,
  FileMailslotSetInformation = 27,
  FileCompressionInformation = 28,
  FileObjectIdInformation = 29,
  FileCompletionInformation = 30,
  FileMoveClusterInformation = 31,
  FileQuotaInformation = 32,
  FileReparsePointInformation = 33,
  FileNetworkOpenInformation = 34,
  FileAttributeTagInformation = 35,
  FileTrackingInformation = 36,
  FileIdBothDirectoryInformation = 37,
  FileIdFullDirectoryInformation = 38,
  FileValidDataLengthInformation = 39,
  FileShortNameInformation = 40,
  FileIoCompletionNotificationInformation = 41,
  FileIoStatusBlockRangeInformation = 42,
  FileIoPriorityHintInformation = 43,
  FileSfioReserveInformation = 44,
  FileSfioVolumeInformation = 45,
  FileHardLinkInformation = 46,
  FileProcessIdsUsingFileInformation = 47,
  FileNormalizedNameInformation = 48,
  FileNetworkPhysicalNameInformation = 49,
  FileIdGlobalTxDirectoryInformation = 50,
  FileIsRemoteDeviceInformation = 51,
  FileAttributeCacheInformation = 52,
  FileNumaNodeInformation = 53,
  FileStandardLinkInformation = 54,
  FileRemoteProtocolInformation = 55,
  FileMaximumInformation = 56,
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

typedef enum _FSINFOCLASS
{
  FileFsVolumeInformation = 1,
  FileFsLabelInformation = 2,
  FileFsSizeInformation = 3,
  FileFsDeviceInformation = 4,
  FileFsAttributeInformation = 5,
  FileFsControlInformation = 6,
  FileFsFullSizeInformation = 7,
  FileFsObjectIdInformation = 8,
  FileFsDriverPathInformation = 9,
  FileFsVolumeFlagsInformation = 10,
  FileFsMaximumInformation = 11,
} FSINFOCLASS, *PFSINFOCLASS;

typedef enum _DEVICE_RELATION_TYPE
{
  BusRelations = 0,
  EjectionRelations = 1,
  PowerRelations = 2,
  RemovalRelations = 3,
  TargetDeviceRelation = 4,
  SingleBusRelations = 5,
  TransportRelations = 6,
} DEVICE_RELATION_TYPE, *PDEVICE_RELATION_TYPE;

enum BUS_QUERY_ID_TYPE
{
  BusQueryDeviceID = 0,
  BusQueryHardwareIDs = 1,
  BusQueryCompatibleIDs = 2,
  BusQueryInstanceID = 3,
  BusQueryDeviceSerialNumber = 4,
  BusQueryContainerID = 5,
};

enum DEVICE_TEXT_TYPE
{
  DeviceTextDescription = 0,
  DeviceTextLocationInformation = 1,
};

typedef enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef enum _POWER_STATE_TYPE
{
  SystemPowerState = 0,
  DevicePowerState = 1,
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;

enum POWER_ACTION
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7,
};

typedef enum _WHEA_ERROR_TYPE
{
  WheaErrTypeProcessor = 0,
  WheaErrTypeMemory = 1,
  WheaErrTypePCIExpress = 2,
  WheaErrTypeNMI = 3,
  WheaErrTypePCIXBus = 4,
  WheaErrTypePCIXDevice = 5,
  WheaErrTypeGeneric = 6,
} WHEA_ERROR_TYPE, *PWHEA_ERROR_TYPE;

typedef enum _WHEA_ERROR_SEVERITY
{
  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevInformational = 3,
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;

typedef enum _WHEA_ERROR_SOURCE_TYPE
{
  WheaErrSrcTypeMCE = 0,
  WheaErrSrcTypeCMC = 1,
  WheaErrSrcTypeCPE = 2,
  WheaErrSrcTypeNMI = 3,
  WheaErrSrcTypePCIe = 4,
  WheaErrSrcTypeGeneric = 5,
  WheaErrSrcTypeINIT = 6,
  WheaErrSrcTypeBOOT = 7,
  WheaErrSrcTypeSCIGeneric = 8,
  WheaErrSrcTypeIPFMCA = 9,
  WheaErrSrcTypeIPFCMC = 10,
  WheaErrSrcTypeIPFCPE = 11,
  WheaErrSrcTypeMax = 12,
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;

typedef enum _INTERFACE_TYPE
{
  InterfaceTypeUndefined = -1,
  Internal = 0,
  Isa = 1,
  Eisa = 2,
  MicroChannel = 3,
  TurboChannel = 4,
  PCIBus = 5,
  VMEBus = 6,
  NuBus = 7,
  PCMCIABus = 8,
  CBus = 9,
  MPIBus = 10,
  MPSABus = 11,
  ProcessorInternal = 12,
  InternalPowerBus = 13,
  PNPISABus = 14,
  PNPBus = 15,
  Vmcs = 16,
  MaximumInterfaceType = 17,
} INTERFACE_TYPE, *PINTERFACE_TYPE;

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char ShareDisposition;
  /* 0x0002 */ unsigned short Flags;
  union // _TAG_UNNAMED_12
  {
    union
    {
      struct // _TAG_UNNAMED_13
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Generic;
      struct // _TAG_UNNAMED_13
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Port;
      struct // _TAG_UNNAMED_14
      {
        /* 0x0004 */ unsigned short Level;
        /* 0x0006 */ unsigned short Group;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long Affinity;
      } /* size: 0x000c */ Interrupt;
      struct // _TAG_UNNAMED_15
      {
        union
        {
          struct // _TAG_UNNAMED_16
          {
            /* 0x0004 */ unsigned short Group;
            /* 0x0006 */ unsigned short MessageCount;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned long Affinity;
          } /* size: 0x000c */ Raw;
          struct // _TAG_UNNAMED_14
          {
            /* 0x0004 */ unsigned short Level;
            /* 0x0006 */ unsigned short Group;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned long Affinity;
          } /* size: 0x000c */ Translated;
        }; /* size: 0x000c */
      } /* size: 0x000c */ MessageInterrupt;
      struct // _TAG_UNNAMED_13
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Memory;
      struct // _TAG_UNNAMED_17
      {
        /* 0x0004 */ unsigned long Channel;
        /* 0x0008 */ unsigned long Port;
        /* 0x000c */ unsigned long Reserved1;
      } /* size: 0x000c */ Dma;
      struct // _TAG_UNNAMED_6
      {
        /* 0x0004 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct // _TAG_UNNAMED_18
      {
        /* 0x0004 */ unsigned long Start;
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Reserved;
      } /* size: 0x000c */ BusNumber;
      struct // _TAG_UNNAMED_19
      {
        /* 0x0004 */ unsigned long DataSize;
        /* 0x0008 */ unsigned long Reserved1;
        /* 0x000c */ unsigned long Reserved2;
      } /* size: 0x000c */ DeviceSpecificData;
      struct // _TAG_UNNAMED_20
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length40;
      } /* size: 0x000c */ Memory40;
      struct // _TAG_UNNAMED_21
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length48;
      } /* size: 0x000c */ Memory48;
      struct // _TAG_UNNAMED_22
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length64;
      } /* size: 0x000c */ Memory64;
    }; /* size: 0x000c */
  } /* size: 0x000c */ u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR; /* size: 0x0010 */

typedef struct _CM_PARTIAL_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST; /* size: 0x0018 */

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR; /* size: 0x0020 */

typedef enum _WHEA_ERROR_PACKET_DATA_FORMAT
{
  WheaDataFormatIPFSalRecord = 0,
  WheaDataFormatXPFMCA = 1,
  WheaDataFormatMemory = 2,
  WheaDataFormatPCIExpress = 3,
  WheaDataFormatNMIPort = 4,
  WheaDataFormatPCIXBus = 5,
  WheaDataFormatPCIXDevice = 6,
  WheaDataFormatGeneric = 7,
  WheaDataFormatMax = 8,
} WHEA_ERROR_PACKET_DATA_FORMAT, *PWHEA_ERROR_PACKET_DATA_FORMAT;

typedef enum _NT_PRODUCT_TYPE
{
  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3,
} NT_PRODUCT_TYPE, *PNT_PRODUCT_TYPE;

typedef struct _SYSTEM_POWER_STATE_CONTEXT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Reserved1 : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long TargetSystemState : 4; /* bit position: 8 */
      /* 0x0000 */ unsigned long EffectiveSystemState : 4; /* bit position: 12 */
      /* 0x0000 */ unsigned long CurrentSystemState : 4; /* bit position: 16 */
      /* 0x0000 */ unsigned long IgnoreHibernationPath : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long PseudoTransition : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned long Reserved2 : 10; /* bit position: 22 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long ContextAsUlong;
  }; /* size: 0x0004 */
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT; /* size: 0x0004 */

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef union _POWER_STATE
{
  union
  {
    /* 0x0000 */ enum _SYSTEM_POWER_STATE SystemState;
    /* 0x0000 */ enum _DEVICE_POWER_STATE DeviceState;
  }; /* size: 0x0004 */
} POWER_STATE, *PPOWER_STATE; /* size: 0x0004 */

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE
{
  StandardDesign = 0,
  NEC98x86 = 1,
  EndAlternatives = 2,
} ALTERNATIVE_ARCHITECTURE_TYPE, *PALTERNATIVE_ARCHITECTURE_TYPE;

typedef enum _MEMORY_CACHING_TYPE_ORIG
{
  MmFrameBufferCached = 2,
} MEMORY_CACHING_TYPE_ORIG, *PMEMORY_CACHING_TYPE_ORIG;

typedef enum _EXCEPTION_DISPOSITION
{
  ExceptionContinueExecution = 0,
  ExceptionContinueSearch = 1,
  ExceptionNestedException = 2,
  ExceptionCollidedUnwind = 3,
} EXCEPTION_DISPOSITION, *PEXCEPTION_DISPOSITION;

typedef enum _KSPIN_LOCK_QUEUE_NUMBER
{
  LockQueueUnusedSpare0 = 0,
  LockQueueExpansionLock = 1,
  LockQueueUnusedSpare2 = 2,
  LockQueueSystemSpaceLock = 3,
  LockQueueVacbLock = 4,
  LockQueueMasterLock = 5,
  LockQueueNonPagedPoolLock = 6,
  LockQueueIoCancelLock = 7,
  LockQueueWorkQueueLock = 8,
  LockQueueIoVpbLock = 9,
  LockQueueIoDatabaseLock = 10,
  LockQueueIoCompletionLock = 11,
  LockQueueNtfsStructLock = 12,
  LockQueueAfdWorkQueueLock = 13,
  LockQueueBcbLock = 14,
  LockQueueMmNonPagedPoolLock = 15,
  LockQueueUnusedSpare16 = 16,
  LockQueueMaximumLock = 17,
} KSPIN_LOCK_QUEUE_NUMBER, *PKSPIN_LOCK_QUEUE_NUMBER;

typedef enum _IO_ALLOCATION_ACTION
{
  KeepObject = 1,
  DeallocateObject = 2,
  DeallocateObjectKeepRegisters = 3,
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;

typedef enum _REG_NOTIFY_CLASS
{
  RegNtDeleteKey = 0,
  RegNtPreDeleteKey = 0,
  RegNtSetValueKey = 1,
  RegNtPreSetValueKey = 1,
  RegNtDeleteValueKey = 2,
  RegNtPreDeleteValueKey = 2,
  RegNtSetInformationKey = 3,
  RegNtPreSetInformationKey = 3,
  RegNtRenameKey = 4,
  RegNtPreRenameKey = 4,
  RegNtEnumerateKey = 5,
  RegNtPreEnumerateKey = 5,
  RegNtEnumerateValueKey = 6,
  RegNtPreEnumerateValueKey = 6,
  RegNtQueryKey = 7,
  RegNtPreQueryKey = 7,
  RegNtQueryValueKey = 8,
  RegNtPreQueryValueKey = 8,
  RegNtQueryMultipleValueKey = 9,
  RegNtPreQueryMultipleValueKey = 9,
  RegNtPreCreateKey = 10,
  RegNtPostCreateKey = 11,
  RegNtPreOpenKey = 12,
  RegNtPostOpenKey = 13,
  RegNtKeyHandleClose = 14,
  RegNtPreKeyHandleClose = 14,
  RegNtPostDeleteKey = 15,
  RegNtPostSetValueKey = 16,
  RegNtPostDeleteValueKey = 17,
  RegNtPostSetInformationKey = 18,
  RegNtPostRenameKey = 19,
  RegNtPostEnumerateKey = 20,
  RegNtPostEnumerateValueKey = 21,
  RegNtPostQueryKey = 22,
  RegNtPostQueryValueKey = 23,
  RegNtPostQueryMultipleValueKey = 24,
  RegNtPostKeyHandleClose = 25,
  RegNtPreCreateKeyEx = 26,
  RegNtPostCreateKeyEx = 27,
  RegNtPreOpenKeyEx = 28,
  RegNtPostOpenKeyEx = 29,
  RegNtPreFlushKey = 30,
  RegNtPostFlushKey = 31,
  RegNtPreLoadKey = 32,
  RegNtPostLoadKey = 33,
  RegNtPreUnLoadKey = 34,
  RegNtPostUnLoadKey = 35,
  RegNtPreQueryKeySecurity = 36,
  RegNtPostQueryKeySecurity = 37,
  RegNtPreSetKeySecurity = 38,
  RegNtPostSetKeySecurity = 39,
  RegNtCallbackObjectContextCleanup = 40,
  RegNtPreRestoreKey = 41,
  RegNtPostRestoreKey = 42,
  RegNtPreSaveKey = 43,
  RegNtPostSaveKey = 44,
  RegNtPreReplaceKey = 45,
  RegNtPostReplaceKey = 46,
  MaxRegNtNotifyClass = 47,
} REG_NOTIFY_CLASS, *PREG_NOTIFY_CLASS;

typedef union _WHEA_REVISION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char MinorRevision;
      /* 0x0001 */ unsigned char MajorRevision;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_REVISION, *PWHEA_REVISION; /* size: 0x0002 */

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char FRUId : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char FRUText : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS; /* size: 0x0001 */

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Primary : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ContainmentWarning : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reset : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long ThresholdExceeded : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ResourceNotAvailable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long LatentError : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Reserved : 26; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
{
  /* 0x0000 */ unsigned long SectionOffset;
  /* 0x0004 */ unsigned long SectionLength;
  /* 0x0008 */ union _WHEA_REVISION Revision;
  /* 0x000a */ union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
  /* 0x000b */ unsigned char Reserved;
  /* 0x000c */ union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
  /* 0x0010 */ struct _GUID SectionType;
  /* 0x0020 */ struct _GUID FRUId;
  /* 0x0030 */ enum _WHEA_ERROR_SEVERITY SectionSeverity;
  /* 0x0034 */ char FRUText[20];
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR; /* size: 0x0048 */

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef enum _WHEA_CPU_VENDOR
{
  WheaCpuVendorOther = 0,
  WheaCpuVendorIntel = 1,
  WheaCpuVendorAmd = 2,
} WHEA_CPU_VENDOR, *PWHEA_CPU_VENDOR;

struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0004 */ void* StackBase;
  /* 0x0008 */ void* StackLimit;
  /* 0x000c */ void* SubSystemTib;
  union
  {
    /* 0x0010 */ void* FiberData;
    /* 0x0010 */ unsigned long Version;
  }; /* size: 0x0004 */
  /* 0x0014 */ void* ArbitraryUserPointer;
  /* 0x0018 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x001c */

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* Used_ExceptionList;
      /* 0x0004 */ void* Used_StackBase;
      /* 0x0008 */ void* Spare2;
      /* 0x000c */ void* TssCopy;
      /* 0x0010 */ unsigned long ContextSwitches;
      /* 0x0014 */ unsigned long SetMemberCopy;
      /* 0x0018 */ void* Used_Self;
    }; /* size: 0x001c */
  }; /* size: 0x001c */
  /* 0x001c */ struct _KPCR* SelfPcr;
  /* 0x0020 */ struct _KPRCB* Prcb;
  /* 0x0024 */ unsigned char Irql;
  /* 0x0025 */ char Padding_0[3];
  /* 0x0028 */ unsigned long IRR;
  /* 0x002c */ unsigned long IrrActive;
  /* 0x0030 */ unsigned long IDR;
  /* 0x0034 */ void* KdVersionBlock;
  /* 0x0038 */ struct _KIDTENTRY* IDT;
  /* 0x003c */ struct _KGDTENTRY* GDT;
  /* 0x0040 */ struct _KTSS* TSS;
  /* 0x0044 */ unsigned short MajorVersion;
  /* 0x0046 */ unsigned short MinorVersion;
  /* 0x0048 */ unsigned long SetMember;
  /* 0x004c */ unsigned long StallScaleFactor;
  /* 0x0050 */ unsigned char SpareUnused;
  /* 0x0051 */ unsigned char Number;
  /* 0x0052 */ unsigned char Spare0;
  /* 0x0053 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x0054 */ unsigned long VdmAlert;
  /* 0x0058 */ unsigned long KernelReserved[14];
  /* 0x0090 */ unsigned long SecondLevelCacheSize;
  /* 0x0094 */ unsigned long HalReserved[16];
} KPCR, *PKPCR; /* size: 0x00d4 */

struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ char* Buffer;
} STRING, *PSTRING; /* size: 0x0008 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_23
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

struct _KTHREAD;

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
              union
              {
                /* 0x0003 */ unsigned char TimerMiscFlags;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
                  /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _FAST_MUTEX
{
  /* 0x0000 */ volatile long Count;
  /* 0x0004 */ struct _KTHREAD* Owner;
  /* 0x0008 */ unsigned long Contention;
  /* 0x000c */ struct _KEVENT Event;
  /* 0x001c */ unsigned long OldIrql;
} FAST_MUTEX, *PFAST_MUTEX; /* size: 0x0020 */

typedef struct _IO_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST; /* size: 0x0028 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  union
  {
    /* 0x0010 */ unsigned long AllocateMisses;
    /* 0x0010 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long TotalFrees;
  union
  {
    /* 0x0018 */ unsigned long FreeMisses;
    /* 0x0018 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x001c */ enum _POOL_TYPE Type;
  /* 0x0020 */ unsigned long Tag;
  /* 0x0024 */ unsigned long Size;
  union
  {
    /* 0x0028 */ void* AllocateEx /* function */;
    /* 0x0028 */ void* Allocate /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* FreeEx /* function */;
    /* 0x002c */ void* Free /* function */;
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _LIST_ENTRY ListEntry;
  /* 0x0038 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x003c */ unsigned long LastAllocateMisses;
    /* 0x003c */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0040 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0048 */

typedef struct _LOOKASIDE_LIST_EX
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE_POOL L;
} LOOKASIDE_LIST_EX, *PLOOKASIDE_LIST_EX; /* size: 0x0048 */

typedef struct _RTL_DYNAMIC_HASH_TABLE
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long Shift;
  /* 0x0008 */ unsigned long TableSize;
  /* 0x000c */ unsigned long Pivot;
  /* 0x0010 */ unsigned long DivisorMask;
  /* 0x0014 */ unsigned long NumEntries;
  /* 0x0018 */ unsigned long NonEmptyBuckets;
  /* 0x001c */ unsigned long NumEnumerators;
  /* 0x0020 */ void* Directory;
} RTL_DYNAMIC_HASH_TABLE, *PRTL_DYNAMIC_HASH_TABLE; /* size: 0x0024 */

typedef struct _EVENT_DATA_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 Ptr;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long Reserved;
} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR; /* size: 0x0010 */

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Linkage;
  /* 0x0008 */ unsigned long Signature;
} RTL_DYNAMIC_HASH_TABLE_ENTRY, *PRTL_DYNAMIC_HASH_TABLE_ENTRY; /* size: 0x000c */

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR
{
  /* 0x0000 */ struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
  /* 0x000c */ struct _LIST_ENTRY* ChainHead;
  /* 0x0010 */ unsigned long BucketIndex;
} RTL_DYNAMIC_HASH_TABLE_ENUMERATOR, *PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR; /* size: 0x0014 */

typedef struct _IO_DRIVER_CREATE_CONTEXT
{
  /* 0x0000 */ short Size;
  /* 0x0002 */ char Padding_1[2];
  /* 0x0004 */ struct _ECP_LIST* ExtraCreateParameter;
  /* 0x0008 */ void* DeviceObjectHint;
  /* 0x000c */ struct _TXN_PARAMETER_BLOCK* TxnParameters;
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT; /* size: 0x0010 */

typedef struct _EVENT_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Id;
  /* 0x0002 */ unsigned char Version;
  /* 0x0003 */ unsigned char Channel;
  /* 0x0004 */ unsigned char Level;
  /* 0x0005 */ unsigned char Opcode;
  /* 0x0006 */ unsigned short Task;
  /* 0x0008 */ unsigned __int64 Keyword;
} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR; /* size: 0x0010 */

typedef union _WHEA_ERROR_PACKET_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PreviousError : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved1 : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long HypervisorError : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Simulated : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long PlatformPfaControl : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long PlatformDirectedOffline : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Reserved2 : 26; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_PACKET_FLAGS, *PWHEA_ERROR_PACKET_FLAGS; /* size: 0x0004 */

typedef struct _WHEA_ERROR_PACKET_V2
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ union _WHEA_ERROR_PACKET_FLAGS Flags;
  /* 0x0010 */ enum _WHEA_ERROR_TYPE ErrorType;
  /* 0x0014 */ enum _WHEA_ERROR_SEVERITY ErrorSeverity;
  /* 0x0018 */ unsigned long ErrorSourceId;
  /* 0x001c */ enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
  /* 0x0020 */ struct _GUID NotifyType;
  /* 0x0030 */ unsigned __int64 Context;
  /* 0x0038 */ enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
  /* 0x003c */ unsigned long Reserved1;
  /* 0x0040 */ unsigned long DataOffset;
  /* 0x0044 */ unsigned long DataLength;
  /* 0x0048 */ unsigned long PshedDataOffset;
  /* 0x004c */ unsigned long PshedDataLength;
} WHEA_ERROR_PACKET_V2, *PWHEA_ERROR_PACKET_V2; /* size: 0x0050 */

typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PlatformId : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Timestamp : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long PartitionId : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_HEADER_VALIDBITS, *PWHEA_ERROR_RECORD_HEADER_VALIDBITS; /* size: 0x0004 */

typedef union _WHEA_TIMESTAMP
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Seconds : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Minutes : 8; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Hours : 8; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Precise : 1; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 25 */
      /* 0x0000 */ unsigned __int64 Day : 8; /* bit position: 32 */
      /* 0x0000 */ unsigned __int64 Month : 8; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 Year : 8; /* bit position: 48 */
      /* 0x0000 */ unsigned __int64 Century : 8; /* bit position: 56 */
    }; /* bitfield */
    /* 0x0000 */ union _LARGE_INTEGER AsLARGE_INTEGER;
  }; /* size: 0x0008 */
} WHEA_TIMESTAMP, *PWHEA_TIMESTAMP; /* size: 0x0008 */

typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Recovered : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PreviousError : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Simulated : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_HEADER_FLAGS, *PWHEA_ERROR_RECORD_HEADER_FLAGS; /* size: 0x0004 */

typedef union _WHEA_PERSISTENCE_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Signature : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Length : 24; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Identifier : 16; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 Attributes : 2; /* bit position: 56 */
      /* 0x0000 */ unsigned __int64 DoNotLog : 1; /* bit position: 58 */
      /* 0x0000 */ unsigned __int64 Reserved : 5; /* bit position: 59 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO; /* size: 0x0008 */

typedef struct _WHEA_ERROR_RECORD_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ union _WHEA_REVISION Revision;
  /* 0x0006 */ unsigned long SignatureEnd;
  /* 0x000a */ unsigned short SectionCount;
  /* 0x000c */ enum _WHEA_ERROR_SEVERITY Severity;
  /* 0x0010 */ union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ union _WHEA_TIMESTAMP Timestamp;
  /* 0x0020 */ struct _GUID PlatformId;
  /* 0x0030 */ struct _GUID PartitionId;
  /* 0x0040 */ struct _GUID CreatorId;
  /* 0x0050 */ struct _GUID NotifyType;
  /* 0x0060 */ unsigned __int64 RecordId;
  /* 0x0068 */ union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
  /* 0x006c */ union _WHEA_PERSISTENCE_INFO PersistenceInfo;
  /* 0x0074 */ unsigned char Reserved[12];
} WHEA_ERROR_RECORD_HEADER, *PWHEA_ERROR_RECORD_HEADER; /* size: 0x0080 */

typedef struct _GENERAL_LOOKASIDE
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  union
  {
    /* 0x0010 */ unsigned long AllocateMisses;
    /* 0x0010 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long TotalFrees;
  union
  {
    /* 0x0018 */ unsigned long FreeMisses;
    /* 0x0018 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x001c */ enum _POOL_TYPE Type;
  /* 0x0020 */ unsigned long Tag;
  /* 0x0024 */ unsigned long Size;
  union
  {
    /* 0x0028 */ void* AllocateEx /* function */;
    /* 0x0028 */ void* Allocate /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* FreeEx /* function */;
    /* 0x002c */ void* Free /* function */;
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _LIST_ENTRY ListEntry;
  /* 0x0038 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x003c */ unsigned long LastAllocateMisses;
    /* 0x003c */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0040 */ unsigned long Future[2];
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE; /* size: 0x0048 */

typedef struct _NPAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
  /* 0x0048 */ unsigned long Lock__ObsoleteButDoNotDelete;
  /* 0x004c */ long __PADDING__[1];
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST; /* size: 0x0050 */

typedef struct _PAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
  /* 0x0048 */ struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete;
} PAGED_LOOKASIDE_LIST, *PPAGED_LOOKASIDE_LIST; /* size: 0x0068 */

struct _ETHREAD;

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0008 */

typedef struct _KDEVICE_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceListEntry;
  /* 0x0008 */ unsigned long SortKey;
  /* 0x000c */ unsigned char Inserted;
  /* 0x000d */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0010 */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ struct _LIST_ENTRY ApcListEntry;
  /* 0x0014 */ void* KernelRoutine /* function */;
  /* 0x0018 */ void* RundownRoutine /* function */;
  /* 0x001c */ void* NormalRoutine /* function */;
  /* 0x0020 */ void* NormalContext;
  /* 0x0024 */ void* SystemArgument1;
  /* 0x0028 */ void* SystemArgument2;
  /* 0x002c */ char ApcStateIndex;
  /* 0x002d */ char ApcMode;
  /* 0x002e */ unsigned char Inserted;
  /* 0x002f */ char __PADDING__[1];
} KAPC, *PKAPC; /* size: 0x0030 */

typedef struct _IRP
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _MDL* MdlAddress;
  /* 0x0008 */ unsigned long Flags;
  union // _TAG_UNNAMED_24
  {
    union
    {
      /* 0x000c */ struct _IRP* MasterIrp;
      /* 0x000c */ long IrpCount;
      /* 0x000c */ void* SystemBuffer;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ AssociatedIrp;
  /* 0x0010 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0018 */ struct _IO_STATUS_BLOCK IoStatus;
  /* 0x0020 */ char RequestorMode;
  /* 0x0021 */ unsigned char PendingReturned;
  /* 0x0022 */ char StackCount;
  /* 0x0023 */ char CurrentLocation;
  /* 0x0024 */ unsigned char Cancel;
  /* 0x0025 */ unsigned char CancelIrql;
  /* 0x0026 */ char ApcEnvironment;
  /* 0x0027 */ unsigned char AllocationFlags;
  /* 0x0028 */ struct _IO_STATUS_BLOCK* UserIosb;
  /* 0x002c */ struct _KEVENT* UserEvent;
  union // _TAG_UNNAMED_25
  {
    union
    {
      struct // _TAG_UNNAMED_26
      {
        union
        {
          /* 0x0030 */ void* UserApcRoutine /* function */;
          /* 0x0030 */ void* IssuingProcess;
        }; /* size: 0x0004 */
        /* 0x0034 */ void* UserApcContext;
      } /* size: 0x0008 */ AsynchronousParameters;
      /* 0x0030 */ union _LARGE_INTEGER AllocationSize;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Overlay;
  /* 0x0038 */ void* CancelRoutine /* function */;
  /* 0x003c */ void* UserBuffer;
  union // _TAG_UNNAMED_27
  {
    union
    {
      struct // _TAG_UNNAMED_28
      {
        union
        {
          /* 0x0040 */ struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
          /* 0x0040 */ void* DriverContext[4];
        }; /* size: 0x0010 */
        /* 0x0050 */ struct _ETHREAD* Thread;
        /* 0x0054 */ char* AuxiliaryBuffer;
        /* 0x0058 */ struct _LIST_ENTRY ListEntry;
        union
        {
          /* 0x0060 */ struct _IO_STACK_LOCATION* CurrentStackLocation;
          /* 0x0060 */ unsigned long PacketType;
        }; /* size: 0x0004 */
        /* 0x0064 */ struct _FILE_OBJECT* OriginalFileObject;
      } /* size: 0x0028 */ Overlay;
      /* 0x0040 */ struct _KAPC Apc;
      /* 0x0040 */ void* CompletionKey;
    }; /* size: 0x0030 */
  } /* size: 0x0030 */ Tail;
} IRP, *PIRP; /* size: 0x0070 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0004 */ short Size;
  /* 0x0006 */ short MdlFlags;
  /* 0x0008 */ struct _EPROCESS* Process;
  /* 0x000c */ void* MappedSystemVa;
  /* 0x0010 */ void* StartVa;
  /* 0x0014 */ unsigned long ByteCount;
  /* 0x0018 */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x001c */

struct _EPROCESS;

typedef struct _EXCEPTION_RECORD
{
  /* 0x0000 */ long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x000c */ void* ExceptionAddress;
  /* 0x0010 */ unsigned long NumberParameters;
  /* 0x0014 */ unsigned long ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD; /* size: 0x0050 */

typedef struct _WAIT_CONTEXT_BLOCK
{
  /* 0x0000 */ struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
  /* 0x0010 */ void* DeviceRoutine /* function */;
  /* 0x0014 */ void* DeviceContext;
  /* 0x0018 */ unsigned long NumberOfMapRegisters;
  /* 0x001c */ void* DeviceObject;
  /* 0x0020 */ void* CurrentIrp;
  /* 0x0024 */ struct _KDPC* BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK; /* size: 0x0028 */

typedef struct _KDEVICE_QUEUE
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _LIST_ENTRY DeviceListHead;
  /* 0x000c */ unsigned long Lock;
  /* 0x0010 */ unsigned char Busy;
  /* 0x0011 */ char __PADDING__[3];
} KDEVICE_QUEUE, *PKDEVICE_QUEUE; /* size: 0x0014 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _DEVICE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ long ReferenceCount;
  /* 0x0008 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x000c */ struct _DEVICE_OBJECT* NextDevice;
  /* 0x0010 */ struct _DEVICE_OBJECT* AttachedDevice;
  /* 0x0014 */ struct _IRP* CurrentIrp;
  /* 0x0018 */ struct _IO_TIMER* Timer;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ unsigned long Characteristics;
  /* 0x0024 */ struct _VPB* Vpb;
  /* 0x0028 */ void* DeviceExtension;
  /* 0x002c */ unsigned long DeviceType;
  /* 0x0030 */ char StackSize;
  /* 0x0031 */ char Padding_2[3];
  union // _TAG_UNNAMED_29
  {
    union
    {
      /* 0x0034 */ struct _LIST_ENTRY ListEntry;
      /* 0x0034 */ struct _WAIT_CONTEXT_BLOCK Wcb;
    }; /* size: 0x0028 */
  } /* size: 0x0028 */ Queue;
  /* 0x005c */ unsigned long AlignmentRequirement;
  /* 0x0060 */ struct _KDEVICE_QUEUE DeviceQueue;
  /* 0x0074 */ struct _KDPC Dpc;
  /* 0x0094 */ unsigned long ActiveThreadCount;
  /* 0x0098 */ void* SecurityDescriptor;
  /* 0x009c */ struct _KEVENT DeviceLock;
  /* 0x00ac */ unsigned short SectorSize;
  /* 0x00ae */ unsigned short Spare1;
  /* 0x00b0 */ struct _DEVOBJ_EXTENSION* DeviceObjectExtension;
  /* 0x00b4 */ void* Reserved;
} DEVICE_OBJECT, *PDEVICE_OBJECT; /* size: 0x00b8 */

typedef struct _DRIVER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ void* DriverStart;
  /* 0x0010 */ unsigned long DriverSize;
  /* 0x0014 */ void* DriverSection;
  /* 0x0018 */ struct _DRIVER_EXTENSION* DriverExtension;
  /* 0x001c */ struct _UNICODE_STRING DriverName;
  /* 0x0024 */ struct _UNICODE_STRING* HardwareDatabase;
  /* 0x0028 */ struct _FAST_IO_DISPATCH* FastIoDispatch;
  /* 0x002c */ void* DriverInit /* function */;
  /* 0x0030 */ void* DriverStartIo /* function */;
  /* 0x0034 */ void* DriverUnload /* function */;
  /* 0x0038 */ void* MajorFunction[28] /* function */;
} DRIVER_OBJECT, *PDRIVER_OBJECT; /* size: 0x00a8 */

typedef struct _DRIVER_EXTENSION
{
  /* 0x0000 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0004 */ void* AddDevice /* function */;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ struct _UNICODE_STRING ServiceKeyName;
} DRIVER_EXTENSION, *PDRIVER_EXTENSION; /* size: 0x0014 */

typedef struct _FLOATING_SAVE_AREA
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
  /* 0x006c */ unsigned long Cr0NpxState;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA; /* size: 0x0070 */

typedef struct _DESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad;
  /* 0x0002 */ unsigned short Limit;
  /* 0x0004 */ unsigned long Base;
} DESCRIPTOR, *PDESCRIPTOR; /* size: 0x0008 */

typedef struct _FAST_IO_DISPATCH
{
  /* 0x0000 */ unsigned long SizeOfFastIoDispatch;
  /* 0x0004 */ void* FastIoCheckIfPossible /* function */;
  /* 0x0008 */ void* FastIoRead /* function */;
  /* 0x000c */ void* FastIoWrite /* function */;
  /* 0x0010 */ void* FastIoQueryBasicInfo /* function */;
  /* 0x0014 */ void* FastIoQueryStandardInfo /* function */;
  /* 0x0018 */ void* FastIoLock /* function */;
  /* 0x001c */ void* FastIoUnlockSingle /* function */;
  /* 0x0020 */ void* FastIoUnlockAll /* function */;
  /* 0x0024 */ void* FastIoUnlockAllByKey /* function */;
  /* 0x0028 */ void* FastIoDeviceControl /* function */;
  /* 0x002c */ void* AcquireFileForNtCreateSection /* function */;
  /* 0x0030 */ void* ReleaseFileForNtCreateSection /* function */;
  /* 0x0034 */ void* FastIoDetachDevice /* function */;
  /* 0x0038 */ void* FastIoQueryNetworkOpenInfo /* function */;
  /* 0x003c */ void* AcquireForModWrite /* function */;
  /* 0x0040 */ void* MdlRead /* function */;
  /* 0x0044 */ void* MdlReadComplete /* function */;
  /* 0x0048 */ void* PrepareMdlWrite /* function */;
  /* 0x004c */ void* MdlWriteComplete /* function */;
  /* 0x0050 */ void* FastIoReadCompressed /* function */;
  /* 0x0054 */ void* FastIoWriteCompressed /* function */;
  /* 0x0058 */ void* MdlReadCompleteCompressed /* function */;
  /* 0x005c */ void* MdlWriteCompleteCompressed /* function */;
  /* 0x0060 */ void* FastIoQueryOpen /* function */;
  /* 0x0064 */ void* ReleaseForModWrite /* function */;
  /* 0x0068 */ void* AcquireForCcFlush /* function */;
  /* 0x006c */ void* ReleaseForCcFlush /* function */;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH; /* size: 0x0070 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Dr0;
  /* 0x0008 */ unsigned long Dr1;
  /* 0x000c */ unsigned long Dr2;
  /* 0x0010 */ unsigned long Dr3;
  /* 0x0014 */ unsigned long Dr6;
  /* 0x0018 */ unsigned long Dr7;
  /* 0x001c */ struct _FLOATING_SAVE_AREA FloatSave;
  /* 0x008c */ unsigned long SegGs;
  /* 0x0090 */ unsigned long SegFs;
  /* 0x0094 */ unsigned long SegEs;
  /* 0x0098 */ unsigned long SegDs;
  /* 0x009c */ unsigned long Edi;
  /* 0x00a0 */ unsigned long Esi;
  /* 0x00a4 */ unsigned long Ebx;
  /* 0x00a8 */ unsigned long Edx;
  /* 0x00ac */ unsigned long Ecx;
  /* 0x00b0 */ unsigned long Eax;
  /* 0x00b4 */ unsigned long Ebp;
  /* 0x00b8 */ unsigned long Eip;
  /* 0x00bc */ unsigned long SegCs;
  /* 0x00c0 */ unsigned long EFlags;
  /* 0x00c4 */ unsigned long Esp;
  /* 0x00c8 */ unsigned long SegSs;
  /* 0x00cc */ unsigned char ExtendedRegisters[512];
} CONTEXT, *PCONTEXT; /* size: 0x02cc */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned long Cr0;
  /* 0x0004 */ unsigned long Cr2;
  /* 0x0008 */ unsigned long Cr3;
  /* 0x000c */ unsigned long Cr4;
  /* 0x0010 */ unsigned long KernelDr0;
  /* 0x0014 */ unsigned long KernelDr1;
  /* 0x0018 */ unsigned long KernelDr2;
  /* 0x001c */ unsigned long KernelDr3;
  /* 0x0020 */ unsigned long KernelDr6;
  /* 0x0024 */ unsigned long KernelDr7;
  /* 0x0028 */ struct _DESCRIPTOR Gdtr;
  /* 0x0030 */ struct _DESCRIPTOR Idtr;
  /* 0x0038 */ unsigned short Tr;
  /* 0x003a */ unsigned short Ldtr;
  /* 0x003c */ unsigned long Reserved[6];
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x0054 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _CONTEXT ContextFrame;
  /* 0x02cc */ struct _KSPECIAL_REGISTERS SpecialRegisters;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x0320 */

typedef struct _FILE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0008 */ struct _VPB* Vpb;
  /* 0x000c */ void* FsContext;
  /* 0x0010 */ void* FsContext2;
  /* 0x0014 */ struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;
  /* 0x0018 */ void* PrivateCacheMap;
  /* 0x001c */ long FinalStatus;
  /* 0x0020 */ struct _FILE_OBJECT* RelatedFileObject;
  /* 0x0024 */ unsigned char LockOperation;
  /* 0x0025 */ unsigned char DeletePending;
  /* 0x0026 */ unsigned char ReadAccess;
  /* 0x0027 */ unsigned char WriteAccess;
  /* 0x0028 */ unsigned char DeleteAccess;
  /* 0x0029 */ unsigned char SharedRead;
  /* 0x002a */ unsigned char SharedWrite;
  /* 0x002b */ unsigned char SharedDelete;
  /* 0x002c */ unsigned long Flags;
  /* 0x0030 */ struct _UNICODE_STRING FileName;
  /* 0x0038 */ union _LARGE_INTEGER CurrentByteOffset;
  /* 0x0040 */ unsigned long Waiters;
  /* 0x0044 */ unsigned long Busy;
  /* 0x0048 */ void* LastLock;
  /* 0x004c */ struct _KEVENT Lock;
  /* 0x005c */ struct _KEVENT Event;
  /* 0x006c */ struct _IO_COMPLETION_CONTEXT* CompletionContext;
  /* 0x0070 */ unsigned long IrpListLock;
  /* 0x0074 */ struct _LIST_ENTRY IrpList;
  /* 0x007c */ void* FileObjectExtension;
} FILE_OBJECT, *PFILE_OBJECT; /* size: 0x0080 */

typedef struct _VPB
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short VolumeLabelLength;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x000c */ struct _DEVICE_OBJECT* RealDevice;
  /* 0x0010 */ unsigned long SerialNumber;
  /* 0x0014 */ unsigned long ReferenceCount;
  /* 0x0018 */ wchar_t VolumeLabel[32];
} VPB, *PVPB; /* size: 0x0058 */

typedef struct _SECTION_OBJECT_POINTERS
{
  /* 0x0000 */ void* DataSectionObject;
  /* 0x0004 */ void* SharedCacheMap;
  /* 0x0008 */ void* ImageSectionObject;
} SECTION_OBJECT_POINTERS, *PSECTION_OBJECT_POINTERS; /* size: 0x000c */

typedef struct _IO_COMPLETION_CONTEXT
{
  /* 0x0000 */ void* Port;
  /* 0x0004 */ void* Key;
} IO_COMPLETION_CONTEXT, *PIO_COMPLETION_CONTEXT; /* size: 0x0008 */

typedef struct _FILE_BASIC_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0020 */ unsigned long FileAttributes;
  /* 0x0024 */ long __PADDING__[1];
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION; /* size: 0x0028 */

typedef struct _FILE_STANDARD_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0008 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0010 */ unsigned long NumberOfLinks;
  /* 0x0014 */ unsigned char DeletePending;
  /* 0x0015 */ unsigned char Directory;
  /* 0x0016 */ char __PADDING__[2];
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION; /* size: 0x0018 */

struct _KPROCESS;

struct _IO_TIMER;

typedef struct _INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ void* Context;
  /* 0x0008 */ void* InterfaceReference /* function */;
  /* 0x000c */ void* InterfaceDereference /* function */;
} INTERFACE, *PINTERFACE; /* size: 0x0010 */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _LUID_AND_ATTRIBUTES
{
  /* 0x0000 */ struct _LUID Luid;
  /* 0x0008 */ unsigned long Attributes;
} LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES; /* size: 0x000c */

typedef struct _PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[1];
} PRIVILEGE_SET, *PPRIVILEGE_SET; /* size: 0x0014 */

typedef struct _FILE_NETWORK_OPEN_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0020 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0028 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0030 */ unsigned long FileAttributes;
  /* 0x0034 */ long __PADDING__[1];
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION; /* size: 0x0038 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned long OwnerThread;
  union
  {
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long IoPriorityBoosted : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long OwnerReferenced : 1; /* bit position: 1 */
      /* 0x0004 */ unsigned long OwnerCount : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0004 */ unsigned long TableSize;
  }; /* size: 0x0004 */
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0008 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0008 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x000c */ short ActiveCount;
  /* 0x000e */ unsigned short Flag;
  /* 0x0010 */ struct _KSEMAPHORE* SharedWaiters;
  /* 0x0014 */ struct _KEVENT* ExclusiveWaiters;
  /* 0x0018 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0020 */ unsigned long ActiveEntries;
  /* 0x0024 */ unsigned long ContentionCount;
  /* 0x0028 */ unsigned long NumberOfSharedWaiters;
  /* 0x002c */ unsigned long NumberOfExclusiveWaiters;
  union
  {
    /* 0x0030 */ void* Address;
    /* 0x0030 */ unsigned long CreatorBackTraceIndex;
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0038 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ long Limit;
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0014 */

struct _SCSI_REQUEST_BLOCK;

typedef union _MCG_STATUS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long RestartIpValid : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long ErrorIpValid : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long MachineCheckInProgress : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned long Reserved1 : 29; /* bit position: 3 */
      }; /* bitfield */
      /* 0x0004 */ unsigned long Reserved2;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCG_STATUS, *PMCG_STATUS; /* size: 0x0008 */

typedef union _MCI_STATUS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short McaErrorCode;
      /* 0x0002 */ unsigned short ModelErrorCode;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long OtherInformation : 23; /* bit position: 0 */
        /* 0x0004 */ unsigned long ActionRequired : 1; /* bit position: 23 */
        /* 0x0004 */ unsigned long Signalling : 1; /* bit position: 24 */
        /* 0x0004 */ unsigned long ContextCorrupt : 1; /* bit position: 25 */
        /* 0x0004 */ unsigned long AddressValid : 1; /* bit position: 26 */
        /* 0x0004 */ unsigned long MiscValid : 1; /* bit position: 27 */
        /* 0x0004 */ unsigned long ErrorEnabled : 1; /* bit position: 28 */
        /* 0x0004 */ unsigned long UncorrectedError : 1; /* bit position: 29 */
        /* 0x0004 */ unsigned long StatusOverFlow : 1; /* bit position: 30 */
        /* 0x0004 */ unsigned long Valid : 1; /* bit position: 31 */
      }; /* bitfield */
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCI_STATUS, *PMCI_STATUS; /* size: 0x0008 */

typedef struct _WHEA_XPF_MCA_SECTION
{
  /* 0x0000 */ unsigned long VersionNumber;
  /* 0x0004 */ enum _WHEA_CPU_VENDOR CpuVendor;
  /* 0x0008 */ union _LARGE_INTEGER Timestamp;
  /* 0x0010 */ unsigned long ProcessorNumber;
  /* 0x0014 */ union _MCG_STATUS GlobalStatus;
  /* 0x001c */ unsigned __int64 InstructionPointer;
  /* 0x0024 */ unsigned long BankNumber;
  /* 0x0028 */ union _MCI_STATUS Status;
  /* 0x0030 */ unsigned __int64 Address;
  /* 0x0038 */ unsigned __int64 Misc;
  /* 0x0040 */ unsigned long ExtendedRegisterCount;
  /* 0x0044 */ unsigned long Reserved2;
  /* 0x0048 */ unsigned __int64 ExtendedRegisters[24];
} WHEA_XPF_MCA_SECTION, *PWHEA_XPF_MCA_SECTION; /* size: 0x0108 */

typedef struct _KSYSTEM_TIME
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long High1Time;
  /* 0x0008 */ long High2Time;
} KSYSTEM_TIME, *PKSYSTEM_TIME; /* size: 0x000c */

struct _COMPRESSED_DATA_INFO;

typedef struct _PROCLOCALSAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ACPIProcessorID;
  /* 0x0003 */ unsigned char APICID;
  /* 0x0004 */ unsigned char APICEID;
  /* 0x0005 */ unsigned char Reserved[3];
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long ACPIProcessorUIDInteger;
  /* 0x0010 */ char ACPIProcessorUIDString[1];
} PROCLOCALSAPIC, *PPROCLOCALSAPIC; /* size: 0x0011 */

typedef struct _DEVOBJ_EXTENSION
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION; /* size: 0x0008 */

typedef struct _IO_STACK_LOCATION
{
  /* 0x0000 */ unsigned char MajorFunction;
  /* 0x0001 */ unsigned char MinorFunction;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char Control;
  union // _TAG_UNNAMED_30
  {
    union
    {
      struct // _TAG_UNNAMED_31
      {
        /* 0x0004 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0008 */ unsigned long Options;
        /* 0x000c */ unsigned short FileAttributes;
        /* 0x000e */ unsigned short ShareAccess;
        /* 0x0010 */ unsigned long EaLength;
      } /* size: 0x0010 */ Create;
      struct // _TAG_UNNAMED_32
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long Key;
        /* 0x000c */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0010 */ Read;
      struct // _TAG_UNNAMED_32
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long Key;
        /* 0x000c */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0010 */ Write;
      struct // _TAG_UNNAMED_33
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ struct _UNICODE_STRING* FileName;
        /* 0x000c */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0010 */ unsigned long FileIndex;
      } /* size: 0x0010 */ QueryDirectory;
      struct // _TAG_UNNAMED_34
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long CompletionFilter;
      } /* size: 0x0008 */ NotifyDirectory;
      struct // _TAG_UNNAMED_35
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
      } /* size: 0x0008 */ QueryFile;
      struct // _TAG_UNNAMED_36
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x000c */ struct _FILE_OBJECT* FileObject;
        union
        {
          struct
          {
            /* 0x0010 */ unsigned char ReplaceIfExists;
            /* 0x0011 */ unsigned char AdvanceOnly;
          }; /* size: 0x0002 */
          /* 0x0010 */ unsigned long ClusterCount;
          /* 0x0010 */ void* DeleteHandle;
        }; /* size: 0x0004 */
      } /* size: 0x0010 */ SetFile;
      struct // _TAG_UNNAMED_37
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ void* EaList;
        /* 0x000c */ unsigned long EaListLength;
        /* 0x0010 */ unsigned long EaIndex;
      } /* size: 0x0010 */ QueryEa;
      struct // _TAG_UNNAMED_38
      {
        /* 0x0004 */ unsigned long Length;
      } /* size: 0x0004 */ SetEa;
      struct // _TAG_UNNAMED_39
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FSINFOCLASS FsInformationClass;
      } /* size: 0x0008 */ QueryVolume;
      struct // _TAG_UNNAMED_39
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FSINFOCLASS FsInformationClass;
      } /* size: 0x0008 */ SetVolume;
      struct // _TAG_UNNAMED_40
      {
        /* 0x0004 */ unsigned long OutputBufferLength;
        /* 0x0008 */ unsigned long InputBufferLength;
        /* 0x000c */ unsigned long FsControlCode;
        /* 0x0010 */ void* Type3InputBuffer;
      } /* size: 0x0010 */ FileSystemControl;
      struct // _TAG_UNNAMED_41
      {
        /* 0x0004 */ union _LARGE_INTEGER* Length;
        /* 0x0008 */ unsigned long Key;
        /* 0x000c */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0010 */ LockControl;
      struct // _TAG_UNNAMED_42
      {
        /* 0x0004 */ unsigned long OutputBufferLength;
        /* 0x0008 */ unsigned long InputBufferLength;
        /* 0x000c */ unsigned long IoControlCode;
        /* 0x0010 */ void* Type3InputBuffer;
      } /* size: 0x0010 */ DeviceIoControl;
      struct // _TAG_UNNAMED_43
      {
        /* 0x0004 */ unsigned long SecurityInformation;
        /* 0x0008 */ unsigned long Length;
      } /* size: 0x0008 */ QuerySecurity;
      struct // _TAG_UNNAMED_44
      {
        /* 0x0004 */ unsigned long SecurityInformation;
        /* 0x0008 */ void* SecurityDescriptor;
      } /* size: 0x0008 */ SetSecurity;
      struct // _TAG_UNNAMED_45
      {
        /* 0x0004 */ struct _VPB* Vpb;
        /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0008 */ MountVolume;
      struct // _TAG_UNNAMED_45
      {
        /* 0x0004 */ struct _VPB* Vpb;
        /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0008 */ VerifyVolume;
      struct // _TAG_UNNAMED_46
      {
        /* 0x0004 */ struct _SCSI_REQUEST_BLOCK* Srb;
      } /* size: 0x0004 */ Scsi;
      struct // _TAG_UNNAMED_47
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ void* StartSid;
        /* 0x000c */ struct _FILE_GET_QUOTA_INFORMATION* SidList;
        /* 0x0010 */ unsigned long SidListLength;
      } /* size: 0x0010 */ QueryQuota;
      struct // _TAG_UNNAMED_38
      {
        /* 0x0004 */ unsigned long Length;
      } /* size: 0x0004 */ SetQuota;
      struct // _TAG_UNNAMED_48
      {
        /* 0x0004 */ enum _DEVICE_RELATION_TYPE Type;
      } /* size: 0x0004 */ QueryDeviceRelations;
      struct // _TAG_UNNAMED_49
      {
        /* 0x0004 */ const struct _GUID* InterfaceType;
        /* 0x0008 */ unsigned short Size;
        /* 0x000a */ unsigned short Version;
        /* 0x000c */ struct _INTERFACE* Interface;
        /* 0x0010 */ void* InterfaceSpecificData;
      } /* size: 0x0010 */ QueryInterface;
      struct // _TAG_UNNAMED_50
      {
        /* 0x0004 */ struct _DEVICE_CAPABILITIES* Capabilities;
      } /* size: 0x0004 */ DeviceCapabilities;
      struct // _TAG_UNNAMED_51
      {
        /* 0x0004 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList;
      } /* size: 0x0004 */ FilterResourceRequirements;
      struct // _TAG_UNNAMED_52
      {
        /* 0x0004 */ unsigned long WhichSpace;
        /* 0x0008 */ void* Buffer;
        /* 0x000c */ unsigned long Offset;
        /* 0x0010 */ unsigned long Length;
      } /* size: 0x0010 */ ReadWriteConfig;
      struct // _TAG_UNNAMED_53
      {
        /* 0x0004 */ unsigned char Lock;
      } /* size: 0x0001 */ SetLock;
      struct // _TAG_UNNAMED_54
      {
        /* 0x0004 */ enum BUS_QUERY_ID_TYPE IdType;
      } /* size: 0x0004 */ QueryId;
      struct // _TAG_UNNAMED_55
      {
        /* 0x0004 */ enum DEVICE_TEXT_TYPE DeviceTextType;
        /* 0x0008 */ unsigned long LocaleId;
      } /* size: 0x0008 */ QueryDeviceText;
      struct // _TAG_UNNAMED_56
      {
        /* 0x0004 */ unsigned char InPath;
        /* 0x0005 */ unsigned char Reserved[3];
        /* 0x0008 */ enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
      } /* size: 0x0008 */ UsageNotification;
      struct // _TAG_UNNAMED_57
      {
        /* 0x0004 */ enum _SYSTEM_POWER_STATE PowerState;
      } /* size: 0x0004 */ WaitWake;
      struct // _TAG_UNNAMED_58
      {
        /* 0x0004 */ struct _POWER_SEQUENCE* PowerSequence;
      } /* size: 0x0004 */ PowerSequence;
      struct // _TAG_UNNAMED_59
      {
        union
        {
          /* 0x0004 */ unsigned long SystemContext;
          /* 0x0004 */ struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
        }; /* size: 0x0004 */
        /* 0x0008 */ enum _POWER_STATE_TYPE Type;
        /* 0x000c */ union _POWER_STATE State;
        /* 0x0010 */ enum POWER_ACTION ShutdownType;
      } /* size: 0x0010 */ Power;
      struct // _TAG_UNNAMED_60
      {
        /* 0x0004 */ struct _CM_RESOURCE_LIST* AllocatedResources;
        /* 0x0008 */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
      } /* size: 0x0008 */ StartDevice;
      struct // _TAG_UNNAMED_61
      {
        /* 0x0004 */ unsigned long ProviderId;
        /* 0x0008 */ void* DataPath;
        /* 0x000c */ unsigned long BufferSize;
        /* 0x0010 */ void* Buffer;
      } /* size: 0x0010 */ WMI;
      struct // _TAG_UNNAMED_62
      {
        /* 0x0004 */ void* Argument1;
        /* 0x0008 */ void* Argument2;
        /* 0x000c */ void* Argument3;
        /* 0x0010 */ void* Argument4;
      } /* size: 0x0010 */ Others;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Parameters;
  /* 0x0014 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0018 */ struct _FILE_OBJECT* FileObject;
  /* 0x001c */ void* CompletionRoutine /* function */;
  /* 0x0020 */ void* Context;
} IO_STACK_LOCATION, *PIO_STACK_LOCATION; /* size: 0x0024 */

typedef struct _FACS
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long HardwareSignature;
  /* 0x000c */ unsigned long pFirmwareWakingVector;
  /* 0x0010 */ unsigned long GlobalLock;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ union _LARGE_INTEGER x_FirmwareWakingVector;
  /* 0x0020 */ unsigned char version;
  /* 0x0021 */ unsigned char Reserved[31];
} FACS, *PFACS; /* size: 0x0040 */

typedef struct _IO_SECURITY_CONTEXT
{
  /* 0x0000 */ struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
  /* 0x0004 */ struct _ACCESS_STATE* AccessState;
  /* 0x0008 */ unsigned long DesiredAccess;
  /* 0x000c */ unsigned long FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT; /* size: 0x0010 */

typedef struct _SECURITY_QUALITY_OF_SERVICE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ unsigned char ContextTrackingMode;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x000a */ char __PADDING__[2];
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE; /* size: 0x000c */

typedef struct _SECURITY_SUBJECT_CONTEXT
{
  /* 0x0000 */ void* ClientToken;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ void* PrimaryToken;
  /* 0x000c */ void* ProcessAuditId;
} SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT; /* size: 0x0010 */

typedef struct _INITIAL_PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[3];
} INITIAL_PRIVILEGE_SET, *PINITIAL_PRIVILEGE_SET; /* size: 0x002c */

typedef struct _ACCESS_STATE
{
  /* 0x0000 */ struct _LUID OperationID;
  /* 0x0008 */ unsigned char SecurityEvaluated;
  /* 0x0009 */ unsigned char GenerateAudit;
  /* 0x000a */ unsigned char GenerateOnClose;
  /* 0x000b */ unsigned char PrivilegesAllocated;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long RemainingDesiredAccess;
  /* 0x0014 */ unsigned long PreviouslyGrantedAccess;
  /* 0x0018 */ unsigned long OriginalDesiredAccess;
  /* 0x001c */ struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
  /* 0x002c */ void* SecurityDescriptor;
  /* 0x0030 */ void* AuxData;
  union // _TAG_UNNAMED_63
  {
    union
    {
      /* 0x0034 */ struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
      /* 0x0034 */ struct _PRIVILEGE_SET PrivilegeSet;
    }; /* size: 0x002c */
  } /* size: 0x002c */ Privileges;
  /* 0x0060 */ unsigned char AuditPrivileges;
  /* 0x0061 */ char Padding_3[3];
  /* 0x0064 */ struct _UNICODE_STRING ObjectName;
  /* 0x006c */ struct _UNICODE_STRING ObjectTypeName;
} ACCESS_STATE, *PACCESS_STATE; /* size: 0x0074 */

typedef struct _XSTATE_FEATURE
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE; /* size: 0x0008 */

typedef struct _DESCRIPTION_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned char Revision;
  /* 0x0009 */ unsigned char Checksum;
  /* 0x000a */ char OEMID[6];
  /* 0x0010 */ char OEMTableID[8];
  /* 0x0018 */ unsigned long OEMRevision;
  /* 0x001c */ char CreatorID[4];
  /* 0x0020 */ unsigned long CreatorRev;
} DESCRIPTION_HEADER, *PDESCRIPTION_HEADER; /* size: 0x0024 */

struct HalpMpInfo
{
  /* 0x0000 */ unsigned long ApicVersion;
  /* 0x0004 */ unsigned long ProcessorCount;
  /* 0x0008 */ unsigned long DynamicProcessorCount;
  /* 0x000c */ unsigned long NtProcessors;
  /* 0x0010 */ unsigned long StartedPackages;
  /* 0x0014 */ unsigned long BusCount;
  /* 0x0018 */ unsigned long IoApicCount;
  /* 0x001c */ unsigned long IoApicIntiCount;
  /* 0x0020 */ unsigned long LintiCount;
  /* 0x0024 */ unsigned long IMCRPresent;
  /* 0x0028 */ unsigned long LocalApicBase;
  /* 0x002c */ unsigned long** IoApicBase;
  /* 0x0030 */ unsigned long* IoApicPhys;
  /* 0x0034 */ unsigned long* IoApicIntiBase;
}; /* size: 0x0038 */

struct _FILE_GET_QUOTA_INFORMATION;

typedef struct _DEVICE_CAPABILITIES
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long DeviceD1 : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned long DeviceD2 : 1; /* bit position: 1 */
    /* 0x0004 */ unsigned long LockSupported : 1; /* bit position: 2 */
    /* 0x0004 */ unsigned long EjectSupported : 1; /* bit position: 3 */
    /* 0x0004 */ unsigned long Removable : 1; /* bit position: 4 */
    /* 0x0004 */ unsigned long DockDevice : 1; /* bit position: 5 */
    /* 0x0004 */ unsigned long UniqueID : 1; /* bit position: 6 */
    /* 0x0004 */ unsigned long SilentInstall : 1; /* bit position: 7 */
    /* 0x0004 */ unsigned long RawDeviceOK : 1; /* bit position: 8 */
    /* 0x0004 */ unsigned long SurpriseRemovalOK : 1; /* bit position: 9 */
    /* 0x0004 */ unsigned long WakeFromD0 : 1; /* bit position: 10 */
    /* 0x0004 */ unsigned long WakeFromD1 : 1; /* bit position: 11 */
    /* 0x0004 */ unsigned long WakeFromD2 : 1; /* bit position: 12 */
    /* 0x0004 */ unsigned long WakeFromD3 : 1; /* bit position: 13 */
    /* 0x0004 */ unsigned long HardwareDisabled : 1; /* bit position: 14 */
    /* 0x0004 */ unsigned long NonDynamic : 1; /* bit position: 15 */
    /* 0x0004 */ unsigned long WarmEjectSupported : 1; /* bit position: 16 */
    /* 0x0004 */ unsigned long NoDisplayInUI : 1; /* bit position: 17 */
    /* 0x0004 */ unsigned long Reserved1 : 1; /* bit position: 18 */
    /* 0x0004 */ unsigned long Reserved : 13; /* bit position: 19 */
  }; /* bitfield */
  /* 0x0008 */ unsigned long Address;
  /* 0x000c */ unsigned long UINumber;
  /* 0x0010 */ enum _DEVICE_POWER_STATE DeviceState[7];
  /* 0x002c */ enum _SYSTEM_POWER_STATE SystemWake;
  /* 0x0030 */ enum _DEVICE_POWER_STATE DeviceWake;
  /* 0x0034 */ unsigned long D1Latency;
  /* 0x0038 */ unsigned long D2Latency;
  /* 0x003c */ unsigned long D3Latency;
} DEVICE_CAPABILITIES, *PDEVICE_CAPABILITIES; /* size: 0x0040 */

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST
{
  /* 0x0000 */ unsigned long ListSize;
  /* 0x0004 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0008 */ unsigned long BusNumber;
  /* 0x000c */ unsigned long SlotNumber;
  /* 0x0010 */ unsigned long Reserved[3];
  /* 0x001c */ unsigned long AlternativeLists;
  /* 0x0020 */ struct _IO_RESOURCE_LIST List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST; /* size: 0x0048 */

typedef struct _KiIoAccessMap
{
  /* 0x0000 */ unsigned char DirectionMap[32];
  /* 0x0020 */ unsigned char IoMap[8196];
} KiIoAccessMap, *PKiIoAccessMap; /* size: 0x2024 */

struct _OBJECT_TYPE;

typedef struct _POWER_SEQUENCE
{
  /* 0x0000 */ unsigned long SequenceD1;
  /* 0x0004 */ unsigned long SequenceD2;
  /* 0x0008 */ unsigned long SequenceD3;
} POWER_SEQUENCE, *PPOWER_SEQUENCE; /* size: 0x000c */

typedef struct _CM_RESOURCE_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, *PCM_RESOURCE_LIST; /* size: 0x0024 */

typedef struct _KGDTENTRY
{
  /* 0x0000 */ unsigned short LimitLow;
  /* 0x0002 */ unsigned short BaseLow;
  union // _TAG_UNNAMED_64
  {
    union
    {
      struct // _TAG_UNNAMED_65
      {
        /* 0x0004 */ unsigned char BaseMid;
        /* 0x0005 */ unsigned char Flags1;
        /* 0x0006 */ unsigned char Flags2;
        /* 0x0007 */ unsigned char BaseHi;
      } /* size: 0x0004 */ Bytes;
      struct // _TAG_UNNAMED_66
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long BaseMid : 8; /* bit position: 0 */
          /* 0x0004 */ unsigned long Type : 5; /* bit position: 8 */
          /* 0x0004 */ unsigned long Dpl : 2; /* bit position: 13 */
          /* 0x0004 */ unsigned long Pres : 1; /* bit position: 15 */
          /* 0x0004 */ unsigned long LimitHi : 4; /* bit position: 16 */
          /* 0x0004 */ unsigned long Sys : 1; /* bit position: 20 */
          /* 0x0004 */ unsigned long Reserved_0 : 1; /* bit position: 21 */
          /* 0x0004 */ unsigned long Default_Big : 1; /* bit position: 22 */
          /* 0x0004 */ unsigned long Granularity : 1; /* bit position: 23 */
          /* 0x0004 */ unsigned long BaseHi : 8; /* bit position: 24 */
        }; /* bitfield */
      } /* size: 0x0004 */ Bits;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ HighWord;
} KGDTENTRY, *PKGDTENTRY; /* size: 0x0008 */

typedef struct _SCATTER_GATHER_ELEMENT
{
  /* 0x0000 */ union _LARGE_INTEGER Address;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ unsigned long Reserved;
} SCATTER_GATHER_ELEMENT, *PSCATTER_GATHER_ELEMENT; /* size: 0x0010 */

typedef struct _SCATTER_GATHER_LIST
{
  /* 0x0000 */ unsigned long NumberOfElements;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ struct _SCATTER_GATHER_ELEMENT* Elements /* zero-length array */;
} SCATTER_GATHER_LIST, *PSCATTER_GATHER_LIST; /* size: 0x0008 */

typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY* ChainHead;
  /* 0x0004 */ struct _LIST_ENTRY* PrevLinkage;
  /* 0x0008 */ unsigned long Signature;
} RTL_DYNAMIC_HASH_TABLE_CONTEXT, *PRTL_DYNAMIC_HASH_TABLE_CONTEXT; /* size: 0x000c */

struct _ECP_LIST;

typedef struct _TXN_PARAMETER_BLOCK
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short TxFsContext;
  /* 0x0004 */ void* TransactionObject;
} TXN_PARAMETER_BLOCK, *PTXN_PARAMETER_BLOCK; /* size: 0x0008 */

typedef struct _LOCAL_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ProcessorID;
  /* 0x0003 */ unsigned short Flags;
  /* 0x0005 */ unsigned char LINTIN;
} LOCAL_NMISOURCE, *PLOCAL_NMISOURCE; /* size: 0x0006 */

typedef struct _WHEA_ERROR_RECORD
{
  /* 0x0000 */ struct _WHEA_ERROR_RECORD_HEADER Header;
  /* 0x0080 */ struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
} WHEA_ERROR_RECORD, *PWHEA_ERROR_RECORD; /* size: 0x00c8 */

typedef struct _EXCEPTION_REGISTRATION_RECORD
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* Next;
  /* 0x0004 */ void* Handler /* function */;
} EXCEPTION_REGISTRATION_RECORD, *PEXCEPTION_REGISTRATION_RECORD; /* size: 0x0008 */

typedef struct _KSPIN_LOCK_QUEUE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE* volatile Next;
  /* 0x0004 */ unsigned long* volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE; /* size: 0x0008 */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned short MinorVersion;
  /* 0x0002 */ unsigned short MajorVersion;
  /* 0x0004 */ struct _KTHREAD* CurrentThread;
  /* 0x0008 */ struct _KTHREAD* NextThread;
  /* 0x000c */ struct _KTHREAD* IdleThread;
  /* 0x0010 */ unsigned char LegacyNumber;
  /* 0x0011 */ unsigned char NestingLevel;
  /* 0x0012 */ unsigned short BuildType;
  /* 0x0014 */ char CpuType;
  /* 0x0015 */ char CpuID;
  union
  {
    /* 0x0016 */ unsigned short CpuStep;
    struct
    {
      /* 0x0016 */ unsigned char CpuStepping;
      /* 0x0017 */ unsigned char CpuModel;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0018 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x0338 */ unsigned long KernelReserved[16];
  /* 0x0378 */ unsigned long HalReserved[16];
  /* 0x03b8 */ unsigned long CFlushSize;
  /* 0x03bc */ unsigned char CoresPerPhysicalProcessor;
  /* 0x03bd */ unsigned char LogicalProcessorsPerCore;
  /* 0x03be */ unsigned char PrcbPad0[2];
  /* 0x03c0 */ unsigned long MHz;
  /* 0x03c4 */ unsigned char CpuVendor;
  /* 0x03c5 */ unsigned char GroupIndex;
  /* 0x03c6 */ unsigned short Group;
  /* 0x03c8 */ unsigned long GroupSetMember;
  /* 0x03cc */ unsigned long Number;
  /* 0x03d0 */ unsigned char PrcbPad1[72];
  /* 0x0418 */ struct _KSPIN_LOCK_QUEUE LockQueue[17];
} KPRCB, *PKPRCB; /* size: 0x04a0 */

typedef struct _KIDTENTRY
{
  /* 0x0000 */ unsigned short Offset;
  /* 0x0002 */ unsigned short Selector;
  /* 0x0004 */ unsigned short Access;
  /* 0x0006 */ unsigned short ExtendedOffset;
} KIDTENTRY, *PKIDTENTRY; /* size: 0x0008 */

typedef struct _KTSS
{
  /* 0x0000 */ unsigned short Backlink;
  /* 0x0002 */ unsigned short Reserved0;
  /* 0x0004 */ unsigned long Esp0;
  /* 0x0008 */ unsigned short Ss0;
  /* 0x000a */ unsigned short Reserved1;
  /* 0x000c */ unsigned long NotUsed1[4];
  /* 0x001c */ unsigned long CR3;
  /* 0x0020 */ unsigned long Eip;
  /* 0x0024 */ unsigned long EFlags;
  /* 0x0028 */ unsigned long Eax;
  /* 0x002c */ unsigned long Ecx;
  /* 0x0030 */ unsigned long Edx;
  /* 0x0034 */ unsigned long Ebx;
  /* 0x0038 */ unsigned long Esp;
  /* 0x003c */ unsigned long Ebp;
  /* 0x0040 */ unsigned long Esi;
  /* 0x0044 */ unsigned long Edi;
  /* 0x0048 */ unsigned short Es;
  /* 0x004a */ unsigned short Reserved2;
  /* 0x004c */ unsigned short Cs;
  /* 0x004e */ unsigned short Reserved3;
  /* 0x0050 */ unsigned short Ss;
  /* 0x0052 */ unsigned short Reserved4;
  /* 0x0054 */ unsigned short Ds;
  /* 0x0056 */ unsigned short Reserved5;
  /* 0x0058 */ unsigned short Fs;
  /* 0x005a */ unsigned short Reserved6;
  /* 0x005c */ unsigned short Gs;
  /* 0x005e */ unsigned short Reserved7;
  /* 0x0060 */ unsigned short LDT;
  /* 0x0062 */ unsigned short Reserved8;
  /* 0x0064 */ unsigned short Flags;
  /* 0x0066 */ unsigned short IoMapBase;
  /* 0x0068 */ struct _KiIoAccessMap IoMaps[1];
  /* 0x208c */ unsigned char IntDirectionMap[32];
} KTSS, *PKTSS; /* size: 0x20ac */

typedef struct _OBJECT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ void* RootDirectory;
  /* 0x0008 */ struct _UNICODE_STRING* ObjectName;
  /* 0x000c */ unsigned long Attributes;
  /* 0x0010 */ void* SecurityDescriptor;
  /* 0x0014 */ void* SecurityQualityOfService;
} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES; /* size: 0x0018 */

typedef struct _DMA_ADAPTER
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _DMA_OPERATIONS* DmaOperations;
} DMA_ADAPTER, *PDMA_ADAPTER; /* size: 0x0008 */

typedef struct _ADAPTER_OBJECT
{
  /* 0x0000 */ struct _DMA_ADAPTER DmaHeader;
  /* 0x0008 */ struct _ADAPTER_OBJECT* MasterAdapter;
  /* 0x000c */ unsigned long MapRegistersPerChannel;
  /* 0x0010 */ void* AdapterBaseVa;
  /* 0x0014 */ void* MapRegisterBase;
  /* 0x0018 */ unsigned long NumberOfMapRegisters;
  /* 0x001c */ unsigned long CommittedMapRegisters;
  /* 0x0020 */ struct _WAIT_CONTEXT_BLOCK* CurrentWcb;
  /* 0x0024 */ struct _KDEVICE_QUEUE ChannelWaitQueue;
  /* 0x0038 */ struct _KDEVICE_QUEUE* RegisterWaitQueue;
  /* 0x003c */ struct _LIST_ENTRY AdapterQueue;
  /* 0x0044 */ unsigned long SpinLock;
  /* 0x0048 */ struct _RTL_BITMAP* MapRegisters;
  /* 0x004c */ unsigned char* PagePort;
  /* 0x0050 */ unsigned char ChannelNumber;
  /* 0x0051 */ unsigned char AdapterNumber;
  /* 0x0052 */ unsigned short DmaPortAddress;
  /* 0x0054 */ unsigned char AdapterMode;
  /* 0x0055 */ unsigned char NeedsMapRegisters;
  /* 0x0056 */ unsigned char MasterDevice;
  /* 0x0057 */ unsigned char Width16Bits;
  /* 0x0058 */ unsigned char ScatterGather;
  /* 0x0059 */ unsigned char IgnoreCount;
  /* 0x005a */ unsigned char Dma32BitAddresses;
  /* 0x005b */ unsigned char Dma64BitAddresses;
  /* 0x005c */ unsigned char LegacyAdapter;
  /* 0x005d */ char Padding_4[3];
  /* 0x0060 */ struct _LIST_ENTRY AdapterList;
} ADAPTER_OBJECT, *PADAPTER_OBJECT; /* size: 0x0068 */

typedef struct _DMA_OPERATIONS
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ void* PutDmaAdapter /* function */;
  /* 0x0008 */ void* AllocateCommonBuffer /* function */;
  /* 0x000c */ void* FreeCommonBuffer /* function */;
  /* 0x0010 */ void* AllocateAdapterChannel /* function */;
  /* 0x0014 */ void* FlushAdapterBuffers /* function */;
  /* 0x0018 */ void* FreeAdapterChannel /* function */;
  /* 0x001c */ void* FreeMapRegisters /* function */;
  /* 0x0020 */ void* MapTransfer /* function */;
  /* 0x0024 */ void* GetDmaAlignment /* function */;
  /* 0x0028 */ void* ReadDmaCounter /* function */;
  /* 0x002c */ void* GetScatterGatherList /* function */;
  /* 0x0030 */ void* PutScatterGatherList /* function */;
  /* 0x0034 */ void* CalculateScatterGatherList /* function */;
  /* 0x0038 */ void* BuildScatterGatherList /* function */;
  /* 0x003c */ void* BuildMdlFromScatterGatherList /* function */;
} DMA_OPERATIONS, *PDMA_OPERATIONS; /* size: 0x0040 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _XSTATE_CONFIGURATION
{
  /* 0x0000 */ unsigned __int64 EnabledFeatures;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long OptimizedSave : 1; /* bit position: 0 */
  /* 0x0010 */ struct _XSTATE_FEATURE Features[64];
} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION; /* size: 0x0210 */

typedef struct _KUSER_SHARED_DATA
{
  /* 0x0000 */ unsigned long TickCountLowDeprecated;
  /* 0x0004 */ unsigned long TickCountMultiplier;
  /* 0x0008 */ volatile struct _KSYSTEM_TIME InterruptTime;
  /* 0x0014 */ volatile struct _KSYSTEM_TIME SystemTime;
  /* 0x0020 */ volatile struct _KSYSTEM_TIME TimeZoneBias;
  /* 0x002c */ unsigned short ImageNumberLow;
  /* 0x002e */ unsigned short ImageNumberHigh;
  /* 0x0030 */ wchar_t NtSystemRoot[260];
  /* 0x0238 */ unsigned long MaxStackTraceDepth;
  /* 0x023c */ unsigned long CryptoExponent;
  /* 0x0240 */ unsigned long TimeZoneId;
  /* 0x0244 */ unsigned long LargePageMinimum;
  /* 0x0248 */ unsigned long Reserved2[7];
  /* 0x0264 */ enum _NT_PRODUCT_TYPE NtProductType;
  /* 0x0268 */ unsigned char ProductTypeIsValid;
  /* 0x0269 */ char Padding_5[3];
  /* 0x026c */ unsigned long NtMajorVersion;
  /* 0x0270 */ unsigned long NtMinorVersion;
  /* 0x0274 */ unsigned char ProcessorFeatures[64];
  /* 0x02b4 */ unsigned long Reserved1;
  /* 0x02b8 */ unsigned long Reserved3;
  /* 0x02bc */ volatile unsigned long TimeSlip;
  /* 0x02c0 */ enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
  /* 0x02c4 */ unsigned long AltArchitecturePad[1];
  /* 0x02c8 */ union _LARGE_INTEGER SystemExpirationDate;
  /* 0x02d0 */ unsigned long SuiteMask;
  /* 0x02d4 */ unsigned char KdDebuggerEnabled;
  /* 0x02d5 */ unsigned char NXSupportPolicy;
  /* 0x02d6 */ char Padding_6[2];
  /* 0x02d8 */ volatile unsigned long ActiveConsoleId;
  /* 0x02dc */ volatile unsigned long DismountCount;
  /* 0x02e0 */ unsigned long ComPlusPackage;
  /* 0x02e4 */ unsigned long LastSystemRITEventTickCount;
  /* 0x02e8 */ unsigned long NumberOfPhysicalPages;
  /* 0x02ec */ unsigned char SafeBootMode;
  union
  {
    /* 0x02ed */ unsigned char TscQpcData;
    struct /* bitfield */
    {
      /* 0x02ed */ unsigned char TscQpcEnabled : 1; /* bit position: 0 */
      /* 0x02ed */ unsigned char TscQpcSpareFlag : 1; /* bit position: 1 */
      /* 0x02ed */ unsigned char TscQpcShift : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x02ee */ unsigned char TscQpcPad[2];
  union
  {
    /* 0x02f0 */ unsigned long SharedDataFlags;
    struct /* bitfield */
    {
      /* 0x02f0 */ unsigned long DbgErrorPortPresent : 1; /* bit position: 0 */
      /* 0x02f0 */ unsigned long DbgElevationEnabled : 1; /* bit position: 1 */
      /* 0x02f0 */ unsigned long DbgVirtEnabled : 1; /* bit position: 2 */
      /* 0x02f0 */ unsigned long DbgInstallerDetectEnabled : 1; /* bit position: 3 */
      /* 0x02f0 */ unsigned long DbgSystemDllRelocated : 1; /* bit position: 4 */
      /* 0x02f0 */ unsigned long DbgDynProcessorEnabled : 1; /* bit position: 5 */
      /* 0x02f0 */ unsigned long DbgSEHValidationEnabled : 1; /* bit position: 6 */
      /* 0x02f0 */ unsigned long SpareBits : 25; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x02f4 */ unsigned long DataFlagsPad[1];
  /* 0x02f8 */ unsigned __int64 TestRetInstruction;
  /* 0x0300 */ unsigned long SystemCall;
  /* 0x0304 */ unsigned long SystemCallReturn;
  /* 0x0308 */ unsigned __int64 SystemCallPad[3];
  union
  {
    /* 0x0320 */ volatile struct _KSYSTEM_TIME TickCount;
    /* 0x0320 */ volatile unsigned __int64 TickCountQuad;
    /* 0x0320 */ unsigned long ReservedTickCountOverlay[3];
  }; /* size: 0x000c */
  /* 0x032c */ unsigned long TickCountPad[1];
  /* 0x0330 */ unsigned long Cookie;
  /* 0x0334 */ unsigned long CookiePad[1];
  /* 0x0338 */ __int64 ConsoleSessionForegroundProcessId;
  /* 0x0340 */ unsigned long Wow64SharedInformation[16];
  /* 0x0380 */ unsigned short UserModeGlobalLogger[16];
  /* 0x03a0 */ unsigned long ImageFileExecutionOptions;
  /* 0x03a4 */ unsigned long LangGenerationCount;
  /* 0x03a8 */ unsigned __int64 Reserved5;
  /* 0x03b0 */ volatile unsigned __int64 InterruptTimeBias;
  /* 0x03b8 */ volatile unsigned __int64 TscQpcBias;
  /* 0x03c0 */ volatile unsigned long ActiveProcessorCount;
  /* 0x03c4 */ volatile unsigned short ActiveGroupCount;
  /* 0x03c6 */ unsigned short Reserved4;
  /* 0x03c8 */ volatile unsigned long AitSamplingValue;
  /* 0x03cc */ volatile unsigned long AppCompatFlag;
  /* 0x03d0 */ unsigned __int64 SystemDllNativeRelocation;
  /* 0x03d8 */ unsigned long SystemDllWowRelocation;
  /* 0x03dc */ unsigned long XStatePad[1];
  /* 0x03e0 */ struct _XSTATE_CONFIGURATION XState;
} KUSER_SHARED_DATA, *PKUSER_SHARED_DATA; /* size: 0x05f0 */

typedef struct _HARDWARE_PTE_X86
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long reserved : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFrameNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} HARDWARE_PTE_X86, *PHARDWARE_PTE_X86; /* size: 0x0004 */

typedef struct _HARDWARE_PTE_X86PAE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 reserved0 : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 reserved1 : 26; /* bit position: 38 */
    }; /* bitfield */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} HARDWARE_PTE_X86PAE, *PHARDWARE_PTE_X86PAE; /* size: 0x0008 */

typedef struct _GEN_ADDR
{
  /* 0x0000 */ unsigned char AddressSpaceID;
  /* 0x0001 */ unsigned char BitWidth;
  /* 0x0002 */ unsigned char BitOffset;
  /* 0x0003 */ unsigned char AccessSize;
  /* 0x0004 */ union _LARGE_INTEGER Address;
} GEN_ADDR, *PGEN_ADDR; /* size: 0x000c */

typedef struct _FADT
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long facs;
  /* 0x0028 */ unsigned long dsdt;
  /* 0x002c */ unsigned char int_model;
  /* 0x002d */ unsigned char pm_profile;
  /* 0x002e */ unsigned short sci_int_vector;
  /* 0x0030 */ unsigned long smi_cmd_io_port;
  /* 0x0034 */ unsigned char acpi_on_value;
  /* 0x0035 */ unsigned char acpi_off_value;
  /* 0x0036 */ unsigned char s4bios_req;
  /* 0x0037 */ unsigned char pstate_control;
  /* 0x0038 */ unsigned long pm1a_evt_blk_io_port;
  /* 0x003c */ unsigned long pm1b_evt_blk_io_port;
  /* 0x0040 */ unsigned long pm1a_ctrl_blk_io_port;
  /* 0x0044 */ unsigned long pm1b_ctrl_blk_io_port;
  /* 0x0048 */ unsigned long pm2_ctrl_blk_io_port;
  /* 0x004c */ unsigned long pm_tmr_blk_io_port;
  /* 0x0050 */ unsigned long gp0_blk_io_port;
  /* 0x0054 */ unsigned long gp1_blk_io_port;
  /* 0x0058 */ unsigned char pm1_evt_len;
  /* 0x0059 */ unsigned char pm1_ctrl_len;
  /* 0x005a */ unsigned char pm2_ctrl_len;
  /* 0x005b */ unsigned char pm_tmr_len;
  /* 0x005c */ unsigned char gp0_blk_len;
  /* 0x005d */ unsigned char gp1_blk_len;
  /* 0x005e */ unsigned char gp1_base;
  /* 0x005f */ unsigned char cstate_control;
  /* 0x0060 */ unsigned short lvl2_latency;
  /* 0x0062 */ unsigned short lvl3_latency;
  /* 0x0064 */ unsigned short flush_size;
  /* 0x0066 */ unsigned short flush_stride;
  /* 0x0068 */ unsigned char duty_offset;
  /* 0x0069 */ unsigned char duty_width;
  /* 0x006a */ unsigned char day_alarm_index;
  /* 0x006b */ unsigned char month_alarm_index;
  /* 0x006c */ unsigned char century_alarm_index;
  /* 0x006d */ unsigned short boot_arch;
  /* 0x006f */ unsigned char reserved3[1];
  /* 0x0070 */ unsigned long flags;
  /* 0x0074 */ struct _GEN_ADDR reset_reg;
  /* 0x0080 */ unsigned char reset_val;
  /* 0x0081 */ unsigned char reserved4[3];
  /* 0x0084 */ union _LARGE_INTEGER x_firmware_ctrl;
  /* 0x008c */ union _LARGE_INTEGER x_dsdt;
  /* 0x0094 */ struct _GEN_ADDR x_pm1a_evt_blk;
  /* 0x00a0 */ struct _GEN_ADDR x_pm1b_evt_blk;
  /* 0x00ac */ struct _GEN_ADDR x_pm1a_ctrl_blk;
  /* 0x00b8 */ struct _GEN_ADDR x_pm1b_ctrl_blk;
  /* 0x00c4 */ struct _GEN_ADDR x_pm2_ctrl_blk;
  /* 0x00d0 */ struct _GEN_ADDR x_pm_tmr_blk;
  /* 0x00dc */ struct _GEN_ADDR x_gp0_blk;
  /* 0x00e8 */ struct _GEN_ADDR x_gp1_blk;
} FADT, *PFADT; /* size: 0x00f4 */

typedef struct _CONTROLLER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ void* ControllerExtension;
  /* 0x0008 */ struct _KDEVICE_QUEUE DeviceWaitQueue;
  /* 0x001c */ unsigned long Spare1;
  /* 0x0020 */ union _LARGE_INTEGER Spare2;
} CONTROLLER_OBJECT, *PCONTROLLER_OBJECT; /* size: 0x0028 */

typedef struct _RSDT_32
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long Tables[1];
} RSDT_32, *PRSDT_32; /* size: 0x0028 */

typedef struct _HAL_ENLIGHTENMENT
{
  /* 0x0000 */ unsigned long Enlightenments;
  /* 0x0004 */ unsigned long HypervisorConnected;
  /* 0x0008 */ void* EndOfInterrupt /* function */;
  /* 0x000c */ void* ApicWriteIcr /* function */;
  /* 0x0010 */ unsigned long Reserved0;
  /* 0x0014 */ unsigned long SpinCountMask;
  /* 0x0018 */ void* LongSpinWait /* function */;
  /* 0x001c */ void* GetReferenceTime /* function */;
} HAL_ENLIGHTENMENT, *PHAL_ENLIGHTENMENT; /* size: 0x0020 */

typedef struct _IOSAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char IOSAPICID;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long SystemVectorBase;
  /* 0x0008 */ unsigned long IOSAPICAddress;
} IOSAPIC, *PIOSAPIC; /* size: 0x000c */

typedef struct _MAPIC
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long LocalAPICAddress;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ unsigned long APICTables[1];
} MAPIC, *PMAPIC; /* size: 0x0030 */

typedef struct _RSDP
{
  /* 0x0000 */ unsigned __int64 Signature;
  /* 0x0008 */ unsigned char Checksum;
  /* 0x0009 */ unsigned char OEMID[6];
  /* 0x000f */ unsigned char Revision;
  /* 0x0010 */ unsigned long RsdtAddress;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ union _LARGE_INTEGER XsdtAddress;
  /* 0x0020 */ unsigned char XChecksum;
  /* 0x0021 */ unsigned char Reserved[3];
} RSDP, *PRSDP; /* size: 0x0024 */

typedef struct _ISA_VECTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char Bus;
  /* 0x0003 */ unsigned char Source;
  /* 0x0004 */ unsigned long GlobalSystemInterruptVector;
  /* 0x0008 */ unsigned short Flags;
} ISA_VECTOR, *PISA_VECTOR; /* size: 0x000a */

typedef union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ProcessorType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 InstructionSet : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 Operation : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Flags : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Level : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 CPUVersion : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 CPUBrandString : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 ProcessorId : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 TargetAddress : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 ResponderId : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 InstructionPointer : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 Reserved : 51; /* bit position: 13 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS, *PWHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS; /* size: 0x0008 */

typedef struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION
{
  /* 0x0000 */ union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS ValidBits;
  /* 0x0008 */ unsigned char ProcessorType;
  /* 0x0009 */ unsigned char InstructionSet;
  /* 0x000a */ unsigned char ErrorType;
  /* 0x000b */ unsigned char Operation;
  /* 0x000c */ unsigned char Flags;
  /* 0x000d */ unsigned char Level;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ unsigned __int64 CPUVersion;
  /* 0x0018 */ unsigned char CPUBrandString[128];
  /* 0x0098 */ unsigned __int64 ProcessorId;
  /* 0x00a0 */ unsigned __int64 TargetAddress;
  /* 0x00a8 */ unsigned __int64 RequesterId;
  /* 0x00b0 */ unsigned __int64 ResponderId;
  /* 0x00b8 */ unsigned __int64 InstructionPointer;
} WHEA_PROCESSOR_GENERIC_ERROR_SECTION, *PWHEA_PROCESSOR_GENERIC_ERROR_SECTION; /* size: 0x00c0 */

typedef struct _PLATFORM_INTERRUPT
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned char InterruptType;
  /* 0x0005 */ unsigned char APICID;
  /* 0x0006 */ unsigned char ACPIEID;
  /* 0x0007 */ unsigned char IOSAPICVector;
  /* 0x0008 */ unsigned long GlobalVector;
  /* 0x000c */ unsigned long Reserved;
} PLATFORM_INTERRUPT, *PPLATFORM_INTERRUPT; /* size: 0x0010 */

typedef union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 LocalAPICId : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 CpuId : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 ProcInfoCount : 6; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 ContextInfoCount : 6; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Reserved : 50; /* bit position: 14 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS, *PWHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS; /* size: 0x0008 */

typedef struct _WHEA_XPF_PROCESSOR_ERROR_SECTION
{
  /* 0x0000 */ union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS ValidBits;
  /* 0x0008 */ unsigned __int64 LocalAPICId;
  /* 0x0010 */ unsigned char CpuId[48];
  /* 0x0040 */ unsigned char VariableInfo[1];
} WHEA_XPF_PROCESSOR_ERROR_SECTION, *PWHEA_XPF_PROCESSOR_ERROR_SECTION; /* size: 0x0041 */

typedef struct _IOAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char IOAPICID;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long IOAPICAddress;
  /* 0x0008 */ unsigned long SystemVectorBase;
} IOAPIC, *PIOAPIC; /* size: 0x000c */

typedef struct _PROCLOCALAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ACPIProcessorID;
  /* 0x0003 */ unsigned char APICID;
  /* 0x0004 */ unsigned long Flags;
} PROCLOCALAPIC, *PPROCLOCALAPIC; /* size: 0x0008 */

typedef struct _IO_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long GlobalSystemInterruptVector;
} IO_NMISOURCE, *PIO_NMISOURCE; /* size: 0x0008 */

/*
@HalClearSoftwareInterrupt@4
@HalRequestClockInterrupt@8
@HalRequestSoftwareInterrupt@4
@HalSystemVectorDispatchEntry@12
@HalpAcpiFlushCache@0
@HalpAcquireHighLevelLock@4
@HalpCheckForSoftwareInterrupt@8
@HalpComplete440BXWorkaround@4
@HalpGenerateInterrupt@4
@HalpIoDelay@0
@HalpLowerIrqlHardwareInterrupts@4
@HalpReleaseHighLevelLock@8
@HalpRequestIpiCommand@8
@HalpSendFlatIpi@8
@HalpSendNodeIpi32@8
@HalpSendNodeIpi64@8
@HalpSendPhysicalIpi@8
@HalpSetup440BXWorkaround@0
@HalpUpSendIpi@8
@HalpX2ApicSendLogicalIpi@8
@HalpX2ApicSendPhysicalIpi@8
@KeAcquireInStackQueuedSpinLock@8
@KeAcquireInStackQueuedSpinLockRaiseToSynch@8
@KeAcquireQueuedSpinLock@4
@KeAcquireQueuedSpinLockRaiseToSynch@4
@KeAcquireSpinLockRaiseToSynch@4
@KeAcquireSpinLockRaiseToSynchMCE@4
@KeReleaseInStackQueuedSpinLock@4
@KeReleaseQueuedSpinLock@8
@KeTryToAcquireQueuedSpinLock@8
@KeTryToAcquireQueuedSpinLockRaiseToSynch@8
@KfAcquireSpinLock@4
@KfLowerIrql@4
@KfRaiseIrql@4
@KfReleaseSpinLock@8
@KiCheckForSListAddress@4
@RDMSR@4
@_EH4_CallFilterFunc@8
@_EH4_GlobalUnwind@4
@_EH4_LocalUnwind@16
@_EH4_TransferToHandler@8
@__security_check_cookie@4
PicHandler@0
PicNopHandler@0
PicSpuriousService37@0
_ArbDeleteMmConfigRange@0
_ArbInitializeMmConfigRange@4
_CMOS_READ@4
_CMOS_WRITE@8
_ConvertEfiToNtStatus@4
_DbgPrint
_DetectAcpiMP@8
_EmClientQueryRuleState@8
_EmpProviderRegister@24
_ExAcquireSpinLockExclusive@4
_ExAcquireSpinLockShared@4
_ExReleaseSpinLockExclusive@8
_ExReleaseSpinLockShared@8
_GetPdeAddressEx@8
_GetPteAddress@8
_GsCpuId@8
_HalAcpiEmCheckOperator@12
_HalAcpiGetAllTablesDispatch@0
_HalAcpiGetFacsMappingDispatch@0
_HalAcpiGetRsdpDispatch@0
_HalAcpiGetTable@8
_HalAcpiGetTableDispatch@12
_HalAcquireDisplayOwnership@4
_HalAdjustResourceList@4
_HalAllProcessorsStarted@0
_HalAllocateAdapterChannel@16
_HalAllocateCommonBuffer@16
_HalAllocateCrashDumpRegisters@8
_HalAllocateHardwareCounters@16
_HalAssignSlotResources@32
_HalBeginSystemInterrupt@12
_HalBugCheckSystem@8
_HalBuildMdlFromScatterGatherList@16
_HalBuildScatterGatherList@40
_HalCalculateScatterGatherListSize@24
_HalCalibratePerformanceCounter@12
_HalConvertDeviceIdtToIrql@4
_HalDisableInterrupt@4
_HalDisplayString@4
_HalEfiGetEnvironmentVariable@20
_HalEfiQueryVariableInfo@16
_HalEfiSetEnvironmentVariable@20
_HalEnableInterrupt@4
_HalEndSystemInterrupt@8
_HalEnumerateEnvironmentVariablesEx@12
_HalFlushCommonBuffer@20
_HalFreeCommonBuffer@24
_HalFreeHardwareCounters@4
_HalGetAdapter@8
_HalGetBusData@20
_HalGetBusDataByOffset@24
_HalGetDmaAlignment@4
_HalGetEnvironmentVariable@12
_HalGetEnvironmentVariableEx@20
_HalGetInterruptTargetInformation@12
_HalGetInterruptVector@24
_HalGetMemoryCachingRequirements@20
_HalGetMessageRoutingInfo@8
_HalGetProcessorIdByNtNumber@8
_HalGetScatterGatherList@32
_HalGetVectorInput@20
_HalHandleNMI@4
_HalInitApicInterruptHandlers@0
_HalInitSystem@8
_HalInitializeBios@8
_HalInitializeOnResume@4
_HalInitializeProcessor@8
_HalMakeBeep@4
_HalMatchAcpiCreatorRevision@28
_HalMatchAcpiFADTBootArch@28
_HalMatchAcpiOemId@28
_HalMatchAcpiOemRevision@28
_HalMatchAcpiOemTableId@28
_HalMatchAcpiRevision@28
_HalMcUpdateReadPCIConfig@20
_HalProcessorIdle@0
_HalPutDmaAdapter@4
_HalPutScatterGatherList@12
_HalQueryDisplayParameters@16
_HalQueryEnvironmentVariableInfoEx@16
_HalQueryMaximumProcessorCount@0
_HalQueryRealTimeClock@4
_HalReadBootRegister@4
_HalReadDmaCounter@4
_HalRegisterDynamicProcessor@8
_HalRegisterErrataCallbacks@0
_HalReportResourceUsage@0
_HalRequestIpi@8
_HalReturnToFirmware@4
_HalSetBusData@20
_HalSetBusDataByOffset@24
_HalSetDisplayParameters@8
_HalSetEnvironmentVariable@8
_HalSetEnvironmentVariableEx@20
_HalSetProfileInterval@4
_HalSetRealTimeClock@4
_HalSetTimeIncrement@4
_HalStartDynamicProcessor@16
_HalStartNextProcessor@12
_HalStartProcessor@16
_HalStartProfileInterrupt@4
_HalStopProfileInterrupt@4
_HalTranslateBusAddress@24
_HalWriteBootRegister@4
_HalacpIrqTranslatorDereference@4
_HalacpiIrqTranslateResourceRequirementsIsa@20
_HalacpiIrqTranslateResourcesIsa@28
_HalacpiIrqTranslatorReference@4
_HaliAcpiMachineStateInit@8
_HaliAcpiQueryFlags@0
_HaliAcpiSleep@20
_HaliAcpiTimerCarry@0
_HaliGetDmaAdapter@12
_HaliGetInterruptTranslator@28
_HaliHaltSystem@0
_HaliHandlePCIConfigSpaceAccess@16
_HaliInitPnpDriver@0
_HaliInitPowerManagement@8
_HaliIsVectorValid@4
_HaliLocateHiberRanges@4
_HaliPciInterfaceReadConfig@24
_HaliPciInterfaceWriteConfig@24
_HaliQuerySystemInformation@16
_HaliSetMaxLegacyPciBusNumber@4
_HaliSetPciErrorHandlerCallback@4
_HaliSetSystemInformation@12
_HaliSetWakeAlarm@12
_HaliSetWakeEnable@4
_HaliWheaInitProcessorGenericSection@4
_HalpAcpiAllocateMemory@8
_HalpAcpiApplyFadtSettings@4
_HalpAcpiCacheOverrideTables@20
_HalpAcpiCacheTable@8
_HalpAcpiCalculateCacheSizeForOverrideTables@8
_HalpAcpiCheckAndMapTable@36
_HalpAcpiCopyBiosTable@16
_HalpAcpiDetectMachineSpecificActions@8
_HalpAcpiFallbackOnLegacyConfigMethod@8
_HalpAcpiFindRsdp@8
_HalpAcpiGetAllTables@4
_HalpAcpiGetAllTablesWork@4
_HalpAcpiGetCachedTable@12
_HalpAcpiGetFacsMapping@4
_HalpAcpiGetRsdt@4
_HalpAcpiGetTable@16
_HalpAcpiGetTableFromBios@24
_HalpAcpiGetTableWork@16
_HalpAcpiIBMExaMatch@8
_HalpAcpiIBMVigilMatch@8
_HalpAcpiIsCachedTableCompromised@20
_HalpAcpiPicStateIntact@0
_HalpAcpiPostSleep@4
_HalpAcpiPreSleep@4
_HalpAcpiTableCacheInit@4
_HalpAcpiTimerInit@0
_HalpAcpiUnisysHorizonMatch@8
_HalpAcpiValidateAcpiTable@4
_HalpAcquireCmosSpinLock@0
_HalpAddAdapterToList@4
_HalpAddDevice@8
_HalpAddInterruptDest@12
_HalpAddMcaToMemoryErrorSection@8
_HalpAddMcaToProcessorGenericSection@8
_HalpAddMcaToProcessorSpecificSection@12
_HalpAllocPhysicalMemory@16
_HalpAllocPhysicalMemoryFromDescriptor@20
_HalpAllocateAdapterCallback@16
_HalpAllocateAdapterEx@16
_HalpAllocateCR3Root@4
_HalpAllocateMapRegisters@16
_HalpAllocateNumaConfigData@16
_HalpApicRebootService@0
_HalpApicReserveResources@0
_HalpApicRestartProfileTimeInterrupt@0
_HalpApicSetProfileInterval@4
_HalpApicSpuriousService@0
_HalpApicStartProfileInterrupt@0
_HalpApicStopProfileInterrupt@0
_HalpAssignSlotResourcesStub@32
_HalpAuditAcpiTables@4
_HalpAuditAllocateRsdtArrayTable@4
_HalpAuditEnumerateRsdts@8
_HalpAuditEnumerateRsdtsInRange@20
_HalpAuditEnumerateSlicTables@8
_HalpAuditGetExtendedBiosDataArea@12
_HalpAuditQueryResults@4
_HalpAuditQuerySlicAddress@12
_HalpAuditSelectRsdtOrXsdt@8
_HalpAuditSlicTables@12
_HalpAuditValidateChecksum@8
_HalpBiosDisplayReset@0
_HalpBroadcastCallService@0
_HalpBrokenPmTimerCalibratePerformanceCounter@12
_HalpBrokenPmTimerQueryPerformanceCounter@4
_HalpBrokenPmTimerRestorePerformanceCounter@0
_HalpBrokenPmTimerSavePerformanceCounter@0
_HalpBrokenPmTimerStallExecutionProcessor@4
_HalpBugCheckCallback@8
_HalpBuildAcpiResourceList@8
_HalpBuildIpiDestinationMap@4
_HalpBuildResumeStructures@0
_HalpBuildTiledCR3Ex@8
_HalpCheckFixedWakeSources@0
_HalpCheckLowMemoryPostSleep@0
_HalpCheckLowMemoryPreSleep@4
_HalpCheckNonBspTimerCompatibility@0
_HalpCheckNumaConfiguration@8
_HalpCheckPowerButton@0
_HalpCheckWakeupTimeAndAdjust@0
_HalpClearCr4MCEBit@0
_HalpClearSlpSmiStsInICH@0
_HalpClockGetMessageRoutingInfo@16
_HalpClockInterruptPn@0
_HalpClockSetMessageInterruptRouting@0
_HalpClusterModeSupportedByProcessor@0
_HalpCmcDeferredRoutine@16
_HalpCmcInitializeErrorPacketContents@4
_HalpCmcInitializePolling@4
_HalpCmcPollProcessor@8
_HalpCmcStartPolling@0
_HalpCmcWorkerRoutine@4
_HalpCmciInit@4
_HalpCmciInitProcessor@4
_HalpCmciInitializeErrorPacket@4
_HalpCmosNullReference@4
_HalpCmosRangeHandler@20
_HalpConsumeLowMemory@4
_HalpCopyBufferMap@20
_HalpCopyBufferMapSafe@20
_HalpCopyFirmwareAndRuntimeInformation@8
_HalpCorrectErrSrc@8
_HalpCorrectGenericErrSrc@8
_HalpCorrectMachineCheckErrSrc@8
_HalpCorrectNMIErrSrc@8
_HalpCpuID@20
_HalpCreateErrorRecord@20
_HalpCreateMachineCheckErrorRecord@20
_HalpCreateMcaMemoryErrorRecord@20
_HalpCreateMcaProcessorErrorRecord@20
_HalpCreateNMIErrorRecord@20
_HalpDetectPmTimerDoubleFrequency@0
_HalpDeterminePmTimerSkew@28
_HalpDetermineSystemApicMode@0
_HalpDisableMSIInterrupt@4
_HalpDisableRedirEntry@12
_HalpDisableSystemInterrupt@20
_HalpDispatchPnp@8
_HalpDispatchPower@8
_HalpDispatchSoftwareInterrupt@8
_HalpDispatchSystemStateTransition@4
_HalpDispatchWmi@8
_HalpDmaFinalizeDoubleBufferingDisposition@0
_HalpDpGetInterruptReplayState@8
_HalpDpMaskLevelTriggeredInterrupts@0
_HalpDpOfflineProcessorForReplace@4
_HalpDpPostReplace@4
_HalpDpPostReplaceInitialization@8
_HalpDpPreReplace@4
_HalpDpReplaceBegin@8
_HalpDpReplaceControl@8
_HalpDpReplaceEnd@4
_HalpDpReplaceTarget@4
_HalpDpReplayInterrupts@4
_HalpDpReplaySendSelfIpi@4
_HalpDpSortApicList@8
_HalpDpStartProcessor@16
_HalpDpSwapProcessorIdentifiers@12
_HalpDpUnmaskLevelTriggeredInterrupts@0
_HalpDriverEntry@8
_HalpDynamicSystemResourceConfiguration@4
_HalpEarlyInitStallSource@4
_HalpEfiInitialization@4
_HalpEfiInitializeOnResume@4
_HalpEnableLocalNmiSources@0
_HalpEnableMSIInterrupt@16
_HalpEnableNMI@0
_HalpEnablePerfInterrupt@4
_HalpEnableRedirEntry@16
_HalpEnableSystemInterrupt@28
_HalpEndOfBoot@0
_HalpExtractGenericErrorData@4
_HalpFDMANotificationCallback@8
_HalpFindBusAddressTranslation@24
_HalpFlushTLB@0
_HalpFreeNvsBuffers@0
_HalpFreePte@4
_HalpFreeResumeStructures@0
_HalpFreeTiledCR3Ex@4
_HalpGenerateConsistentPmTimerRead@0
_HalpGenericCall@12
_HalpGenericPolledDpcRoutine@16
_HalpGenericPolledWorkerRoutine@4
_HalpGetAcpiStaticNumaTopology@4
_HalpGetAdapterMaximumPhysicalAddress@4
_HalpGetApicIdByProcessorIndex@8
_HalpGetApicInti@8
_HalpGetApicVersion@4
_HalpGetAvailableProximityId@0
_HalpGetChipHacks@16
_HalpGetCmosCenturyByte@0
_HalpGetCmosData@16
_HalpGetCpuInfo@16
_HalpGetDisplayBiosInformation@0
_HalpGetFeatureBits@0
_HalpGetHotPlugMemoryInfo@0
_HalpGetHypervisorInformation@4
_HalpGetIdealQueryPerformanceCounterSource@0
_HalpGetIoApicId@4
_HalpGetIoApicSystemVectorBase@4
_HalpGetIrtEntryCount@0
_HalpGetMcaLog@12
_HalpGetMceInformation@8
_HalpGetNMICrashFlag@0
_HalpGetNextProcessorApicId@12
_HalpGetNumaProcMemoryCount@12
_HalpGetPCIData@24
_HalpGetPageFrameNumber@4
_HalpGetParameters@4
_HalpGetPlatformTimerInformation@4
_HalpGetPmTimerPerfCounterValue@0
_HalpGetPmTimerSleepModePerfCounterValue@0
_HalpGetProcessorBrandString@12
_HalpGetProcessorCounterAttributes@8
_HalpGetRemappedIoApicRedirEntry@12
_HalpGetRemappedMsiAddressData@12
_HalpGetResourceSortValue@12
_HalpGrowMapBufferWorker@4
_HalpGrowMapBuffers@8
_HalpHandleMachineCheck@4
_HalpHandlePreviousMcaErrors@4
_HalpHandlePreviousMcaErrorsOnProcessor@8
_HalpHpetCalibratePerfCount@12
_HalpHpetClockInterrupt@0
_HalpHpetClockInterruptStub@0
_HalpHpetClockInterruptWork@0
_HalpHpetConfigureInterruptRouting@0
_HalpHpetDetectInterruptPolicy@4
_HalpHpetEnableLineBasedInterrupts@4
_HalpHpetHandleRollover@0
_HalpHpetHypervisorTimerConfigured@0
_HalpHpetHypervisorTimerReserved@12
_HalpHpetInitializeClock@0
_HalpHpetPopulateIncrementTables@4
_HalpHpetProgramClock@4
_HalpHpetProgramHypervisorTimer@0
_HalpHpetProgramRolloverTimer@0
_HalpHpetQueryCount@0
_HalpHpetQueryPerformanceCounter@4
_HalpHpetReinitializeClock@0
_HalpHpetResetCounter@4
_HalpHpetRolloverInterrupt@0
_HalpHpetSavePerformanceCounter@0
_HalpHpetSetNextHypervisorInterrupt@0
_HalpHpetSetProfileInterval@4
_HalpHpetSetTimeIncrement@4
_HalpHpetStallExecutionProcessor@4
_HalpHpetStartProfileInterrupt@0
_HalpHpetStopProfileInterrupt@0
_HalpHpetSuspendClock@0
_HalpHpetTickCountFromIncrement@16
_HalpHpetWriteEtwEvent@0
_HalpHpetWriteMessageInterruptConfiguration@12
_HalpHvApicWaitForIcr@0
_HalpHvApicWriteIcr@8
_HalpHvCpuid@8
_HalpHvIsReferenceTimeAvailable@0
_HalpHvQueryReferenceTime@0
_HalpHvRebootSystem@0
_HalpHvReferenceTimeCalibratePerformanceCounter@12
_HalpHvReferenceTimeQueryPerformanceCounter@4
_HalpHvReferenceTimeStallExecutionProcessor@4
_HalpHwParseMcaRecoverySupport@8
_HalpHwParseX2ApicSupport@8
_HalpHwPolicyFindDataTableEntry@4
_HalpHwPolicyInitialize@4
_HalpHwPolicyLocatePolicyResource@20
_HalpIndexPteArray@8
_HalpInitBootTable@4
_HalpInitChipHacks@0
_HalpInitGenericErrorSourceEntry@8
_HalpInitGenericErrorSourcePollingRoutine@0
_HalpInitIntiInfo@0
_HalpInitIrqlAuditFlag@0
_HalpInitMP@8
_HalpInitMemoryCachingRequirementsTable@4
_HalpInitMpInfo@12
_HalpInitNonBusHandler@0
_HalpInitReservedPages@0
_HalpInitSystem@8
_HalpInitTimerSource@0
_HalpInitializeApicAddressing@0
_HalpInitializeBrokenPmTimer@0
_HalpInitializeClock@0
_HalpInitializeCmc@8
_HalpInitializeCmos@0
_HalpInitializeConfigurationFromMadt@4
_HalpInitializeErrSrc@12
_HalpInitializeGenericErrorSource@8
_HalpInitializeHpet@4
_HalpInitializeIOUnit@8
_HalpInitializeLegacyMcaException@4
_HalpInitializeLocalUnit@0
_HalpInitializeMce@8
_HalpInitializeNMI@8
_HalpInitializePICs@4
_HalpInitializePciBus@0
_HalpInitializePciStubs@0
_HalpInitializeWheaPhysicalMappings@0
_HalpInterruptRemappingEnabled@0
_HalpInvalidateIRTCacheEntry@4
_HalpIpiHandler@0
_HalpIpiReserveResources@8
_HalpIsCmciImplemented@4
_HalpIsHardwareWatchdogTimerPresent@4
_HalpIsHvPresent@0
_HalpIsHvUsedForReboot@0
_HalpIsMicrosoftCompatibleHvLoaded@0
_HalpIsMsiSupported@0
_HalpIsMsiSupportedAMD@0
_HalpIsMsiSupportedIntel@0
_HalpIsNXEnabled@0
_HalpIsPteFree@4
_HalpIsTimeToPollSource@4
_HalpKdAllocateAddressRange@20
_HalpKdConfigureCardBusSocket@16
_HalpKdConfigureDebuggingDevice@28
_HalpKdExtendAddressRange@28
_HalpKdFindFreeResourceLimits@12
_HalpKdGetBarRange@16
_HalpKdGetCardBusBridgeResources@16
_HalpKdGetLengthFromBar@4
_HalpKdGetPciBridgeResources@16
_HalpKdMatchRequestedPciDevice@16
_HalpKdPowerUpDevice@8
_HalpKdReadPCIConfig@20
_HalpKdReleasePciDevice@4
_HalpKdRemoveSystemMemoryRanges@8
_HalpKdSearchBehindCardBusBridge@32
_HalpKdSearchBehindPciBridge@32
_HalpKdSearchForPciDebuggingDevice@48
_HalpKdSearchForTopOfMMIO@4
_HalpKdSetupPciDevice@8
_HalpKdSupersetRange@8
_HalpKdUnconfigureCardBusBridge@16
_HalpKdUnconfigurePciBridge@16
_HalpKdUpdateAddressRange@16
_HalpKdValidateCardbusSocketRegs@4
_HalpKdWidenCardBusBridgeBusRange@32
_HalpKdWidenCardBusBridgeIoRange@32
_HalpKdWidenCardBusBridgeMemoryRange@32
_HalpKdWidenPciBridgeBusRange@32
_HalpKdWidenPciBridgeIoRange@32
_HalpKdWidenPciBridgeMemoryRange@32
_HalpKdWritePCIConfig@20
_HalpLegacyApicEndOfInterrupt@0
_HalpLegacyApicReadGenericReg@4
_HalpLegacyApicWaitForIcr@0
_HalpLegacyApicWriteGenericReg@8
_HalpLegacyApicWriteIcr@8
_HalpLoadMicrocode@4
_HalpLocalApicErrorService@0
_HalpLockPagableCodeSection@0
_HalpMapCR3Ex@20
_HalpMapNtToHwProcessorId@4
_HalpMapNvsArea@0
_HalpMapPhysicalMemory64@16
_HalpMapPhysicalMemoryWriteThrough64@16
_HalpMapTransfer@24
_HalpMapTransferHelper@20
_HalpMarkProcessorStarted@8
_HalpMaskAcpiInterrupt@0
_HalpMcUpdateFindDataTableEntry@4
_HalpMcUpdateInitialize@8
_HalpMcUpdateLock@0
_HalpMcUpdateMicrocode@4
_HalpMcUpdatePostUpdate@0
_HalpMcUpdateUnlock@0
_HalpMcaClearError@4
_HalpMcaCurrentProcessorSetTSS@4
_HalpMcaExceptionHandler@0
_HalpMcaExceptionHandlerWrapper
_HalpMcaInitializeErrorSection@4
_HalpMcaInitializePcrContext@0
_HalpMcaQueueDpc@0
_HalpMcaReadError@16
_HalpMcaReadErrorPresence@4
_HalpMcaReportError@8
_HalpMcaResumeProcessorConfig@0
_HalpMcaSetFeatureFlags@0
_HalpMcaSetProcessorConfig@4
_HalpMcaStuckErrorCheck@12
_HalpMceBarrierWait@12
_HalpMceHandler@8
_HalpMceHandlerWithRendezvous@8
_HalpMceInit@4
_HalpMceInitProcessor@4
_HalpMceInitializeErrorPacket@4
_HalpMceInitializeErrorPacketContents@4
_HalpMceIsProcessorTssSet@0
_HalpMovntiCopyBuffer@12
_HalpNMIHalt@4
_HalpNmiGenericErrorHandler@4
_HalpNumaAddRangeProximity@12
_HalpNumaInitializeStaticConfiguration@4
_HalpNumaQueryNodeCapacity@8
_HalpNumaQueryNodeDistance@12
_HalpNumaQueryPageToNode@4
_HalpNumaQueryProcessorNode@12
_HalpNumaQueryProximityId@12
_HalpNumaQueryProximityNode@8
_HalpNumaSortMemoryRanges@0
_HalpOfflineProcessor@4
_HalpPCIAcquireConfigSpaceLock@4
_HalpPCIAcquireType2Lock@8
_HalpPCIConfig@24
_HalpPCIConfigHoldingConfigLock@24
_HalpPCIEndConfigAccess@4
_HalpPCIISALine2Pin@20
_HalpPCIPerformConfigAccess@20
_HalpPCIPin2ISALine@16
_HalpPCIReadUcharType1@12
_HalpPCIReadUcharType2@12
_HalpPCIReadUlongType1@12
_HalpPCIReadUlongType2@12
_HalpPCIReadUshortType1@12
_HalpPCIReadUshortType2@12
_HalpPCIReleaseConfigSpaceLock@4
_HalpPCIReleaseType2Lock@8
_HalpPCIStartConfigAccess@16
_HalpPCIWriteUcharType1@12
_HalpPCIWriteUcharType2@12
_HalpPCIWriteUlongType1@12
_HalpPCIWriteUlongType2@12
_HalpPCIWriteUshortType1@12
_HalpPCIWriteUshortType2@12
_HalpPassIrpFromFdoToPdo@8
_HalpPciAccessMmConfigSpace@28
_HalpPciAddMmConfigEntry@8
_HalpPciCheckForAmdK8SpecialLocationHack@0
_HalpPciFindMmConfigBaseAddress@8
_HalpPciFreeMmConfigList@4
_HalpPciInitializeMmConfigAccess@0
_HalpPciMapMmConfigPhysicalAddress@8
_HalpPciReadMmConfigUchar@12
_HalpPciReadMmConfigUlong@12
_HalpPciReadMmConfigUshort@12
_HalpPciReportMmConfigAddressRange@0
_HalpPciWriteMmConfigUchar@12
_HalpPciWriteMmConfigUlong@12
_HalpPciWriteMmConfigUshort@12
_HalpPerfInterrupt@0
_HalpPhase0GetPciDataByOffset@20
_HalpPhase0SetPciDataByOffset@20
_HalpPiix4Detect@4
_HalpPmTimerCalibratePerformanceCounter@12
_HalpPmTimerCarry@0
_HalpPmTimerEnableSleepMode@0
_HalpPmTimerInit@8
_HalpPmTimerQueryPerformanceCounter@4
_HalpPmTimerRestorePerformanceCounter@0
_HalpPmTimerSavePerformanceCounter@0
_HalpPmTimerSleepModeCarry@0
_HalpPmTimerStallExecutionProcessor@4
_HalpPmTimerStallForScale@4
_HalpPmTimerTickCountStall@4
_HalpPollForBroadcast@0
_HalpPostSleepMP@8
_HalpPowerStateCallback@12
_HalpPrepareForBugcheck@4
_HalpPreserveNvsArea@0
_HalpProbeIoApic@8
_HalpProcessAcpiStartDevice@0
_HalpProfileInterrupt@0
_HalpProgramDrhd@0
_HalpProgramRtcClock@0
_HalpPteReserveResources@0
_HalpPutAcpiHacksInRegistry@0
_HalpQuery8254Counter@0
_HalpQueryAcpiResourceRequirements@4
_HalpQueryBrokenPmTimerCount@0
_HalpQueryCapabilities@8
_HalpQueryDeviceRelations@12
_HalpQueryIdFdo@12
_HalpQueryIdPdo@12
_HalpQueryInterface@28
_HalpQueryMaximumRegisteredProcessorCount@0
_HalpQueryPciRegistryInfo@0
_HalpQueryProcessorCounterSynchronization@0
_HalpQueryResourceRequirements@8
_HalpQueryResources@8
_HalpQuerySratProcessorCount@0
_HalpQueryWakeTime@4
_HalpReadCmosDataByPort@20
_HalpReadCmosTime@4
_HalpReadGenericErrorInfo@4
_HalpReadLocalApicID@0
_HalpReadPCIConfig@20
_HalpReadPartitionTable@16
_HalpReadRtcStdPCAT@12
_HalpReadStdCmosData@12
_HalpReadWheaPhysicalMemory@16
_HalpReadWriteWheaPhysicalMemory@20
_HalpReboot@0
_HalpReenableAcpi@0
_HalpRegisterApicAddressUsage@0
_HalpRegisterKdSupportFunctions@4
_HalpRegisterPciDebuggingDeviceInfo@0
_HalpRegisterVector@16
_HalpReleaseCmosSpinLock@0
_HalpRemapVirtualAddress64@20
_HalpRemoveInterruptDest@12
_HalpReportIdleStateUsage@8
_HalpReportResourceUsage@8
_HalpRequestIpiSpecifyVector@12
_HalpReserveHalPtes@4
_HalpResetAllProcessors@0
_HalpResetProcessorCounter@0
_HalpResetSBF@0
_HalpResetThisProcessor@0
_HalpRestartProfileTimeInterrupt@0
_HalpRestoreDmaControllerState@0
_HalpRestoreIdealStallSource@0
_HalpRestoreInterruptControllerState@0
_HalpRestoreInterruptRemappingUnits@0
_HalpRestoreIoApicRedirTable@0
_HalpRestoreNvsArea@0
_HalpRestorePerformanceCounter@0
_HalpRestoreProcessorCounter@0
_HalpResumeClock@0
_HalpRtcClockInterrupt@0
_HalpRtcClockInterruptStub@0
_HalpRtcInitializeClock@0
_HalpRtcSetTimeIncrement@4
_HalpRtcUnmaskClock@0
_HalpSaveContextTargetProcessor@4
_HalpSaveDmaControllerState@0
_HalpSaveInterruptControllerState@0
_HalpSavePerformanceCounter@0
_HalpSaveProcessorCounter@0
_HalpSaveProcessorStateAndWait@8
_HalpScaleQueryPerformanceCounter@24
_HalpScaleTimers@0
_HalpSendIpiWithNoShorthand@4
_HalpSerialize@0
_HalpSet8259Mask@4
_HalpSetClockAfterSleep@0
_HalpSetClockBeforeSleep@0
_HalpSetCmosCenturyByte@4
_HalpSetCmosData@16
_HalpSetCr4MCEBit@0
_HalpSetInternalVector@16
_HalpSetInterruptControllerWakeupState@4
_HalpSetIrtEntry@32
_HalpSetPCIData@24
_HalpSetPageFrameNumber@12
_HalpSetPartitionInformation@16
_HalpSetRedirEntry@16
_HalpSetSystemInformation@12
_HalpSetWakeAlarm@12
_HalpSetupAcpiPhase0@4
_HalpSetupApicRegisterAccessFunctions@0
_HalpSetupRealModeResume@4
_HalpSetupSystemClockSupport@0
_HalpShutdown@0
_HalpSimpleCheck@8
_HalpStartProcessor@16
_HalpStartProcessorsInClusteredApicMode@0
_HalpStopLegacyUsbInterrupts@0
_HalpStopOhciInterrupt@8
_HalpStopUhciInterrupt@12
_HalpStoreFreeCr3@8
_HalpSuspendClock@0
_HalpSwitchToEarlyStallSource@0
_HalpSwitchToX2ApicMode@4
_HalpTranslateBusAddress@24
_HalpTranslateToLegacyMcaException@8
_HalpTscAdvSynchCalculateRemoteDelta@12
_HalpTscAdvSynchCalculateRemoteDeltas@24
_HalpTscAdvSynchComputeMinimumDelta@8
_HalpTscAdvSynchLeader@4
_HalpTscAdvSynchReadTimeStamp@4
_HalpTscAdvSynchSkewCounter@8
_HalpTscAdvSynchTarget@0
_HalpTscAdvSynchToLeader@4
_HalpTscAdvSynchToTarget@4
_HalpTscCompatibilitySynchronization@4
_HalpTscDetermineCounterShift@0
_HalpTscFallback@4
_HalpTscFallbackToPlatformSource@8
_HalpTscFinalizeDisposition@0
_HalpTscInitializeSynchronizationContext@16
_HalpTscQueryPerformanceCounter@4
_HalpTscReserveResources@0
_HalpTscStallExecutionProcessor@4
_HalpTscSynchronization@8
_HalpTscSynchronizationWorker@4
_HalpTscTraceProcessorDelta@20
_HalpTscTraceProcessorSynchronization@28
_HalpTscTraceStatus@8
_HalpTscTraceSynchronizationSummary@20
_HalpUnloadMicrocode@0
_HalpUnlockPagableCodeSection@0
_HalpUnmapVirtualAddress@12
_HalpUnmaskAcpiInterrupt@0
_HalpUnmaskClock@0
_HalpUnmaskCriticalClockInterruptSources@0
_HalpUpdateConfigurationFromMsct@24
_HalpUpdateExtendedDestination@20
_HalpUpdateInterruptDest@16
_HalpUpdateIrtDestinationId@16
_HalpUpdateNumaConfiguration@8
_HalpUpdateProcessorApicId@8
_HalpUpdateSingleTargetExtendedDestination@20
_HalpValidPCISlot@8
_HalpValidatePendingInterrupts@0
_HalpVerifyIOUnit@4
_HalpVerifySratEntryLengthAndFlag@8
_HalpWaitForCmosRisingEdge@0
_HalpWaitForPhase0ClockTick@4
_HalpWakeupTimeElapsed@0
_HalpWasteTime@4
_HalpWhackICHUsbSmi@8
_HalpWheaInitProcessorGenericSection@8
_HalpWriteCmosDataByPort@20
_HalpWriteCmosTime@4
_HalpWritePCIConfig@20
_HalpWritePartitionTable@20
_HalpWriteResetCommand@0
_HalpWriteRtcStdPCAT@12
_HalpWriteStdCmosData@12
_HalpWriteWheaPhysicalMemory@16
_HalpX2ApicModeSupportedByProcessor@0
_HalpcGetCmosDataByType@16
_HalpcSetCmosDataByType@16
_IoAllocateAdapterChannel@20
_IoFlushAdapterBuffers@24
_IoFreeAdapterChannel@4
_IoFreeMapRegisters@12
_IoMapTransfer@24
_KdRestore@4
_KeAcquireSpinLock@8
_KeAddProcessorAffinityEx@8
_KeAndAffinityEx@12
_KeAndGroupAffinityEx@12
_KeCheckProcessorAffinityEx@8
_KeComplementAffinityEx@8
_KeCountSetBitsAffinityEx@4
_KeEnumerateNextProcessor@8
_KeFlushWriteBuffer@0
_KeGetCurrentIrql@0
_KeGetProcessorIndexFromNumber@4
_KeGetProcessorNumberFromIndex@8
_KeInitializeAffinityEx@4
_KeInitializeEnumerationContext@8
_KeLowerIrql@4
_KeMemoryBarrier@0
_KeProcessorGroupAffinity@8
_KeQueryPerformanceCounter@4
_KeRaiseIrql@8
_KeRaiseIrqlToDpcLevel@0
_KeRaiseIrqlToSynchLevel@0
_KeReleaseSpinLock@8
_KeRemoveProcessorAffinityEx@8
_KeSaveStateForHibernate
_KeStallExecutionProcessor@4
_KeUpdateSystemTime@0
_MiGetPteAddress@4
_MiGetPteIndex@4
_PoSetFixedWakeSource@4
_PshedGetErrorSourceInfo@8
_PshedIsSystemWheaEnabled@0
_PshedRetrieveErrorInfo@8
_READ_PORT_BUFFER_UCHAR@12
_READ_PORT_BUFFER_ULONG@12
_READ_PORT_BUFFER_USHORT@12
_READ_PORT_UCHAR@4
_READ_PORT_ULONG@4
_READ_PORT_USHORT@4
_RtlMoveMemory@12
_RtlStringCbPrintfW
_RtlUnwind@16
_StartPx_BuildRealModeStart@4
_StartPx_PMStub@0
_StartPx_RMStub@0
_TranslateGlobalVectorToIsaVector@8
_WRITE_PORT_BUFFER_UCHAR@12
_WRITE_PORT_BUFFER_ULONG@12
_WRITE_PORT_BUFFER_USHORT@12
_WRITE_PORT_UCHAR@8
_WRITE_PORT_ULONG@8
_WRITE_PORT_USHORT@8
_WRMSR@12
_XmAaaOp@4
_XmAadOp@4
_XmAamOp@4
_XmAasOp@4
_XmAccumImmediate@4
_XmAccumRegister@4
_XmAdcOp@4
_XmAddOp@4
_XmAddOperands@8
_XmAndOp@4
_XmBitScanGeneral@4
_XmBoundOp@4
_XmBsfOp@4
_XmBsrOp@4
_XmBswapOp@4
_XmBtOp@4
_XmBtcOp@4
_XmBtrOp@4
_XmBtsOp@4
_XmByteImmediate@4
_XmCallOp@4
_XmCbwOp@4
_XmClcOp@4
_XmCldOp@4
_XmCliOp@4
_XmCmcOp@4
_XmCmpOp@4
_XmCmpsOp@4
_XmCmpxchgOp@4
_XmCompareOperands@4
_XmComputeParity@4
_XmCwdOp@4
_XmDaaOp@4
_XmDasOp@4
_XmDecOp@4
_XmDivOp@4
_XmEffectiveOffset@4
_XmEmulateInterrupt@8
_XmEmulateStream@16
_XmEnterOp@4
_XmEvaluateAddressSpecifier@8
_XmEvaluateIndexSpecifier@8
_XmExecuteInt1a@4
_XmFlagsRegister@4
_XmGeneralBitOffset@4
_XmGeneralRegister@4
_XmGetByteImmediate@4
_XmGetCodeByte@4
_XmGetImmediateSourceValue@8
_XmGetLongImmediate@4
_XmGetOffsetAddress@8
_XmGetRegisterAddress@8
_XmGetSignedByteImmediateToLong@4
_XmGetSignedByteImmediateToWord@4
_XmGetStringAddress@12
_XmGetStringAddressRange@16
_XmGetWordImmediate@4
_XmGroup1General@4
_XmGroup1Immediate@4
_XmGroup2By1@4
_XmGroup2ByByte@4
_XmGroup2ByCL@4
_XmGroup3General@4
_XmGroup45General@4
_XmGroup7General@4
_XmGroup8BitOffset@4
_XmHltOp@4
_XmIdivOp@4
_XmIllOp@4
_XmImmediateEnter@4
_XmImmediateJump@4
_XmImulImmediate@4
_XmImulOp@4
_XmImulxOp@4
_XmInOp@4
_XmIncOp@4
_XmInitializeEmulator@20
_XmInsOp@4
_XmInt1aFindPciClassCode@4
_XmInt1aFindPciDevice@4
_XmInt1aPciBiosPresent@4
_XmInt1aReadConfigRegister@4
_XmInt1aWriteConfigRegister@4
_XmIntOp@4
_XmIretOp@4
_XmJcxzOp@4
_XmJmpOp@4
_XmJxxOp@4
_XmLahfOp@4
_XmLeaveOp@4
_XmLoadSegment@4
_XmLodsOp@4
_XmLongJump@4
_XmLoopOp@4
_XmMovOp@4
_XmMoveGeneral@4
_XmMoveImmediate@4
_XmMoveRegImmediate@4
_XmMoveSegment@4
_XmMoveXxGeneral@4
_XmMovsOp@4
_XmMulOp@4
_XmNegOp@4
_XmNoOperands@4
_XmNopOp@4
_XmNotOp@4
_XmOpcodeEscape@4
_XmOpcodeRegister@4
_XmOrOp@4
_XmOutOp@4
_XmOutsOp@4
_XmPopGeneral@4
_XmPopOp@4
_XmPopStack@4
_XmPopaOp@4
_XmPortDX@4
_XmPortImmediate@4
_XmPrefixOpcode@4
_XmPushImmediate@4
_XmPushOp@4
_XmPushPopSegment@4
_XmPushStack@8
_XmPushaOp@4
_XmRclOp@4
_XmRcrOp@4
_XmRdtscOp@4
_XmRetOp@4
_XmRolOp@4
_XmRorOp@4
_XmSahfOp@4
_XmSarOp@4
_XmSbbOp@4
_XmScasOp@4
_XmSegmentOffset@4
_XmSetDataType@4
_XmSetDestinationValue@8
_XmSetImmediateSourceValue@8
_XmSetLogicalResult@8
_XmSetSourceValue@8
_XmSetccByte@4
_XmShiftDouble@4
_XmShlOp@4
_XmShldOp@4
_XmShortJump@4
_XmShrOp@4
_XmShrdOp@4
_XmSmswOp@4
_XmStcOp@4
_XmStdOp@4
_XmStiOp@4
_XmStoreResult@8
_XmStosOp@4
_XmStringOperands@4
_XmSubOp@4
_XmSubOperands@8
_XmSxxOp@4
_XmTestOp@4
_XmXaddOp@4
_XmXchgOp@4
_XmXlatOpcode@4
_XmXorOp@4
_ZwClose@4
_ZwDeleteValueKey@8
_ZwOpenKey@12
_ZwSetValueKey@24
__NLG_Call
__NLG_Notify
__NLG_Notify1
__SEH_epilog4
__SEH_prolog4
___report_gsfailure
___security_init_cookie
__abnormal_termination
__alldiv
__alldvrm
__allmul
__allshl
__allshr
__aulldiv
__aulldvrm
__aullrem
__aullshr
__except_handler4
__global_unwind2
__local_unwind2
__local_unwind4
__rt_probe_read4@4
__seh_longjmp_unwind4@4
__setjmp3
__stricmp
__vsnwprintf
__wcsicmp
_atoi
_longjmp
_memcpy
_memset
_strncmp
_strncpy_s
_strstr
_wcstoul
_x86BiosAllocateBuffer@12
_x86BiosCall@8
_x86BiosExecuteInterruptShadowed@20
_x86BiosFreeBuffer@8
_x86BiosGetPciBusData@20
_x86BiosInitializeBiosEx@20
_x86BiosInitializeBiosShadowed@12
_x86BiosReadCmosPort@8
_x86BiosReadCmosPortByte@4
_x86BiosReadIoSpace@8
_x86BiosReadMemory@16
_x86BiosReadPciAddressPort@8
_x86BiosReadPciDataPort@8
_x86BiosSetPciBusData@20
_x86BiosTranslateAddress@8
_x86BiosWriteCmosPort@12
_x86BiosWriteCmosPortByte@8
_x86BiosWriteIoSpace@12
_x86BiosWriteMemory@16
_x86BiosWritePciAddressPort@12
_x86BiosWritePciDataPort@12
*/
