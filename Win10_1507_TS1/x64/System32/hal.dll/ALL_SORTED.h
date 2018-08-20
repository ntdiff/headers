enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct POHANDLE__;
enum POWER_ACTION;
struct _ACCESS_STATE;
struct _ACPI_CACHED_TABLE;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _CONTROLLER_OBJECT;
struct _DESCRIPTION_HEADER;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _ECP_LIST;
struct _EPROCESS;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _EXT_DELETE_PARAMETERS;
struct _EXT_SET_PARAMETERS_V0;
struct _FACS;
struct _FADT;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FILE_BASIC_INFORMATION;
struct _FILE_GET_QUOTA_INFORMATION;
enum _FILE_INFORMATION_CLASS;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_OBJECT;
struct _FILE_STANDARD_INFORMATION;
enum _FSINFOCLASS;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GEN_ADDR;
struct _GROUP_AFFINITY;
struct _GUID;
struct _HALP_ALLOC_CONTEXT;
enum _HALP_DMA_MAP_BUFFER_TYPE;
enum _HAL_DMA_CRASH_DUMP_REGISTER_TYPE;
struct _HAL_HV_SVM_DEVICE_CAPABILITIES;
struct _HAL_HV_SVM_SYSTEM_CAPABILITIES;
enum _HAL_INIT_PHASE;
struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION;
struct _HARDWARE_PTE;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
enum _INTERFACE_TYPE;
enum _INTERLOCKED_RESULT;
struct _INTERRUPT_FUNCTION_TABLE;
struct _INTERRUPT_LINE;
struct _INTERRUPT_LINE_STATE;
enum _INTERRUPT_PROBLEM;
enum _INTERRUPT_RESULT;
struct _INTERRUPT_TARGET;
enum _INTERRUPT_TARGET_TYPE;
struct _IOAPIC;
struct _IOSAPIC;
enum _IO_ALLOCATION_ACTION;
struct _IO_APIC_DATA;
struct _IO_APIC_REGISTERS;
struct _IO_COMPLETION_CONTEXT;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _IO_NMISOURCE;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IRP;
enum _IRQ_PRIORITY;
struct _ISA_VECTOR;
struct _KAFFINITY_EX;
struct _KAPC;
struct _KDESCRIPTOR;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KFLOATING_SAVE;
union _KGDTENTRY64;
union _KIDTENTRY64;
enum _KINTERRUPT_MODE;
enum _KINTERRUPT_POLARITY;
struct _KNODE;
enum _KNOWN_CONTROLLER_TYPE;
struct _KPCR;
struct _KPRCB;
struct _KPROCESS;
struct _KPROCESSOR_STATE;
struct _KSPECIAL_REGISTERS;
struct _KSPIN_LOCK_QUEUE;
struct _KTB_FLUSH_VA;
struct _KTHREAD;
enum _KTIMER2_TYPE;
struct _KTSS64;
struct _KWAIT_CHAIN;
union _LARGE_INTEGER;
struct _LIST_ENTRY;
struct _LOCAL_NMISOURCE;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _M128A;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MAPIC;
union _MCG_STATUS;
union _MCI_STATUS;
struct _MDL;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MODE;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PLATFORM_INTERRUPT;
enum _POOL_TYPE;
struct _POWER_SEQUENCE;
union _POWER_STATE;
enum _POWER_STATE_TYPE;
struct _PRIVILEGE_SET;
struct _PROCLOCALAPIC;
struct _PROCLOCALSAPIC;
struct _REGISTERED_INTERRUPT_CONTROLLER;
enum _REG_NOTIFY_CLASS;
struct _RSDP;
struct _RSDT_32;
struct _RTL_AVL_TREE;
struct _RTL_BALANCED_NODE;
struct _RTL_BITMAP;
struct _RTL_DYNAMIC_HASH_TABLE;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _RTL_QUERY_REGISTRY_TABLE;
struct _RTL_RB_TREE;
struct _RTL_SPLAY_LINKS;
struct _SCSI_REQUEST_BLOCK;
struct _SECONDARY_IC_LIST_ENTRY;
struct _SECONDARY_INTERRUPT_LINE_STATE;
struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE;
struct _SECTION_OBJECT_POINTERS;
enum _SECURITY_IMPERSONATION_LEVEL;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SINGLE_LIST_ENTRY;
struct _SLIST_ENTRY;
union _SLIST_HEADER;
struct _STRING;
enum _SYSTEM_POWER_STATE;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _TXN_PARAMETER_BLOCK;
union _ULARGE_INTEGER;
struct _UNICODE_STRING;
enum _USER_ACTIVITY_PRESENCE;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
enum _WHEA_CPU_VENDOR;
enum _WHEA_ERROR_PACKET_DATA_FORMAT;
union _WHEA_ERROR_PACKET_FLAGS;
struct _WHEA_ERROR_PACKET_V2;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
union _WHEA_ERROR_RECORD_HEADER_FLAGS;
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _WHEA_ERROR_TYPE;
union _WHEA_PERSISTENCE_INFO;
struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION;
union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS;
struct _WHEA_RECOVERY_CONTEXT;
union _WHEA_REVISION;
union _WHEA_TIMESTAMP;
struct _WHEA_XPF_MCA_SECTION;
struct _WHEA_XPF_PROCESSOR_ERROR_SECTION;
union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS;
struct _WORK_QUEUE_ITEM;
struct _XSAVE_FORMAT;
struct _XSDT;

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

struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

struct POHANDLE__
{
  /* 0x0000 */ int unused;
}; /* size: 0x0004 */

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
  PowerActionDisplayOff = 8,
};

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
  /* 0x0020 */ struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
  /* 0x0040 */ void* SecurityDescriptor;
  /* 0x0048 */ void* AuxData;
  union // _TAG_UNNAMED_1
  {
    union
    {
      /* 0x0050 */ struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
      /* 0x0050 */ struct _PRIVILEGE_SET PrivilegeSet;
    }; /* size: 0x002c */
  } /* size: 0x002c */ Privileges;
  /* 0x007c */ unsigned char AuditPrivileges;
  /* 0x0080 */ struct _UNICODE_STRING ObjectName;
  /* 0x0090 */ struct _UNICODE_STRING ObjectTypeName;
} ACCESS_STATE, *PACCESS_STATE; /* size: 0x00a0 */

typedef struct _ACPI_CACHED_TABLE
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ union _LARGE_INTEGER PhysicalAddress;
  /* 0x0018 */ struct _DESCRIPTION_HEADER Header;
  /* 0x003c */ long __PADDING__[1];
} ACPI_CACHED_TABLE, *PACPI_CACHED_TABLE; /* size: 0x0040 */

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR; /* size: 0x0024 */

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char ShareDisposition;
  /* 0x0002 */ unsigned short Flags;
  union // _TAG_UNNAMED_2
  {
    union
    {
      struct // _TAG_UNNAMED_3
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Generic;
      struct // _TAG_UNNAMED_3
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Port;
      struct // _TAG_UNNAMED_4
      {
        /* 0x0004 */ unsigned short Level;
        /* 0x0006 */ unsigned short Group;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned __int64 Affinity;
      } /* size: 0x0010 */ Interrupt;
      struct // _TAG_UNNAMED_5
      {
        union
        {
          struct // _TAG_UNNAMED_6
          {
            /* 0x0004 */ unsigned short Group;
            /* 0x0006 */ unsigned short MessageCount;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned __int64 Affinity;
          } /* size: 0x0010 */ Raw;
          struct // _TAG_UNNAMED_4
          {
            /* 0x0004 */ unsigned short Level;
            /* 0x0006 */ unsigned short Group;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned __int64 Affinity;
          } /* size: 0x0010 */ Translated;
        }; /* size: 0x0010 */
      } /* size: 0x0010 */ MessageInterrupt;
      struct // _TAG_UNNAMED_3
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Memory;
      struct // _TAG_UNNAMED_7
      {
        /* 0x0004 */ unsigned long Channel;
        /* 0x0008 */ unsigned long Port;
        /* 0x000c */ unsigned long Reserved1;
      } /* size: 0x000c */ Dma;
      struct // _TAG_UNNAMED_8
      {
        /* 0x0004 */ unsigned long Channel;
        /* 0x0008 */ unsigned long RequestLine;
        /* 0x000c */ unsigned char TransferWidth;
        /* 0x000d */ unsigned char Reserved1;
        /* 0x000e */ unsigned char Reserved2;
        /* 0x000f */ unsigned char Reserved3;
      } /* size: 0x000c */ DmaV3;
      struct // _TAG_UNNAMED_9
      {
        /* 0x0004 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct // _TAG_UNNAMED_10
      {
        /* 0x0004 */ unsigned long Start;
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Reserved;
      } /* size: 0x000c */ BusNumber;
      struct // _TAG_UNNAMED_11
      {
        /* 0x0004 */ unsigned long DataSize;
        /* 0x0008 */ unsigned long Reserved1;
        /* 0x000c */ unsigned long Reserved2;
      } /* size: 0x000c */ DeviceSpecificData;
      struct // _TAG_UNNAMED_12
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length40;
      } /* size: 0x000c */ Memory40;
      struct // _TAG_UNNAMED_13
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length48;
      } /* size: 0x000c */ Memory48;
      struct // _TAG_UNNAMED_14
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length64;
      } /* size: 0x000c */ Memory64;
      struct // _TAG_UNNAMED_15
      {
        /* 0x0004 */ unsigned char Class;
        /* 0x0005 */ unsigned char Type;
        /* 0x0006 */ unsigned char Reserved1;
        /* 0x0007 */ unsigned char Reserved2;
        /* 0x0008 */ unsigned long IdLowPart;
        /* 0x000c */ unsigned long IdHighPart;
      } /* size: 0x000c */ Connection;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR; /* size: 0x0014 */

typedef struct _CM_PARTIAL_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST; /* size: 0x001c */

typedef struct _CM_RESOURCE_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, *PCM_RESOURCE_LIST; /* size: 0x0028 */

struct _COMPRESSED_DATA_INFO;

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 P6Home;
  /* 0x0030 */ unsigned long ContextFlags;
  /* 0x0034 */ unsigned long MxCsr;
  /* 0x0038 */ unsigned short SegCs;
  /* 0x003a */ unsigned short SegDs;
  /* 0x003c */ unsigned short SegEs;
  /* 0x003e */ unsigned short SegFs;
  /* 0x0040 */ unsigned short SegGs;
  /* 0x0042 */ unsigned short SegSs;
  /* 0x0044 */ unsigned long EFlags;
  /* 0x0048 */ unsigned __int64 Dr0;
  /* 0x0050 */ unsigned __int64 Dr1;
  /* 0x0058 */ unsigned __int64 Dr2;
  /* 0x0060 */ unsigned __int64 Dr3;
  /* 0x0068 */ unsigned __int64 Dr6;
  /* 0x0070 */ unsigned __int64 Dr7;
  /* 0x0078 */ unsigned __int64 Rax;
  /* 0x0080 */ unsigned __int64 Rcx;
  /* 0x0088 */ unsigned __int64 Rdx;
  /* 0x0090 */ unsigned __int64 Rbx;
  /* 0x0098 */ unsigned __int64 Rsp;
  /* 0x00a0 */ unsigned __int64 Rbp;
  /* 0x00a8 */ unsigned __int64 Rsi;
  /* 0x00b0 */ unsigned __int64 Rdi;
  /* 0x00b8 */ unsigned __int64 R8;
  /* 0x00c0 */ unsigned __int64 R9;
  /* 0x00c8 */ unsigned __int64 R10;
  /* 0x00d0 */ unsigned __int64 R11;
  /* 0x00d8 */ unsigned __int64 R12;
  /* 0x00e0 */ unsigned __int64 R13;
  /* 0x00e8 */ unsigned __int64 R14;
  /* 0x00f0 */ unsigned __int64 R15;
  /* 0x00f8 */ unsigned __int64 Rip;
  union
  {
    /* 0x0100 */ struct _XSAVE_FORMAT FltSave;
    struct
    {
      /* 0x0100 */ struct _M128A Header[2];
      /* 0x0120 */ struct _M128A Legacy[8];
      /* 0x01a0 */ struct _M128A Xmm0;
      /* 0x01b0 */ struct _M128A Xmm1;
      /* 0x01c0 */ struct _M128A Xmm2;
      /* 0x01d0 */ struct _M128A Xmm3;
      /* 0x01e0 */ struct _M128A Xmm4;
      /* 0x01f0 */ struct _M128A Xmm5;
      /* 0x0200 */ struct _M128A Xmm6;
      /* 0x0210 */ struct _M128A Xmm7;
      /* 0x0220 */ struct _M128A Xmm8;
      /* 0x0230 */ struct _M128A Xmm9;
      /* 0x0240 */ struct _M128A Xmm10;
      /* 0x0250 */ struct _M128A Xmm11;
      /* 0x0260 */ struct _M128A Xmm12;
      /* 0x0270 */ struct _M128A Xmm13;
      /* 0x0280 */ struct _M128A Xmm14;
      /* 0x0290 */ struct _M128A Xmm15;
    }; /* size: 0x01a0 */
  }; /* size: 0x0200 */
  /* 0x0300 */ struct _M128A VectorRegister[26];
  /* 0x04a0 */ unsigned __int64 VectorControl;
  /* 0x04a8 */ unsigned __int64 DebugControl;
  /* 0x04b0 */ unsigned __int64 LastBranchToRip;
  /* 0x04b8 */ unsigned __int64 LastBranchFromRip;
  /* 0x04c0 */ unsigned __int64 LastExceptionToRip;
  /* 0x04c8 */ unsigned __int64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT; /* size: 0x04d0 */

typedef struct _CONTROLLER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ void* ControllerExtension;
  /* 0x0010 */ struct _KDEVICE_QUEUE DeviceWaitQueue;
  /* 0x0038 */ unsigned long Spare1;
  /* 0x0040 */ union _LARGE_INTEGER Spare2;
} CONTROLLER_OBJECT, *PCONTROLLER_OBJECT; /* size: 0x0048 */

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
    /* 0x0004 */ unsigned long WakeFromInterrupt : 1; /* bit position: 19 */
    /* 0x0004 */ unsigned long Reserved : 12; /* bit position: 20 */
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

typedef struct _DEVICE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ long ReferenceCount;
  /* 0x0008 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0010 */ struct _DEVICE_OBJECT* NextDevice;
  /* 0x0018 */ struct _DEVICE_OBJECT* AttachedDevice;
  /* 0x0020 */ struct _IRP* CurrentIrp;
  /* 0x0028 */ struct _IO_TIMER* Timer;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0034 */ unsigned long Characteristics;
  /* 0x0038 */ struct _VPB* Vpb;
  /* 0x0040 */ void* DeviceExtension;
  /* 0x0048 */ unsigned long DeviceType;
  /* 0x004c */ char StackSize;
  union // _TAG_UNNAMED_16
  {
    union
    {
      /* 0x0050 */ struct _LIST_ENTRY ListEntry;
      /* 0x0050 */ struct _WAIT_CONTEXT_BLOCK Wcb;
    }; /* size: 0x0048 */
  } /* size: 0x0048 */ Queue;
  /* 0x0098 */ unsigned long AlignmentRequirement;
  /* 0x00a0 */ struct _KDEVICE_QUEUE DeviceQueue;
  /* 0x00c8 */ struct _KDPC Dpc;
  /* 0x0108 */ unsigned long ActiveThreadCount;
  /* 0x0110 */ void* SecurityDescriptor;
  /* 0x0118 */ struct _KEVENT DeviceLock;
  /* 0x0130 */ unsigned short SectorSize;
  /* 0x0132 */ unsigned short Spare1;
  /* 0x0138 */ struct _DEVOBJ_EXTENSION* DeviceObjectExtension;
  /* 0x0140 */ void* Reserved;
  /* 0x0148 */ long __PADDING__[2];
} DEVICE_OBJECT, *PDEVICE_OBJECT; /* size: 0x0150 */

struct _DEVICE_OBJECT_POWER_EXTENSION;

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

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

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3,
  DeviceUsageTypeBoot = 4,
  DeviceUsageTypePostDisplay = 5,
} DEVICE_USAGE_NOTIFICATION_TYPE, *PDEVICE_USAGE_NOTIFICATION_TYPE;

typedef enum _DEVICE_WAKE_DEPTH
{
  DeviceWakeDepthNotWakeable = 0,
  DeviceWakeDepthD0 = 1,
  DeviceWakeDepthD1 = 2,
  DeviceWakeDepthD2 = 3,
  DeviceWakeDepthD3hot = 4,
  DeviceWakeDepthD3cold = 5,
  DeviceWakeDepthMaximum = 6,
} DEVICE_WAKE_DEPTH, *PDEVICE_WAKE_DEPTH;

typedef struct _DEVOBJ_EXTENSION
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ unsigned long PowerFlags;
  /* 0x0018 */ struct _DEVICE_OBJECT_POWER_EXTENSION* Dope;
  /* 0x0020 */ unsigned long ExtensionFlags;
  /* 0x0028 */ void* DeviceNode;
  /* 0x0030 */ struct _DEVICE_OBJECT* AttachedTo;
  /* 0x0038 */ long StartIoCount;
  /* 0x003c */ long StartIoKey;
  /* 0x0040 */ unsigned long StartIoFlags;
  /* 0x0048 */ struct _VPB* Vpb;
  /* 0x0050 */ void* DependencyNode;
  /* 0x0058 */ void* InterruptContext;
  /* 0x0060 */ void* VerifierContext;
} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION; /* size: 0x0068 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2Reserved1;
          /* 0x0003 */ unsigned char Timer2Reserved2;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 3; /* bit position: 3 */
              /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _DRIVER_EXTENSION
{
  /* 0x0000 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0008 */ void* AddDevice /* function */;
  /* 0x0010 */ unsigned long Count;
  /* 0x0018 */ struct _UNICODE_STRING ServiceKeyName;
} DRIVER_EXTENSION, *PDRIVER_EXTENSION; /* size: 0x0028 */

typedef struct _DRIVER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0018 */ void* DriverStart;
  /* 0x0020 */ unsigned long DriverSize;
  /* 0x0028 */ void* DriverSection;
  /* 0x0030 */ struct _DRIVER_EXTENSION* DriverExtension;
  /* 0x0038 */ struct _UNICODE_STRING DriverName;
  /* 0x0048 */ struct _UNICODE_STRING* HardwareDatabase;
  /* 0x0050 */ struct _FAST_IO_DISPATCH* FastIoDispatch;
  /* 0x0058 */ void* DriverInit /* function */;
  /* 0x0060 */ void* DriverStartIo /* function */;
  /* 0x0068 */ void* DriverUnload /* function */;
  /* 0x0070 */ void* MajorFunction[28] /* function */;
} DRIVER_OBJECT, *PDRIVER_OBJECT; /* size: 0x0150 */

struct _ECP_LIST;

struct _EPROCESS;

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0010 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x0018 */ short ActiveCount;
  union
  {
    /* 0x001a */ unsigned short Flag;
    struct
    {
      /* 0x001a */ unsigned char ReservedLowFlags;
      /* 0x001b */ unsigned char WaiterPriority;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0020 */ struct _KWAIT_CHAIN SharedWaiters;
  /* 0x0028 */ struct _KEVENT* ExclusiveWaiters;
  /* 0x0030 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0040 */ unsigned long ActiveEntries;
  /* 0x0044 */ unsigned long ContentionCount;
  /* 0x0048 */ unsigned long NumberOfSharedWaiters;
  /* 0x004c */ unsigned long NumberOfExclusiveWaiters;
  /* 0x0050 */ void* Reserved2;
  union
  {
    /* 0x0058 */ void* Address;
    /* 0x0058 */ unsigned __int64 CreatorBackTraceIndex;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned __int64 SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0068 */

struct _ETHREAD;

typedef struct _EVENT_DATA_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 Ptr;
  /* 0x0008 */ unsigned long Size;
  union
  {
    /* 0x000c */ unsigned long Reserved;
    struct
    {
      /* 0x000c */ unsigned char Type;
      /* 0x000d */ unsigned char Reserved1;
      /* 0x000e */ unsigned short Reserved2;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR; /* size: 0x0010 */

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

typedef enum _EVENT_TYPE
{
  NotificationEvent = 0,
  SynchronizationEvent = 1,
} EVENT_TYPE, *PEVENT_TYPE;

typedef enum _EXCEPTION_DISPOSITION
{
  ExceptionContinueExecution = 0,
  ExceptionContinueSearch = 1,
  ExceptionNestedException = 2,
  ExceptionCollidedUnwind = 3,
} EXCEPTION_DISPOSITION, *PEXCEPTION_DISPOSITION;

typedef struct _EXCEPTION_RECORD
{
  /* 0x0000 */ long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x0010 */ void* ExceptionAddress;
  /* 0x0018 */ unsigned long NumberParameters;
  /* 0x0020 */ unsigned __int64 ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD; /* size: 0x0098 */

typedef struct _EXCEPTION_REGISTRATION_RECORD
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* Next;
  /* 0x0008 */ void* Handler /* function */;
} EXCEPTION_REGISTRATION_RECORD, *PEXCEPTION_REGISTRATION_RECORD; /* size: 0x0010 */

typedef struct _EXT_DELETE_PARAMETERS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* DeleteCallback /* function */;
  /* 0x0010 */ void* DeleteContext;
} EXT_DELETE_PARAMETERS, *PEXT_DELETE_PARAMETERS; /* size: 0x0018 */

typedef struct _EXT_SET_PARAMETERS_V0
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ __int64 NoWakeTolerance;
} EXT_SET_PARAMETERS_V0, *PEXT_SET_PARAMETERS_V0; /* size: 0x0010 */

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
  /* 0x0081 */ unsigned short arm_boot_arch;
  /* 0x0083 */ unsigned char reserved4;
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
  /* 0x00f4 */ struct _GEN_ADDR sleep_control_reg;
  /* 0x0100 */ struct _GEN_ADDR sleep_status_reg;
} FADT, *PFADT; /* size: 0x010c */

typedef struct _FAST_IO_DISPATCH
{
  /* 0x0000 */ unsigned long SizeOfFastIoDispatch;
  /* 0x0008 */ void* FastIoCheckIfPossible /* function */;
  /* 0x0010 */ void* FastIoRead /* function */;
  /* 0x0018 */ void* FastIoWrite /* function */;
  /* 0x0020 */ void* FastIoQueryBasicInfo /* function */;
  /* 0x0028 */ void* FastIoQueryStandardInfo /* function */;
  /* 0x0030 */ void* FastIoLock /* function */;
  /* 0x0038 */ void* FastIoUnlockSingle /* function */;
  /* 0x0040 */ void* FastIoUnlockAll /* function */;
  /* 0x0048 */ void* FastIoUnlockAllByKey /* function */;
  /* 0x0050 */ void* FastIoDeviceControl /* function */;
  /* 0x0058 */ void* AcquireFileForNtCreateSection /* function */;
  /* 0x0060 */ void* ReleaseFileForNtCreateSection /* function */;
  /* 0x0068 */ void* FastIoDetachDevice /* function */;
  /* 0x0070 */ void* FastIoQueryNetworkOpenInfo /* function */;
  /* 0x0078 */ void* AcquireForModWrite /* function */;
  /* 0x0080 */ void* MdlRead /* function */;
  /* 0x0088 */ void* MdlReadComplete /* function */;
  /* 0x0090 */ void* PrepareMdlWrite /* function */;
  /* 0x0098 */ void* MdlWriteComplete /* function */;
  /* 0x00a0 */ void* FastIoReadCompressed /* function */;
  /* 0x00a8 */ void* FastIoWriteCompressed /* function */;
  /* 0x00b0 */ void* MdlReadCompleteCompressed /* function */;
  /* 0x00b8 */ void* MdlWriteCompleteCompressed /* function */;
  /* 0x00c0 */ void* FastIoQueryOpen /* function */;
  /* 0x00c8 */ void* ReleaseForModWrite /* function */;
  /* 0x00d0 */ void* AcquireForCcFlush /* function */;
  /* 0x00d8 */ void* ReleaseForCcFlush /* function */;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH; /* size: 0x00e0 */

typedef struct _FAST_MUTEX
{
  /* 0x0000 */ long Count;
  /* 0x0008 */ void* Owner;
  /* 0x0010 */ unsigned long Contention;
  /* 0x0018 */ struct _KEVENT Event;
  /* 0x0030 */ unsigned long OldIrql;
  /* 0x0034 */ long __PADDING__[1];
} FAST_MUTEX, *PFAST_MUTEX; /* size: 0x0038 */

typedef struct _FILE_BASIC_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0020 */ unsigned long FileAttributes;
  /* 0x0024 */ long __PADDING__[1];
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION; /* size: 0x0028 */

struct _FILE_GET_QUOTA_INFORMATION;

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
  FileUnusedInformation = 52,
  FileNumaNodeInformation = 53,
  FileStandardLinkInformation = 54,
  FileRemoteProtocolInformation = 55,
  FileRenameInformationBypassAccessCheck = 56,
  FileLinkInformationBypassAccessCheck = 57,
  FileVolumeNameInformation = 58,
  FileIdInformation = 59,
  FileIdExtdDirectoryInformation = 60,
  FileReplaceCompletionInformation = 61,
  FileHardLinkFullIdInformation = 62,
  FileIdExtdBothDirectoryInformation = 63,
  FileMaximumInformation = 64,
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

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

typedef struct _FILE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ struct _VPB* Vpb;
  /* 0x0018 */ void* FsContext;
  /* 0x0020 */ void* FsContext2;
  /* 0x0028 */ struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;
  /* 0x0030 */ void* PrivateCacheMap;
  /* 0x0038 */ long FinalStatus;
  /* 0x0040 */ struct _FILE_OBJECT* RelatedFileObject;
  /* 0x0048 */ unsigned char LockOperation;
  /* 0x0049 */ unsigned char DeletePending;
  /* 0x004a */ unsigned char ReadAccess;
  /* 0x004b */ unsigned char WriteAccess;
  /* 0x004c */ unsigned char DeleteAccess;
  /* 0x004d */ unsigned char SharedRead;
  /* 0x004e */ unsigned char SharedWrite;
  /* 0x004f */ unsigned char SharedDelete;
  /* 0x0050 */ unsigned long Flags;
  /* 0x0058 */ struct _UNICODE_STRING FileName;
  /* 0x0068 */ union _LARGE_INTEGER CurrentByteOffset;
  /* 0x0070 */ unsigned long Waiters;
  /* 0x0074 */ unsigned long Busy;
  /* 0x0078 */ void* LastLock;
  /* 0x0080 */ struct _KEVENT Lock;
  /* 0x0098 */ struct _KEVENT Event;
  /* 0x00b0 */ struct _IO_COMPLETION_CONTEXT* CompletionContext;
  /* 0x00b8 */ unsigned __int64 IrpListLock;
  /* 0x00c0 */ struct _LIST_ENTRY IrpList;
  /* 0x00d0 */ void* FileObjectExtension;
} FILE_OBJECT, *PFILE_OBJECT; /* size: 0x00d8 */

typedef struct _FILE_STANDARD_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0008 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0010 */ unsigned long NumberOfLinks;
  /* 0x0014 */ unsigned char DeletePending;
  /* 0x0015 */ unsigned char Directory;
  /* 0x0016 */ char __PADDING__[2];
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION; /* size: 0x0018 */

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
  FileFsSectorSizeInformation = 11,
  FileFsDataCopyInformation = 12,
  FileFsMetadataSizeInformation = 13,
  FileFsMaximumInformation = 14,
} FSINFOCLASS, *PFSINFOCLASS;

typedef struct _GENERAL_LOOKASIDE
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  union
  {
    /* 0x0018 */ unsigned long AllocateMisses;
    /* 0x0018 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long TotalFrees;
  union
  {
    /* 0x0020 */ unsigned long FreeMisses;
    /* 0x0020 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x0024 */ enum _POOL_TYPE Type;
  /* 0x0028 */ unsigned long Tag;
  /* 0x002c */ unsigned long Size;
  union
  {
    /* 0x0030 */ void* AllocateEx /* function */;
    /* 0x0030 */ void* Allocate /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0038 */ void* FreeEx /* function */;
    /* 0x0038 */ void* Free /* function */;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _LIST_ENTRY ListEntry;
  /* 0x0050 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x0054 */ unsigned long LastAllocateMisses;
    /* 0x0054 */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0058 */ unsigned long Future[2];
  /* 0x0060 */ long __PADDING__[8];
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE; /* size: 0x0080 */

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  union
  {
    /* 0x0018 */ unsigned long AllocateMisses;
    /* 0x0018 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long TotalFrees;
  union
  {
    /* 0x0020 */ unsigned long FreeMisses;
    /* 0x0020 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x0024 */ enum _POOL_TYPE Type;
  /* 0x0028 */ unsigned long Tag;
  /* 0x002c */ unsigned long Size;
  union
  {
    /* 0x0030 */ void* AllocateEx /* function */;
    /* 0x0030 */ void* Allocate /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0038 */ void* FreeEx /* function */;
    /* 0x0038 */ void* Free /* function */;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _LIST_ENTRY ListEntry;
  /* 0x0050 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x0054 */ unsigned long LastAllocateMisses;
    /* 0x0054 */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0058 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0060 */

typedef struct _GEN_ADDR
{
  /* 0x0000 */ unsigned char AddressSpaceID;
  /* 0x0001 */ unsigned char BitWidth;
  /* 0x0002 */ unsigned char BitOffset;
  /* 0x0003 */ unsigned char AccessSize;
  /* 0x0004 */ union _LARGE_INTEGER Address;
} GEN_ADDR, *PGEN_ADDR; /* size: 0x000c */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _HALP_ALLOC_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY BufferList;
  /* 0x0010 */ unsigned __int64 Lock;
} HALP_ALLOC_CONTEXT, *PHALP_ALLOC_CONTEXT; /* size: 0x0018 */

typedef enum _HALP_DMA_MAP_BUFFER_TYPE
{
  HalpDmaContiguousMapBuffer = 0,
  HalpDmaNonContiguousMapBuffer = 1,
  HalpDmaMaximumMapBufferType = 2,
} HALP_DMA_MAP_BUFFER_TYPE, *PHALP_DMA_MAP_BUFFER_TYPE;

typedef enum _HAL_DMA_CRASH_DUMP_REGISTER_TYPE
{
  HalDmaCrashDumpRegisterSet1 = 0,
  HalDmaCrashDumpRegisterSet2 = 1,
  HalDmaCrashDumpRegisterSetMax = 2,
} HAL_DMA_CRASH_DUMP_REGISTER_TYPE, *PHAL_DMA_CRASH_DUMP_REGISTER_TYPE;

typedef struct _HAL_HV_SVM_DEVICE_CAPABILITIES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long SvmSupported : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PciExecute : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long NoExecute : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 3 */
    /* 0x0000 */ unsigned long OverflowPossible : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long PasidCount;
  /* 0x0008 */ unsigned long IommuIndex;
} HAL_HV_SVM_DEVICE_CAPABILITIES, *PHAL_HV_SVM_DEVICE_CAPABILITIES; /* size: 0x000c */

typedef struct _HAL_HV_SVM_SYSTEM_CAPABILITIES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long SvmSupported : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long GpaAlwaysValid : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long MaxPasidSpaceCount;
  /* 0x0008 */ unsigned long MaxPasidSpacePasidCount;
  /* 0x000c */ unsigned long MaxPrqSize;
  /* 0x0010 */ unsigned long IommuCount;
  /* 0x0014 */ unsigned long MinIommuPasidCount;
} HAL_HV_SVM_SYSTEM_CAPABILITIES, *PHAL_HV_SVM_SYSTEM_CAPABILITIES; /* size: 0x0018 */

typedef enum _HAL_INIT_PHASE
{
  HalInitPhaseBspProcEarly = 0,
  HalInitPhaseBspProcEarlyMmReady = 1,
  HalInitPhaseBspProcEarlyTimerReady = 2,
  HalInitPhaseBspProcEarlyEnd = 3,
  HalInitPhasePnProcEarly = 4,
  HalInitPhasePnProcEarlyEnd = 5,
  HalInitPhaseBspSystemEarly = 6,
  HalInitPhaseBspSystemEarlyAcpiReady = 7,
  HalInitPhaseBspSystemEarlyHalExtensionsReady = 8,
  HalInitPhaseBspSystemEarlyInterruptsAlmostReady = 9,
  HalInitPhaseBspSystemEarlyIommusReady = 10,
  HalInitPhaseBspSystemEarlyInterruptsReady = 11,
  HalInitPhaseBspSystemEarlyDmaReady = 11,
  HalInitPhaseBspSystemEarlyProcReady = 12,
  HalInitPhaseBspSystemEarlyHwPerfCntReady = 13,
  HalInitPhaseBspSystemEarlyEnd = 14,
  HalInitPhaseBspSystemLate = 15,
  HalInitPhaseBspSystemLateEnd = 16,
  HalInitPhasePnSystemLate = 17,
  HalInitPhasePnSystemLateEnd = 18,
  HalInitPhaseAllProcStartComplete = 19,
  HalInitPhaseAllProcStartCompleteEnd = 20,
  HalInitPhaseAcpiPdoStarted = 21,
  HalInitPhaseAcpiPdoStartedEnd = 22,
  HalInitPhaseReportResources = 23,
  HalInitPhaseReportResourcesEnd = 24,
  HalInitPhaseReportCoreSystemResources = 25,
  HalInitPhaseReportCoreSystemResourcesEnd = 26,
} HAL_INIT_PHASE, *PHAL_INIT_PHASE;

typedef struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION
{
  /* 0x0000 */ unsigned long Enlightenments;
  /* 0x0004 */ unsigned long HypervisorConnected;
  /* 0x0008 */ void* EndOfInterrupt /* function */;
  /* 0x0010 */ void* ApicWriteIcr /* function */;
  /* 0x0018 */ unsigned long Reserved0;
  /* 0x001c */ unsigned long SpinCountMask;
  /* 0x0020 */ void* LongSpinWait /* function */;
  /* 0x0028 */ void* GetReferenceTime /* function */;
  /* 0x0030 */ void* SetSystemSleepProperty /* function */;
  /* 0x0038 */ void* EnterSleepState /* function */;
  /* 0x0040 */ void* NotifyDebugDeviceAvailable /* function */;
  /* 0x0048 */ void* MapDeviceInterrupt /* function */;
  /* 0x0050 */ void* UnmapDeviceInterrupt /* function */;
  /* 0x0058 */ void* SetHpetConfig /* function */;
  /* 0x0060 */ void* NotifyHpetEnabled /* function */;
  /* 0x0068 */ void* QueryAssociatedProcessors /* function */;
  /* 0x0070 */ void* ReadMultipleMsr /* function */;
  /* 0x0078 */ void* WriteMultipleMsr /* function */;
  /* 0x0080 */ void* ReadCpuid /* function */;
  /* 0x0088 */ void* LpWritebackInvalidate /* function */;
  /* 0x0090 */ void* GetMachineCheckContext /* function */;
  /* 0x0098 */ void* SuspendPartition /* function */;
  /* 0x00a0 */ void* ResumePartition /* function */;
  /* 0x00a8 */ void* SetSystemMachineCheckProperty /* function */;
  /* 0x00b0 */ void* WheaErrorNotification /* function */;
  /* 0x00b8 */ void* GetProcessorIndexFromVpIndex /* function */;
  /* 0x00c0 */ void* SyntheticClusterIpi /* function */;
  /* 0x00c8 */ void* VpStartEnabled /* function */;
  /* 0x00d0 */ void* StartVirtualProcessor /* function */;
  /* 0x00d8 */ void* GetVpIndexFromApicId /* function */;
  /* 0x00e0 */ void* IumEfiRuntimeService /* function */;
  /* 0x00e8 */ void* SvmGetSystemCapabilities /* function */;
  /* 0x00f0 */ void* SvmGetDeviceCapabilities /* function */;
  /* 0x00f8 */ void* SvmCreatePasidSpace /* function */;
  /* 0x0100 */ void* SvmSetPasidAddressSpace /* function */;
  /* 0x0108 */ void* SvmFlushPasid /* function */;
  /* 0x0110 */ void* SvmAttachPasidSpace /* function */;
  /* 0x0118 */ void* SvmDetachPasidSpace /* function */;
  /* 0x0120 */ void* SvmEnablePasid /* function */;
  /* 0x0128 */ void* SvmDisablePasid /* function */;
  /* 0x0130 */ void* SvmAcknowledgePageRequest /* function */;
  /* 0x0138 */ void* SvmCreatePrQueue /* function */;
  /* 0x0140 */ void* SvmDeletePrQueue /* function */;
  /* 0x0148 */ void* SvmClearPrqStalled /* function */;
  /* 0x0150 */ void* SvmSetDeviceEnabled /* function */;
} HAL_INTEL_ENLIGHTENMENT_INFORMATION, *PHAL_INTEL_ENLIGHTENMENT_INFORMATION; /* size: 0x0158 */

typedef struct _HARDWARE_PTE
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
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 SoftwareWsIndex : 11; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0008 */

typedef struct _INITIAL_PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[3];
} INITIAL_PRIVILEGE_SET, *PINITIAL_PRIVILEGE_SET; /* size: 0x002c */

typedef struct _INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
} INTERFACE, *PINTERFACE; /* size: 0x0020 */

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
  ACPIBus = 17,
  MaximumInterfaceType = 18,
} INTERFACE_TYPE, *PINTERFACE_TYPE;

typedef enum _INTERLOCKED_RESULT
{
  ResultNegative = 1,
  ResultZero = 0,
  ResultPositive = 2,
} INTERLOCKED_RESULT, *PINTERLOCKED_RESULT;

typedef struct _INTERRUPT_FUNCTION_TABLE
{
  /* 0x0000 */ void* InitializeLocalUnit /* function */;
  /* 0x0008 */ void* InitializeIoUnit /* function */;
  /* 0x0010 */ void* SetPriority /* function */;
  /* 0x0018 */ void* GetLocalUnitError /* function */;
  /* 0x0020 */ void* ClearLocalUnitError /* function */;
  /* 0x0028 */ void* GetLogicalId /* function */;
  /* 0x0030 */ void* SetLogicalId /* function */;
  /* 0x0038 */ void* AcceptAndGetSource /* function */;
  /* 0x0040 */ void* EndOfInterrupt /* function */;
  /* 0x0048 */ void* FastEndOfInterrupt /* function */;
  /* 0x0050 */ void* SetLineState /* function */;
  /* 0x0058 */ void* RequestInterrupt /* function */;
  /* 0x0060 */ void* StartProcessor /* function */;
  /* 0x0068 */ void* GenerateMessage /* function */;
  /* 0x0070 */ void* ConvertId /* function */;
  /* 0x0078 */ void* SaveLocalInterrupts /* function */;
  /* 0x0080 */ void* ReplayLocalInterrupts /* function */;
  /* 0x0088 */ void* DeinitializeLocalUnit /* function */;
  /* 0x0090 */ void* DeinitializeIoUnit /* function */;
  /* 0x0098 */ void* QueryAndGetSource /* function */;
} INTERRUPT_FUNCTION_TABLE, *PINTERRUPT_FUNCTION_TABLE; /* size: 0x00a0 */

typedef struct _INTERRUPT_LINE
{
  /* 0x0000 */ unsigned long UnitId;
  /* 0x0004 */ long Line;
} INTERRUPT_LINE, *PINTERRUPT_LINE; /* size: 0x0008 */

typedef struct _INTERRUPT_LINE_STATE
{
  /* 0x0000 */ enum _KINTERRUPT_POLARITY Polarity;
  /* 0x0004 */ unsigned char EmulateActiveBoth;
  /* 0x0008 */ enum _KINTERRUPT_MODE TriggerMode;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ struct _INTERRUPT_LINE Routing;
  /* 0x0018 */ struct _INTERRUPT_TARGET ProcessorTarget;
  /* 0x0024 */ unsigned long Vector;
  /* 0x0028 */ unsigned long Priority;
} INTERRUPT_LINE_STATE, *PINTERRUPT_LINE_STATE; /* size: 0x002c */

typedef enum _INTERRUPT_PROBLEM
{
  InterruptProblemNone = 0,
  InterruptProblemMadtParsingFailure = 1,
  InterruptProblemNoControllersFound = 2,
  InterruptProblemFailedDiscovery = 3,
  InterruptProblemInitializeLocalUnitFailed = 4,
  InterruptProblemInitializeIoUnitFailed = 5,
  InterruptProblemSetLogicalIdFailed = 6,
  InterruptProblemSetLineStateFailed = 7,
  InterruptProblemGenerateMessageFailed = 8,
  InterruptProblemConvertIdFailed = 9,
  InterruptProblemCmciSetupFailed = 10,
  InterruptProblemQueryMaxProcessorsCalledTooEarly = 11,
  InterruptProblemProcessorReset = 12,
  InterruptProblemStartProcessorFailed = 13,
  InterruptProblemProcessorNotAlive = 14,
  InterruptProblemLowerIrqlViolation = 15,
  InterruptProblemInvalidIrql = 16,
  InterruptProblemNoSuchController = 17,
  InterruptProblemNoSuchLines = 18,
  InterruptProblemBadConnectionData = 19,
  InterruptProblemBadRoutingData = 20,
  InterruptProblemInvalidProcessor = 21,
  InterruptProblemFailedToAttainTarget = 22,
  InterruptProblemUnsupportedWiringConfiguration = 23,
  InterruptProblemSpareAlreadyStarted = 24,
  InterruptProblemClusterNotFullyReplaced = 25,
  InterruptProblemNewClusterAlreadyActive = 26,
  InterruptProblemNewClusterTooLarge = 27,
  InterruptProblemCannotHardwareQuiesce = 28,
  InterruptProblemIpiDestinationUpdateFailed = 29,
  InterruptProblemNoMemory = 30,
  InterruptProblemNoIrtEntries = 31,
  InterruptProblemConnectionDataBaitAndSwitch = 32,
  InterruptProblemInvalidLogicalFlatId = 33,
  InterruptProblemDeinitializeLocalUnitFailed = 34,
  InterruptProblemDeinitializeIoUnitFailed = 35,
  InterruptProblemMismatchedThermalLvtIsr = 36,
} INTERRUPT_PROBLEM, *PINTERRUPT_PROBLEM;

typedef enum _INTERRUPT_RESULT
{
  InterruptBeginFatalError = 0,
  InterruptBeginLine = 1,
  InterruptBeginSpurious = 2,
  InterruptBeginVector = 3,
  InterruptBeginNone = 4,
} INTERRUPT_RESULT, *PINTERRUPT_RESULT;

typedef struct _INTERRUPT_TARGET
{
  /* 0x0000 */ enum _INTERRUPT_TARGET_TYPE Target;
  union
  {
    /* 0x0004 */ unsigned long PhysicalTarget;
    /* 0x0004 */ unsigned long LogicalFlatTarget;
    /* 0x0004 */ unsigned long RemapIndex;
    struct
    {
      /* 0x0004 */ unsigned long ClusterId;
      /* 0x0008 */ unsigned long ClusterMask;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_17
    {
      /* 0x0004 */ unsigned long Low32;
      /* 0x0008 */ unsigned long High32;
    } /* size: 0x0008 */ HypervisorTarget;
  }; /* size: 0x0008 */
} INTERRUPT_TARGET, *PINTERRUPT_TARGET; /* size: 0x000c */

typedef enum _INTERRUPT_TARGET_TYPE
{
  InterruptTargetInvalid = 0,
  InterruptTargetAllIncludingSelf = 1,
  InterruptTargetAllExcludingSelf = 2,
  InterruptTargetSelfOnly = 3,
  InterruptTargetPhysical = 4,
  InterruptTargetLogicalFlat = 5,
  InterruptTargetLogicalClustered = 6,
  InterruptTargetRemapIndex = 7,
  InterruptTargetHypervisor = 8,
} INTERRUPT_TARGET_TYPE, *PINTERRUPT_TARGET_TYPE;

typedef struct _IOAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char IOAPICID;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long IOAPICAddress;
  /* 0x0008 */ unsigned long SystemVectorBase;
} IOAPIC, *PIOAPIC; /* size: 0x000c */

typedef struct _IOSAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char IOSAPICID;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long SystemVectorBase;
  /* 0x0008 */ unsigned __int64 IOSAPICAddress;
} IOSAPIC, *PIOSAPIC; /* size: 0x0010 */

typedef enum _IO_ALLOCATION_ACTION
{
  KeepObject = 1,
  DeallocateObject = 2,
  DeallocateObjectKeepRegisters = 3,
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;

typedef struct _IO_APIC_DATA
{
  /* 0x0000 */ unsigned __int64 PhysicalAddress;
  /* 0x0008 */ unsigned long Identifier;
  /* 0x0010 */ struct _IO_APIC_REGISTERS* BaseAddress;
  /* 0x0018 */ unsigned char Version;
  /* 0x0019 */ unsigned char PinCount;
  /* 0x001a */ unsigned char Initialized;
  /* 0x001b */ unsigned char InitializedFirstLocalUnit;
  /* 0x001c */ unsigned long GsiBase;
  /* 0x0020 */ unsigned long CmciRegister;
  /* 0x0024 */ unsigned char IoUnitMissing;
  /* 0x0025 */ char __PADDING__[3];
} IO_APIC_DATA, *PIO_APIC_DATA; /* size: 0x0028 */

typedef struct _IO_APIC_REGISTERS
{
  /* 0x0000 */ volatile unsigned long RegisterIndex;
  /* 0x0004 */ volatile unsigned long Reserved1[3];
  /* 0x0010 */ volatile unsigned long RegisterValue;
} IO_APIC_REGISTERS, *PIO_APIC_REGISTERS; /* size: 0x0014 */

typedef struct _IO_COMPLETION_CONTEXT
{
  /* 0x0000 */ void* Port;
  /* 0x0008 */ void* Key;
} IO_COMPLETION_CONTEXT, *PIO_COMPLETION_CONTEXT; /* size: 0x0010 */

typedef struct _IO_DRIVER_CREATE_CONTEXT
{
  /* 0x0000 */ short Size;
  /* 0x0008 */ struct _ECP_LIST* ExtraCreateParameter;
  /* 0x0010 */ void* DeviceObjectHint;
  /* 0x0018 */ struct _TXN_PARAMETER_BLOCK* TxnParameters;
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT; /* size: 0x0020 */

typedef struct _IO_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long GlobalSystemInterruptVector;
} IO_NMISOURCE, *PIO_NMISOURCE; /* size: 0x0008 */

typedef struct _IO_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Option;
  /* 0x0001 */ unsigned char Type;
  /* 0x0002 */ unsigned char ShareDisposition;
  /* 0x0003 */ unsigned char Spare1;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short Spare2;
  union // _TAG_UNNAMED_18
  {
    union
    {
      struct // _TAG_UNNAMED_19
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Port;
      struct // _TAG_UNNAMED_19
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory;
      struct // _TAG_UNNAMED_20
      {
        /* 0x0008 */ unsigned long MinimumVector;
        /* 0x000c */ unsigned long MaximumVector;
        /* 0x0010 */ unsigned short AffinityPolicy;
        /* 0x0012 */ unsigned short Group;
        /* 0x0014 */ enum _IRQ_PRIORITY PriorityPolicy;
        /* 0x0018 */ unsigned __int64 TargetedProcessors;
      } /* size: 0x0018 */ Interrupt;
      struct // _TAG_UNNAMED_21
      {
        /* 0x0008 */ unsigned long MinimumChannel;
        /* 0x000c */ unsigned long MaximumChannel;
      } /* size: 0x0008 */ Dma;
      struct // _TAG_UNNAMED_22
      {
        /* 0x0008 */ unsigned long RequestLine;
        /* 0x000c */ unsigned long Reserved;
        /* 0x0010 */ unsigned long Channel;
        /* 0x0014 */ unsigned long TransferWidth;
      } /* size: 0x0010 */ DmaV3;
      struct // _TAG_UNNAMED_19
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Generic;
      struct // _TAG_UNNAMED_9
      {
        /* 0x0008 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct // _TAG_UNNAMED_23
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long MinBusNumber;
        /* 0x0010 */ unsigned long MaxBusNumber;
        /* 0x0014 */ unsigned long Reserved;
      } /* size: 0x0010 */ BusNumber;
      struct // _TAG_UNNAMED_24
      {
        /* 0x0008 */ unsigned long Priority;
        /* 0x000c */ unsigned long Reserved1;
        /* 0x0010 */ unsigned long Reserved2;
      } /* size: 0x000c */ ConfigData;
      struct // _TAG_UNNAMED_25
      {
        /* 0x0008 */ unsigned long Length40;
        /* 0x000c */ unsigned long Alignment40;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory40;
      struct // _TAG_UNNAMED_26
      {
        /* 0x0008 */ unsigned long Length48;
        /* 0x000c */ unsigned long Alignment48;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory48;
      struct // _TAG_UNNAMED_27
      {
        /* 0x0008 */ unsigned long Length64;
        /* 0x000c */ unsigned long Alignment64;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory64;
      struct // _TAG_UNNAMED_15
      {
        /* 0x0008 */ unsigned char Class;
        /* 0x0009 */ unsigned char Type;
        /* 0x000a */ unsigned char Reserved1;
        /* 0x000b */ unsigned char Reserved2;
        /* 0x000c */ unsigned long IdLowPart;
        /* 0x0010 */ unsigned long IdHighPart;
      } /* size: 0x000c */ Connection;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u;
} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR; /* size: 0x0020 */

typedef struct _IO_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST; /* size: 0x0028 */

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

typedef struct _IO_SECURITY_CONTEXT
{
  /* 0x0000 */ struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
  /* 0x0008 */ struct _ACCESS_STATE* AccessState;
  /* 0x0010 */ unsigned long DesiredAccess;
  /* 0x0014 */ unsigned long FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT; /* size: 0x0018 */

typedef struct _IO_STACK_LOCATION
{
  /* 0x0000 */ unsigned char MajorFunction;
  /* 0x0001 */ unsigned char MinorFunction;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char Control;
  union // _TAG_UNNAMED_28
  {
    union
    {
      struct // _TAG_UNNAMED_29
      {
        /* 0x0008 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0010 */ unsigned long Options;
        /* 0x0018 */ unsigned short FileAttributes;
        /* 0x001a */ unsigned short ShareAccess;
        /* 0x0020 */ unsigned long EaLength;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ Create;
      struct // _TAG_UNNAMED_30
      {
        /* 0x0008 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0010 */ unsigned long Options;
        /* 0x0018 */ unsigned short Reserved;
        /* 0x001a */ unsigned short ShareAccess;
        /* 0x0020 */ struct _NAMED_PIPE_CREATE_PARAMETERS* Parameters;
      } /* size: 0x0020 */ CreatePipe;
      struct // _TAG_UNNAMED_31
      {
        /* 0x0008 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0010 */ unsigned long Options;
        /* 0x0018 */ unsigned short Reserved;
        /* 0x001a */ unsigned short ShareAccess;
        /* 0x0020 */ struct _MAILSLOT_CREATE_PARAMETERS* Parameters;
      } /* size: 0x0020 */ CreateMailslot;
      struct // _TAG_UNNAMED_32
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ unsigned long Key;
        /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0018 */ Read;
      struct // _TAG_UNNAMED_32
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ unsigned long Key;
        /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0018 */ Write;
      struct // _TAG_UNNAMED_33
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ struct _UNICODE_STRING* FileName;
        /* 0x0018 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0020 */ unsigned long FileIndex;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ QueryDirectory;
      struct // _TAG_UNNAMED_34
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ unsigned long CompletionFilter;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ NotifyDirectory;
      struct // _TAG_UNNAMED_35
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QueryFile;
      struct // _TAG_UNNAMED_36
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0018 */ struct _FILE_OBJECT* FileObject;
        union
        {
          struct
          {
            /* 0x0020 */ unsigned char ReplaceIfExists;
            /* 0x0021 */ unsigned char AdvanceOnly;
          }; /* size: 0x0002 */
          /* 0x0020 */ unsigned long ClusterCount;
          /* 0x0020 */ void* DeleteHandle;
        }; /* size: 0x0008 */
      } /* size: 0x0020 */ SetFile;
      struct // _TAG_UNNAMED_37
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ void* EaList;
        /* 0x0018 */ unsigned long EaListLength;
        /* 0x0020 */ unsigned long EaIndex;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ QueryEa;
      struct // _TAG_UNNAMED_38
      {
        /* 0x0008 */ unsigned long Length;
      } /* size: 0x0004 */ SetEa;
      struct // _TAG_UNNAMED_39
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ enum _FSINFOCLASS FsInformationClass;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QueryVolume;
      struct // _TAG_UNNAMED_39
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ enum _FSINFOCLASS FsInformationClass;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ SetVolume;
      struct // _TAG_UNNAMED_40
      {
        /* 0x0008 */ unsigned long OutputBufferLength;
        /* 0x0010 */ unsigned long InputBufferLength;
        /* 0x0018 */ unsigned long FsControlCode;
        /* 0x0020 */ void* Type3InputBuffer;
      } /* size: 0x0020 */ FileSystemControl;
      struct // _TAG_UNNAMED_41
      {
        /* 0x0008 */ union _LARGE_INTEGER* Length;
        /* 0x0010 */ unsigned long Key;
        /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0018 */ LockControl;
      struct // _TAG_UNNAMED_42
      {
        /* 0x0008 */ unsigned long OutputBufferLength;
        /* 0x0010 */ unsigned long InputBufferLength;
        /* 0x0018 */ unsigned long IoControlCode;
        /* 0x0020 */ void* Type3InputBuffer;
      } /* size: 0x0020 */ DeviceIoControl;
      struct // _TAG_UNNAMED_43
      {
        /* 0x0008 */ unsigned long SecurityInformation;
        /* 0x0010 */ unsigned long Length;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QuerySecurity;
      struct // _TAG_UNNAMED_44
      {
        /* 0x0008 */ unsigned long SecurityInformation;
        /* 0x0010 */ void* SecurityDescriptor;
      } /* size: 0x0010 */ SetSecurity;
      struct // _TAG_UNNAMED_45
      {
        /* 0x0008 */ struct _VPB* Vpb;
        /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0010 */ MountVolume;
      struct // _TAG_UNNAMED_45
      {
        /* 0x0008 */ struct _VPB* Vpb;
        /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0010 */ VerifyVolume;
      struct // _TAG_UNNAMED_46
      {
        /* 0x0008 */ struct _SCSI_REQUEST_BLOCK* Srb;
      } /* size: 0x0008 */ Scsi;
      struct // _TAG_UNNAMED_47
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ void* StartSid;
        /* 0x0018 */ struct _FILE_GET_QUOTA_INFORMATION* SidList;
        /* 0x0020 */ unsigned long SidListLength;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ QueryQuota;
      struct // _TAG_UNNAMED_38
      {
        /* 0x0008 */ unsigned long Length;
      } /* size: 0x0004 */ SetQuota;
      struct // _TAG_UNNAMED_48
      {
        /* 0x0008 */ enum _DEVICE_RELATION_TYPE Type;
      } /* size: 0x0004 */ QueryDeviceRelations;
      struct // _TAG_UNNAMED_49
      {
        /* 0x0008 */ const struct _GUID* InterfaceType;
        /* 0x0010 */ unsigned short Size;
        /* 0x0012 */ unsigned short Version;
        /* 0x0018 */ struct _INTERFACE* Interface;
        /* 0x0020 */ void* InterfaceSpecificData;
      } /* size: 0x0020 */ QueryInterface;
      struct // _TAG_UNNAMED_50
      {
        /* 0x0008 */ struct _DEVICE_CAPABILITIES* Capabilities;
      } /* size: 0x0008 */ DeviceCapabilities;
      struct // _TAG_UNNAMED_51
      {
        /* 0x0008 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList;
      } /* size: 0x0008 */ FilterResourceRequirements;
      struct // _TAG_UNNAMED_52
      {
        /* 0x0008 */ unsigned long WhichSpace;
        /* 0x0010 */ void* Buffer;
        /* 0x0018 */ unsigned long Offset;
        /* 0x0020 */ unsigned long Length;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ ReadWriteConfig;
      struct // _TAG_UNNAMED_53
      {
        /* 0x0008 */ unsigned char Lock;
      } /* size: 0x0001 */ SetLock;
      struct // _TAG_UNNAMED_54
      {
        /* 0x0008 */ enum BUS_QUERY_ID_TYPE IdType;
      } /* size: 0x0004 */ QueryId;
      struct // _TAG_UNNAMED_55
      {
        /* 0x0008 */ enum DEVICE_TEXT_TYPE DeviceTextType;
        /* 0x0010 */ unsigned long LocaleId;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QueryDeviceText;
      struct // _TAG_UNNAMED_56
      {
        /* 0x0008 */ unsigned char InPath;
        /* 0x0009 */ unsigned char Reserved[3];
        /* 0x0010 */ enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ UsageNotification;
      struct // _TAG_UNNAMED_57
      {
        /* 0x0008 */ enum _SYSTEM_POWER_STATE PowerState;
      } /* size: 0x0004 */ WaitWake;
      struct // _TAG_UNNAMED_58
      {
        /* 0x0008 */ struct _POWER_SEQUENCE* PowerSequence;
      } /* size: 0x0008 */ PowerSequence;
      struct // _TAG_UNNAMED_59
      {
        union
        {
          /* 0x0008 */ unsigned long SystemContext;
          /* 0x0008 */ struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
        }; /* size: 0x0004 */
        /* 0x0010 */ enum _POWER_STATE_TYPE Type;
        /* 0x0018 */ union _POWER_STATE State;
        /* 0x0020 */ enum POWER_ACTION ShutdownType;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ Power;
      struct // _TAG_UNNAMED_60
      {
        /* 0x0008 */ struct _CM_RESOURCE_LIST* AllocatedResources;
        /* 0x0010 */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
      } /* size: 0x0010 */ StartDevice;
      struct // _TAG_UNNAMED_61
      {
        /* 0x0008 */ unsigned __int64 ProviderId;
        /* 0x0010 */ void* DataPath;
        /* 0x0018 */ unsigned long BufferSize;
        /* 0x0020 */ void* Buffer;
      } /* size: 0x0020 */ WMI;
      struct // _TAG_UNNAMED_62
      {
        /* 0x0008 */ void* Argument1;
        /* 0x0010 */ void* Argument2;
        /* 0x0018 */ void* Argument3;
        /* 0x0020 */ void* Argument4;
      } /* size: 0x0020 */ Others;
    }; /* size: 0x0020 */
  } /* size: 0x0020 */ Parameters;
  /* 0x0028 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0030 */ struct _FILE_OBJECT* FileObject;
  /* 0x0038 */ void* CompletionRoutine /* function */;
  /* 0x0040 */ void* Context;
} IO_STACK_LOCATION, *PIO_STACK_LOCATION; /* size: 0x0048 */

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0010 */

struct _IO_TIMER;

typedef struct _IRP
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0008 */ struct _MDL* MdlAddress;
  /* 0x0010 */ unsigned long Flags;
  union // _TAG_UNNAMED_63
  {
    union
    {
      /* 0x0018 */ struct _IRP* MasterIrp;
      /* 0x0018 */ long IrpCount;
      /* 0x0018 */ void* SystemBuffer;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ AssociatedIrp;
  /* 0x0020 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0030 */ struct _IO_STATUS_BLOCK IoStatus;
  /* 0x0040 */ char RequestorMode;
  /* 0x0041 */ unsigned char PendingReturned;
  /* 0x0042 */ char StackCount;
  /* 0x0043 */ char CurrentLocation;
  /* 0x0044 */ unsigned char Cancel;
  /* 0x0045 */ unsigned char CancelIrql;
  /* 0x0046 */ char ApcEnvironment;
  /* 0x0047 */ unsigned char AllocationFlags;
  /* 0x0048 */ struct _IO_STATUS_BLOCK* UserIosb;
  /* 0x0050 */ struct _KEVENT* UserEvent;
  union // _TAG_UNNAMED_64
  {
    union
    {
      struct // _TAG_UNNAMED_65
      {
        union
        {
          /* 0x0058 */ void* UserApcRoutine /* function */;
          /* 0x0058 */ void* IssuingProcess;
        }; /* size: 0x0008 */
        /* 0x0060 */ void* UserApcContext;
      } /* size: 0x0010 */ AsynchronousParameters;
      /* 0x0058 */ union _LARGE_INTEGER AllocationSize;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Overlay;
  /* 0x0068 */ void* CancelRoutine /* function */;
  /* 0x0070 */ void* UserBuffer;
  union // _TAG_UNNAMED_66
  {
    union
    {
      struct // _TAG_UNNAMED_67
      {
        union
        {
          /* 0x0078 */ struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
          /* 0x0078 */ void* DriverContext[4];
        }; /* size: 0x0020 */
        /* 0x0098 */ struct _ETHREAD* Thread;
        /* 0x00a0 */ char* AuxiliaryBuffer;
        /* 0x00a8 */ struct _LIST_ENTRY ListEntry;
        union
        {
          /* 0x00b8 */ struct _IO_STACK_LOCATION* CurrentStackLocation;
          /* 0x00b8 */ unsigned long PacketType;
        }; /* size: 0x0008 */
        /* 0x00c0 */ struct _FILE_OBJECT* OriginalFileObject;
      } /* size: 0x0050 */ Overlay;
      /* 0x0078 */ struct _KAPC Apc;
      /* 0x0078 */ void* CompletionKey;
    }; /* size: 0x0058 */
  } /* size: 0x0058 */ Tail;
} IRP, *PIRP; /* size: 0x00d0 */

typedef enum _IRQ_PRIORITY
{
  IrqPriorityUndefined = 0,
  IrqPriorityLow = 1,
  IrqPriorityNormal = 2,
  IrqPriorityHigh = 3,
} IRQ_PRIORITY, *PIRQ_PRIORITY;

typedef struct _ISA_VECTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char Bus;
  /* 0x0003 */ unsigned char Source;
  /* 0x0004 */ unsigned long GlobalSystemInterruptVector;
  /* 0x0008 */ unsigned short Flags;
} ISA_VECTOR, *PISA_VECTOR; /* size: 0x000a */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x0010 */ struct _LIST_ENTRY ApcListEntry;
  /* 0x0020 */ void* Reserved[3];
  /* 0x0038 */ void* NormalContext;
  /* 0x0040 */ void* SystemArgument1;
  /* 0x0048 */ void* SystemArgument2;
  /* 0x0050 */ char ApcStateIndex;
  /* 0x0051 */ char ApcMode;
  /* 0x0052 */ unsigned char Inserted;
  /* 0x0053 */ char __PADDING__[5];
} KAPC, *PKAPC; /* size: 0x0058 */

typedef struct _KDESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad[3];
  /* 0x0006 */ unsigned short Limit;
  /* 0x0008 */ void* Base;
} KDESCRIPTOR, *PKDESCRIPTOR; /* size: 0x0010 */

typedef struct _KDEVICE_QUEUE
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ struct _LIST_ENTRY DeviceListHead;
  /* 0x0018 */ unsigned __int64 Lock;
  union
  {
    /* 0x0020 */ unsigned char Busy;
    struct /* bitfield */
    {
      /* 0x0020 */ __int64 Reserved : 8; /* bit position: 0 */
      /* 0x0020 */ __int64 Hint : 56; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KDEVICE_QUEUE, *PKDEVICE_QUEUE; /* size: 0x0028 */

typedef struct _KDEVICE_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceListEntry;
  /* 0x0010 */ unsigned long SortKey;
  /* 0x0014 */ unsigned char Inserted;
  /* 0x0015 */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0018 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _KFLOATING_SAVE
{
  /* 0x0000 */ unsigned long Dummy;
} KFLOATING_SAVE, *PKFLOATING_SAVE; /* size: 0x0004 */

typedef union _KGDTENTRY64
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short LimitLow;
      /* 0x0002 */ unsigned short BaseLow;
      union
      {
        struct // _TAG_UNNAMED_68
        {
          /* 0x0004 */ unsigned char BaseMiddle;
          /* 0x0005 */ unsigned char Flags1;
          /* 0x0006 */ unsigned char Flags2;
          /* 0x0007 */ unsigned char BaseHigh;
        } /* size: 0x0004 */ Bytes;
        struct
        {
          struct // _TAG_UNNAMED_69
          {
            struct /* bitfield */
            {
              /* 0x0004 */ unsigned long BaseMiddle : 8; /* bit position: 0 */
              /* 0x0004 */ unsigned long Type : 5; /* bit position: 8 */
              /* 0x0004 */ unsigned long Dpl : 2; /* bit position: 13 */
              /* 0x0004 */ unsigned long Present : 1; /* bit position: 15 */
              /* 0x0004 */ unsigned long LimitHigh : 4; /* bit position: 16 */
              /* 0x0004 */ unsigned long System : 1; /* bit position: 20 */
              /* 0x0004 */ unsigned long LongMode : 1; /* bit position: 21 */
              /* 0x0004 */ unsigned long DefaultBig : 1; /* bit position: 22 */
              /* 0x0004 */ unsigned long Granularity : 1; /* bit position: 23 */
              /* 0x0004 */ unsigned long BaseHigh : 8; /* bit position: 24 */
            }; /* bitfield */
          } /* size: 0x0004 */ Bits;
          /* 0x0008 */ unsigned long BaseUpper;
          /* 0x000c */ unsigned long MustBeZero;
        }; /* size: 0x000c */
      }; /* size: 0x000c */
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0000 */ __int64 DataLow;
      /* 0x0008 */ __int64 DataHigh;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} KGDTENTRY64, *PKGDTENTRY64; /* size: 0x0010 */

typedef union _KIDTENTRY64
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short OffsetLow;
      /* 0x0002 */ unsigned short Selector;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned short IstIndex : 3; /* bit position: 0 */
        /* 0x0004 */ unsigned short Reserved0 : 5; /* bit position: 3 */
        /* 0x0004 */ unsigned short Type : 5; /* bit position: 8 */
        /* 0x0004 */ unsigned short Dpl : 2; /* bit position: 13 */
        /* 0x0004 */ unsigned short Present : 1; /* bit position: 15 */
      }; /* bitfield */
      /* 0x0006 */ unsigned short OffsetMiddle;
      /* 0x0008 */ unsigned long OffsetHigh;
      /* 0x000c */ unsigned long Reserved1;
    }; /* size: 0x0010 */
    /* 0x0000 */ unsigned __int64 Alignment;
  }; /* size: 0x0010 */
} KIDTENTRY64, *PKIDTENTRY64; /* size: 0x0010 */

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

typedef enum _KINTERRUPT_POLARITY
{
  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptRisingEdge = 1,
  InterruptActiveLow = 2,
  InterruptFallingEdge = 2,
  InterruptActiveBoth = 3,
  InterruptActiveBothTriggerLow = 3,
  InterruptActiveBothTriggerHigh = 4,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

struct _KNODE;

typedef enum _KNOWN_CONTROLLER_TYPE
{
  InterruptControllerInvalid = 0,
  InterruptControllerPic = 1,
  InterruptControllerApic = 2,
  InterruptControllerGic = 3,
  InterruptControllerBcm = 4,
  InterruptControllerUnknown = 4096,
} KNOWN_CONTROLLER_TYPE, *PKNOWN_CONTROLLER_TYPE;

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ union _KGDTENTRY64* GdtBase;
      /* 0x0008 */ struct _KTSS64* TssBase;
      /* 0x0010 */ unsigned __int64 UserRsp;
      /* 0x0018 */ struct _KPCR* Self;
      /* 0x0020 */ struct _KPRCB* CurrentPrcb;
      /* 0x0028 */ struct _KSPIN_LOCK_QUEUE* LockArray;
      /* 0x0030 */ void* Used_Self;
    }; /* size: 0x0038 */
  }; /* size: 0x0038 */
  /* 0x0038 */ union _KIDTENTRY64* IdtBase;
  /* 0x0040 */ unsigned __int64 Unused[2];
  /* 0x0050 */ unsigned char Irql;
  /* 0x0051 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x0052 */ unsigned char ObsoleteNumber;
  /* 0x0053 */ unsigned char Fill0;
  /* 0x0054 */ unsigned long Unused0[3];
  /* 0x0060 */ unsigned short MajorVersion;
  /* 0x0062 */ unsigned short MinorVersion;
  /* 0x0064 */ unsigned long StallScaleFactor;
  /* 0x0068 */ void* Unused1[3];
  /* 0x0080 */ unsigned long KernelReserved[15];
  /* 0x00bc */ unsigned long SecondLevelCacheSize;
  /* 0x00c0 */ unsigned long HalReserved[16];
  /* 0x0100 */ unsigned long Unused2;
  /* 0x0108 */ void* KdVersionBlock;
  /* 0x0110 */ void* Unused3;
  /* 0x0118 */ unsigned long PcrAlign1[24];
} KPCR, *PKPCR; /* size: 0x0178 */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned long MxCsr;
  /* 0x0004 */ unsigned char LegacyNumber;
  /* 0x0005 */ unsigned char ReservedMustBeZero;
  /* 0x0006 */ unsigned char InterruptRequest;
  /* 0x0007 */ unsigned char IdleHalt;
  /* 0x0008 */ struct _KTHREAD* CurrentThread;
  /* 0x0010 */ struct _KTHREAD* NextThread;
  /* 0x0018 */ struct _KTHREAD* IdleThread;
  /* 0x0020 */ unsigned char NestingLevel;
  /* 0x0021 */ unsigned char ClockOwner;
  union
  {
    /* 0x0022 */ unsigned char PendingTickFlags;
    struct /* bitfield */
    {
      /* 0x0022 */ unsigned char PendingTick : 1; /* bit position: 0 */
      /* 0x0022 */ unsigned char PendingBackupTick : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0023 */ unsigned char IdleState;
  /* 0x0024 */ unsigned long Number;
  /* 0x0028 */ unsigned __int64 RspBase;
  /* 0x0030 */ unsigned __int64 PrcbLock;
  /* 0x0038 */ char* PriorityState;
  /* 0x0040 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x05f0 */ char CpuType;
  /* 0x05f1 */ char CpuID;
  union
  {
    /* 0x05f2 */ unsigned short CpuStep;
    struct
    {
      /* 0x05f2 */ unsigned char CpuStepping;
      /* 0x05f3 */ unsigned char CpuModel;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x05f4 */ unsigned long MHz;
  /* 0x05f8 */ unsigned __int64 HalReserved[8];
  /* 0x0638 */ unsigned short MinorVersion;
  /* 0x063a */ unsigned short MajorVersion;
  /* 0x063c */ unsigned char BuildType;
  /* 0x063d */ unsigned char CpuVendor;
  /* 0x063e */ unsigned char CoresPerPhysicalProcessor;
  /* 0x063f */ unsigned char LogicalProcessorsPerCore;
  /* 0x0640 */ struct _KNODE* ParentNode;
  /* 0x0648 */ unsigned __int64 GroupSetMember;
  /* 0x0650 */ unsigned char Group;
  /* 0x0651 */ unsigned char GroupIndex;
  /* 0x0652 */ unsigned char PrcbPad05[2];
  /* 0x0654 */ unsigned long InitialApicId;
  /* 0x0658 */ unsigned long ScbOffset;
  /* 0x065c */ unsigned long ApicMask;
  /* 0x0660 */ void* AcpiReserved;
  /* 0x0668 */ unsigned long CFlushSize;
  /* 0x066c */ unsigned long PrcbPad10;
} KPRCB, *PKPRCB; /* size: 0x0670 */

struct _KPROCESS;

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _KSPECIAL_REGISTERS SpecialRegisters;
  /* 0x00e0 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x05b0 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned __int64 Cr0;
  /* 0x0008 */ unsigned __int64 Cr2;
  /* 0x0010 */ unsigned __int64 Cr3;
  /* 0x0018 */ unsigned __int64 Cr4;
  /* 0x0020 */ unsigned __int64 KernelDr0;
  /* 0x0028 */ unsigned __int64 KernelDr1;
  /* 0x0030 */ unsigned __int64 KernelDr2;
  /* 0x0038 */ unsigned __int64 KernelDr3;
  /* 0x0040 */ unsigned __int64 KernelDr6;
  /* 0x0048 */ unsigned __int64 KernelDr7;
  /* 0x0050 */ struct _KDESCRIPTOR Gdtr;
  /* 0x0060 */ struct _KDESCRIPTOR Idtr;
  /* 0x0070 */ unsigned short Tr;
  /* 0x0072 */ unsigned short Ldtr;
  /* 0x0074 */ unsigned long MxCsr;
  /* 0x0078 */ unsigned __int64 DebugControl;
  /* 0x0080 */ unsigned __int64 LastBranchToRip;
  /* 0x0088 */ unsigned __int64 LastBranchFromRip;
  /* 0x0090 */ unsigned __int64 LastExceptionToRip;
  /* 0x0098 */ unsigned __int64 LastExceptionFromRip;
  /* 0x00a0 */ unsigned __int64 Cr8;
  /* 0x00a8 */ unsigned __int64 MsrGsBase;
  /* 0x00b0 */ unsigned __int64 MsrGsSwap;
  /* 0x00b8 */ unsigned __int64 MsrStar;
  /* 0x00c0 */ unsigned __int64 MsrLStar;
  /* 0x00c8 */ unsigned __int64 MsrCStar;
  /* 0x00d0 */ unsigned __int64 MsrSyscallMask;
  /* 0x00d8 */ unsigned __int64 Xcr0;
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00e0 */

typedef struct _KSPIN_LOCK_QUEUE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE* volatile Next;
  /* 0x0008 */ unsigned __int64* volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE; /* size: 0x0010 */

typedef struct _KTB_FLUSH_VA
{
  union // _TAG_UNNAMED_70
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 NumberOfEntries : 11; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 PageSize : 1; /* bit position: 11 */
      }; /* bitfield */
      /* 0x0000 */ void* Va;
      /* 0x0000 */ unsigned __int64 VaLong;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} KTB_FLUSH_VA, *PKTB_FLUSH_VA; /* size: 0x0008 */

struct _KTHREAD;

typedef enum _KTIMER2_TYPE
{
  KTimer2TypeMin = 0,
  KTimer2Plain = 0,
  KTimer2IdleResilient = 1,
  KTimer2HighResolution = 2,
  KTimer2NoWake = 3,
  KTimer2NoWakeFinite = 4,
  KTimer2TypeMax = 5,
} KTIMER2_TYPE, *PKTIMER2_TYPE;

typedef struct _KTSS64
{
  /* 0x0000 */ unsigned long Reserved0;
  /* 0x0004 */ unsigned __int64 Rsp0;
  /* 0x000c */ unsigned __int64 Rsp1;
  /* 0x0014 */ unsigned __int64 Rsp2;
  /* 0x001c */ unsigned __int64 Ist[8];
  /* 0x005c */ unsigned __int64 Reserved1;
  /* 0x0064 */ unsigned short Reserved2;
  /* 0x0066 */ unsigned short IoMapBase;
} KTSS64, *PKTSS64; /* size: 0x0068 */

typedef struct _KWAIT_CHAIN
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY Head;
} KWAIT_CHAIN, *PKWAIT_CHAIN; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_71
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _LOCAL_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ProcessorID;
  /* 0x0003 */ unsigned short Flags;
  /* 0x0005 */ unsigned char LINTIN;
} LOCAL_NMISOURCE, *PLOCAL_NMISOURCE; /* size: 0x0006 */

typedef struct _LOOKASIDE_LIST_EX
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE_POOL L;
} LOOKASIDE_LIST_EX, *PLOOKASIDE_LIST_EX; /* size: 0x0060 */

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

typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _MAILSLOT_CREATE_PARAMETERS
{
  /* 0x0000 */ unsigned long MailslotQuota;
  /* 0x0004 */ unsigned long MaximumMessageSize;
  /* 0x0008 */ union _LARGE_INTEGER ReadTimeout;
  /* 0x0010 */ unsigned char TimeoutSpecified;
  /* 0x0011 */ char __PADDING__[7];
} MAILSLOT_CREATE_PARAMETERS, *PMAILSLOT_CREATE_PARAMETERS; /* size: 0x0018 */

typedef struct _MAPIC
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long LocalAPICAddress;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ unsigned long APICTables[1];
} MAPIC, *PMAPIC; /* size: 0x0030 */

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

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0008 */ short Size;
  /* 0x000a */ short MdlFlags;
  /* 0x0010 */ struct _EPROCESS* Process;
  /* 0x0018 */ void* MappedSystemVa;
  /* 0x0020 */ void* StartVa;
  /* 0x0028 */ unsigned long ByteCount;
  /* 0x002c */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x0030 */

typedef enum _MEMORY_CACHING_TYPE
{
  MmNonCached = 0,
  MmCached = 1,
  MmWriteCombined = 2,
  MmHardwareCoherentCached = 3,
  MmNonCachedUnordered = 4,
  MmUSWCCached = 5,
  MmMaximumCacheType = 6,
  MmNotMapped = -1,
} MEMORY_CACHING_TYPE, *PMEMORY_CACHING_TYPE;

typedef enum _MEMORY_CACHING_TYPE_ORIG
{
  MmFrameBufferCached = 2,
} MEMORY_CACHING_TYPE_ORIG, *PMEMORY_CACHING_TYPE_ORIG;

typedef enum _MODE
{
  KernelMode = 0,
  UserMode = 1,
  MaximumMode = 2,
} MODE, *PMODE;

typedef struct _NAMED_PIPE_CREATE_PARAMETERS
{
  /* 0x0000 */ unsigned long NamedPipeType;
  /* 0x0004 */ unsigned long ReadMode;
  /* 0x0008 */ unsigned long CompletionMode;
  /* 0x000c */ unsigned long MaximumInstances;
  /* 0x0010 */ unsigned long InboundQuota;
  /* 0x0014 */ unsigned long OutboundQuota;
  /* 0x0018 */ union _LARGE_INTEGER DefaultTimeout;
  /* 0x0020 */ unsigned char TimeoutSpecified;
  /* 0x0021 */ char __PADDING__[7];
} NAMED_PIPE_CREATE_PARAMETERS, *PNAMED_PIPE_CREATE_PARAMETERS; /* size: 0x0028 */

typedef struct _NPAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST; /* size: 0x0080 */

typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0008 */ void* StackBase;
  /* 0x0010 */ void* StackLimit;
  /* 0x0018 */ void* SubSystemTib;
  union
  {
    /* 0x0020 */ void* FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* ArbitraryUserPointer;
  /* 0x0030 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x0038 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned __int64 OwnerThread;
  union
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long IoPriorityBoosted : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned long OwnerReferenced : 1; /* bit position: 1 */
      /* 0x0008 */ unsigned long OwnerCount : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0008 */ unsigned long TableSize;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0010 */

typedef struct _PAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
} PAGED_LOOKASIDE_LIST, *PPAGED_LOOKASIDE_LIST; /* size: 0x0080 */

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

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _POWER_SEQUENCE
{
  /* 0x0000 */ unsigned long SequenceD1;
  /* 0x0004 */ unsigned long SequenceD2;
  /* 0x0008 */ unsigned long SequenceD3;
} POWER_SEQUENCE, *PPOWER_SEQUENCE; /* size: 0x000c */

typedef union _POWER_STATE
{
  union
  {
    /* 0x0000 */ enum _SYSTEM_POWER_STATE SystemState;
    /* 0x0000 */ enum _DEVICE_POWER_STATE DeviceState;
  }; /* size: 0x0004 */
} POWER_STATE, *PPOWER_STATE; /* size: 0x0004 */

typedef enum _POWER_STATE_TYPE
{
  SystemPowerState = 0,
  DevicePowerState = 1,
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;

typedef struct _PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[1];
} PRIVILEGE_SET, *PPRIVILEGE_SET; /* size: 0x0014 */

typedef struct _PROCLOCALAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ACPIProcessorID;
  /* 0x0003 */ unsigned char APICID;
  /* 0x0004 */ unsigned long Flags;
} PROCLOCALAPIC, *PPROCLOCALAPIC; /* size: 0x0008 */

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

typedef struct _REGISTERED_INTERRUPT_CONTROLLER
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ void* InternalData;
  /* 0x0018 */ unsigned long InternalDataSize;
  /* 0x0020 */ struct _INTERRUPT_FUNCTION_TABLE FunctionTable;
  /* 0x00c0 */ enum _KNOWN_CONTROLLER_TYPE KnownType;
  /* 0x00c4 */ unsigned long Capabilities;
  /* 0x00c8 */ unsigned long Flags;
  /* 0x00cc */ unsigned long MaxPriority;
  /* 0x00d0 */ unsigned long UnitId;
  /* 0x00d8 */ struct _LIST_ENTRY LinesHead;
  /* 0x00e8 */ struct _LIST_ENTRY OutputLinesHead;
  /* 0x00f8 */ long MinLine;
  /* 0x00fc */ long MaxLine;
  /* 0x0100 */ unsigned long MaxClusterSize;
  /* 0x0104 */ unsigned long MaxClusters;
  /* 0x0108 */ unsigned long InterruptReplayDataSize;
  /* 0x010c */ enum _INTERRUPT_PROBLEM Problem;
  /* 0x0110 */ long ProblemStatus;
  /* 0x0118 */ const char* ProblemSourceFile;
  /* 0x0120 */ unsigned long ProblemSourceLine;
  /* 0x0124 */ unsigned long CustomProblem;
  /* 0x0128 */ long CustomProblemStatus;
  /* 0x0130 */ struct _UNICODE_STRING ResourceId;
  /* 0x0140 */ struct POHANDLE__* PowerHandle;
} REGISTERED_INTERRUPT_CONTROLLER, *PREGISTERED_INTERRUPT_CONTROLLER; /* size: 0x0148 */

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
  RegNtPreQueryKeyName = 47,
  RegNtPostQueryKeyName = 48,
  MaxRegNtNotifyClass = 49,
} REG_NOTIFY_CLASS, *PREG_NOTIFY_CLASS;

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

typedef struct _RSDT_32
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long Tables[1];
} RSDT_32, *PRSDT_32; /* size: 0x0028 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

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
} RTL_DYNAMIC_HASH_TABLE, *PRTL_DYNAMIC_HASH_TABLE; /* size: 0x0028 */

typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY* ChainHead;
  /* 0x0008 */ struct _LIST_ENTRY* PrevLinkage;
  /* 0x0010 */ unsigned __int64 Signature;
} RTL_DYNAMIC_HASH_TABLE_CONTEXT, *PRTL_DYNAMIC_HASH_TABLE_CONTEXT; /* size: 0x0018 */

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Linkage;
  /* 0x0010 */ unsigned __int64 Signature;
} RTL_DYNAMIC_HASH_TABLE_ENTRY, *PRTL_DYNAMIC_HASH_TABLE_ENTRY; /* size: 0x0018 */

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR
{
  union
  {
    /* 0x0000 */ struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
    /* 0x0000 */ struct _LIST_ENTRY* CurEntry;
  }; /* size: 0x0018 */
  /* 0x0018 */ struct _LIST_ENTRY* ChainHead;
  /* 0x0020 */ unsigned long BucketIndex;
  /* 0x0024 */ long __PADDING__[1];
} RTL_DYNAMIC_HASH_TABLE_ENUMERATOR, *PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR; /* size: 0x0028 */

typedef struct _RTL_QUERY_REGISTRY_TABLE
{
  /* 0x0000 */ void* QueryRoutine /* function */;
  /* 0x0008 */ unsigned long Flags;
  /* 0x0010 */ unsigned short* Name;
  /* 0x0018 */ void* EntryContext;
  /* 0x0020 */ unsigned long DefaultType;
  /* 0x0028 */ void* DefaultData;
  /* 0x0030 */ unsigned long DefaultLength;
  /* 0x0034 */ long __PADDING__[1];
} RTL_QUERY_REGISTRY_TABLE, *PRTL_QUERY_REGISTRY_TABLE; /* size: 0x0038 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _RTL_SPLAY_LINKS
{
  /* 0x0000 */ struct _RTL_SPLAY_LINKS* Parent;
  /* 0x0008 */ struct _RTL_SPLAY_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_SPLAY_LINKS* RightChild;
} RTL_SPLAY_LINKS, *PRTL_SPLAY_LINKS; /* size: 0x0018 */

struct _SCSI_REQUEST_BLOCK;

typedef struct _SECONDARY_IC_LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned long GsivBase;
  /* 0x0014 */ unsigned long GsivSize;
  /* 0x0018 */ struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE Interface;
  /* 0x0070 */ volatile long BusyCount;
  /* 0x0074 */ volatile long ExclusiveWaiterCount;
  /* 0x0078 */ struct _KEVENT NotificationEvent;
  /* 0x0090 */ struct _LIST_ENTRY SignalListEntry;
  /* 0x00a0 */ struct _SECONDARY_INTERRUPT_LINE_STATE State[1];
} SECONDARY_IC_LIST_ENTRY, *PSECONDARY_IC_LIST_ENTRY; /* size: 0x00b0 */

typedef struct _SECONDARY_INTERRUPT_LINE_STATE
{
  /* 0x0000 */ enum _KINTERRUPT_POLARITY Polarity;
  /* 0x0004 */ enum _KINTERRUPT_MODE Mode;
  /* 0x0008 */ unsigned long Vector;
  /* 0x000c */ unsigned char Unmasked;
  /* 0x000d */ char __PADDING__[3];
} SECONDARY_INTERRUPT_LINE_STATE, *PSECONDARY_INTERRUPT_LINE_STATE; /* size: 0x0010 */

typedef struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ unsigned long GsivBase;
  /* 0x0014 */ unsigned short GsivSize;
  /* 0x0018 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0020 */ void* Reserved1;
  /* 0x0028 */ void* Reserved2;
  /* 0x0030 */ void* Reserved3;
  /* 0x0038 */ void* Reserved4;
  /* 0x0040 */ void* Reserved5;
  /* 0x0048 */ void* Reserved6;
  /* 0x0050 */ void* Reserved7;
} SECONDARY_INTERRUPT_PROVIDER_INTERFACE, *PSECONDARY_INTERRUPT_PROVIDER_INTERFACE; /* size: 0x0058 */

typedef struct _SECTION_OBJECT_POINTERS
{
  /* 0x0000 */ void* DataSectionObject;
  /* 0x0008 */ void* SharedCacheMap;
  /* 0x0010 */ void* ImageSectionObject;
} SECTION_OBJECT_POINTERS, *PSECTION_OBJECT_POINTERS; /* size: 0x0018 */

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

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
  /* 0x0008 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0010 */ void* PrimaryToken;
  /* 0x0018 */ void* ProcessAuditId;
} SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT; /* size: 0x0020 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct // _TAG_UNNAMED_72
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ char* Buffer;
} STRING, *PSTRING; /* size: 0x0010 */

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

typedef struct _TXN_PARAMETER_BLOCK
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short TxFsContext;
  /* 0x0008 */ void* TransactionObject;
} TXN_PARAMETER_BLOCK, *PTXN_PARAMETER_BLOCK; /* size: 0x0010 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_73
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef enum _USER_ACTIVITY_PRESENCE
{
  PowerUserPresent = 0,
  PowerUserNotPresent = 1,
  PowerUserInactive = 2,
  PowerUserMaximum = 3,
  PowerUserInvalid = 3,
} USER_ACTIVITY_PRESENCE, *PUSER_ACTIVITY_PRESENCE;

typedef struct _VPB
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short VolumeLabelLength;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ struct _DEVICE_OBJECT* RealDevice;
  /* 0x0018 */ unsigned long SerialNumber;
  /* 0x001c */ unsigned long ReferenceCount;
  /* 0x0020 */ wchar_t VolumeLabel[32];
} VPB, *PVPB; /* size: 0x0060 */

typedef struct _WAIT_CONTEXT_BLOCK
{
  union
  {
    /* 0x0000 */ struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    struct
    {
      /* 0x0000 */ struct _LIST_ENTRY DmaWaitEntry;
      /* 0x0010 */ unsigned long NumberOfChannels;
      struct /* bitfield */
      {
        /* 0x0014 */ unsigned long SyncCallback : 1; /* bit position: 0 */
        /* 0x0014 */ unsigned long DmaContext : 1; /* bit position: 1 */
        /* 0x0014 */ unsigned long Reserved : 30; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
  /* 0x0018 */ void* DeviceRoutine /* function */;
  /* 0x0020 */ void* DeviceContext;
  /* 0x0028 */ unsigned long NumberOfMapRegisters;
  /* 0x0030 */ void* DeviceObject;
  /* 0x0038 */ void* CurrentIrp;
  /* 0x0040 */ struct _KDPC* BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK; /* size: 0x0048 */

typedef enum _WHEA_CPU_VENDOR
{
  WheaCpuVendorOther = 0,
  WheaCpuVendorIntel = 1,
  WheaCpuVendorAmd = 2,
} WHEA_CPU_VENDOR, *PWHEA_CPU_VENDOR;

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

typedef struct _WHEA_ERROR_RECORD
{
  /* 0x0000 */ struct _WHEA_ERROR_RECORD_HEADER Header;
  /* 0x0080 */ struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
} WHEA_ERROR_RECORD, *PWHEA_ERROR_RECORD; /* size: 0x00c8 */

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

typedef struct _WHEA_RECOVERY_CONTEXT
{
  struct // _TAG_UNNAMED_74
  {
    /* 0x0000 */ unsigned __int64 Address;
    /* 0x0008 */ unsigned char Consumed;
    /* 0x000a */ unsigned short ErrorCode;
    /* 0x000c */ unsigned char ErrorIpValid;
    /* 0x000d */ unsigned char RestartIpValid;
    /* 0x000e */ char __PADDING__[2];
  } /* size: 0x0010 */ MemoryError;
  /* 0x0010 */ unsigned __int64 PartitionId;
  /* 0x0018 */ unsigned int VpIndex;
  /* 0x001c */ long __PADDING__[1];
} WHEA_RECOVERY_CONTEXT, *PWHEA_RECOVERY_CONTEXT; /* size: 0x0020 */

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

typedef struct _WHEA_XPF_PROCESSOR_ERROR_SECTION
{
  /* 0x0000 */ union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS ValidBits;
  /* 0x0008 */ unsigned __int64 LocalAPICId;
  /* 0x0010 */ unsigned char CpuId[48];
  /* 0x0040 */ unsigned char VariableInfo[1];
} WHEA_XPF_PROCESSOR_ERROR_SECTION, *PWHEA_XPF_PROCESSOR_ERROR_SECTION; /* size: 0x0041 */

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

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _XSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XSAVE_FORMAT, *PXSAVE_FORMAT; /* size: 0x0200 */

typedef struct _XSDT
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ union _LARGE_INTEGER Tables[1];
} XSDT, *PXSDT; /* size: 0x002c */

/*
Amd64AllocateCounter
Amd64ConfigureCounter
Amd64DisableMonitoring
Amd64EnableMonitoring
Amd64FreeCounter
Amd64GetProfileDescriptor
Amd64InitializeProfiling
Amd64OverflowHandler
Amd64PauseProfiling
Amd64QueryInformation
Amd64RestartProfiling
Amd64ResumeProfiling
Amd64SetInterval
ArbDeleteMmConfigRange
ArbInitializeMmConfigRange
CMOS_READ
CMOS_WRITE
DefaultDisableMonitoring
DefaultEnableMonitoring
DefaultInitializeProfiling
DefaultOverflowHandler
DefaultQueryInformation
DefaultRestartProfiling
DefaultSetInterval
EmonAllocateCounter
EmonConfigureCounter
EmonDisableMonitoring
EmonEnableMonitoring
EmonFreeCounter
EmonGetProfileDescriptor
EmonInitializeProfiling
EmonOverflowHandler
EmonPauseProfiling
EmonQueryInformation
EmonRestartProfiling
EmonResumeProfiling
EmonSetInterval
HalAcpiEmCheckOperator
HalAcpiGetAllTablesDispatch
HalAcpiGetFacsMappingDispatch
HalAcpiGetRsdpDispatch
HalAcpiGetTable
HalAcpiGetTableDispatch
HalAcpiGetTableEx
HalAcquireDisplayOwnership
HalAdjustResourceList
HalAllProcessorsStarted
HalAllocateAdapterChannel
HalAllocateAdapterChannelEx
HalAllocateAdapterChannelV2
HalAllocateCommonBuffer
HalAllocateCommonBufferEx
HalAllocateCommonBufferV2
HalAllocateCrashDumpRegisters
HalAllocateDomainCommonBuffer
HalAllocateHardwareCounters
HalAssignSlotResources
HalBugCheckSystem
HalBuildMdlFromScatterGatherListV2
HalBuildMdlFromScatterGatherListV3
HalBuildScatterGatherListEx
HalBuildScatterGatherListV2
HalBuildScatterGatherListV3
HalCalculateScatterGatherListSizeV2
HalCalculateScatterGatherListSizeV3
HalCalibratePerformanceCounter
HalCancelAdapterChannel
HalCancelMappedTransfer
HalClearSoftwareInterrupt
HalConfigureAdapterChannel
HalConvertDeviceIdtToIrql
HalDisableInterrupt
HalDisplayString
HalDmaAllocateCrashDumpRegistersEx
HalDmaFreeCrashDumpRegistersEx
HalEfiGetEnvironmentVariable
HalEfiGetTime
HalEfiQueryCapsuleCapabilities
HalEfiQueryVariableInfo
HalEfiResetSystem
HalEfiSetEnvironmentVariable
HalEfiSetTime
HalEfiUpdateCapsule
HalEnableInterrupt
HalEnumerateEnvironmentVariablesEx
HalEnumerateProcessors
HalFixInterruptLine
HalFlushAdapterBuffersEx
HalFlushCommonBuffer
HalFlushDmaBuffer
HalFreeAdapterObject
HalFreeCommonBuffer
HalFreeCommonBufferV3
HalFreeHardwareCounters
HalGetAdapter
HalGetAdapterV2
HalGetAdapterV3
HalGetBusData
HalGetBusDataByOffset
HalGetDmaAdapterInfo
HalGetDmaAlignment
HalGetDmaDomain
HalGetDmaTransferInfo
HalGetEnvironmentVariable
HalGetEnvironmentVariableEx
HalGetInterruptTargetInformation
HalGetInterruptVector
HalGetMemoryCachingRequirements
HalGetMessageRoutingInfo
HalGetProcessorIdByNtNumber
HalGetScatterGatherList
HalGetScatterGatherListEx
HalGetVectorInput
HalHandleMcheck
HalHandleNMI
HalInitSystem
HalInitializeBios
HalInitializeDmaTransferContext
HalInitializeOnResume
HalInitializeProcessor
HalIsHyperThreadingEnabled
HalJoinDmaDomain
HalLeaveDmaDomain
HalMakeBeep
HalMapIoSpace
HalMapTransferEx
HalMatchAcpiCreatorRevision
HalMatchAcpiFADTBootArch
HalMatchAcpiOemId
HalMatchAcpiOemRevision
HalMatchAcpiOemTableId
HalMatchAcpiRevision
HalMcUpdateReadPCIConfig
HalPerformEndOfInterrupt
HalPnpGetDmaAdapter
HalPnpInterfaceNullReference
HalProcessorIdle
HalPutDmaAdapter
HalPutScatterGatherList
HalPutScatterGatherListV3
HalQueryDisplayParameters
HalQueryEnvironmentVariableInfoEx
HalQueryMaximumProcessorCount
HalQueryRealTimeClock
HalReadBootRegister
HalReadDmaCounter
HalReadDmaCounterV3
HalRealAllocateAdapterChannelV2
HalRealAllocateAdapterChannelV3
HalRegisterDynamicProcessor
HalRegisterErrataCallbacks
HalRegisterPermanentAddressUsage
HalReportResourceUsage
HalRequestClockInterrupt
HalRequestDeferredRecoveryServiceInterrupt
HalRequestIpi
HalRequestIpiSpecifyVector
HalRequestSoftwareInterrupt
HalReturnToFirmware
HalSendNMI
HalSendSoftwareInterrupt
HalSetBusData
HalSetBusDataByOffset
HalSetDisplayParameters
HalSetEnvironmentVariable
HalSetEnvironmentVariableEx
HalSetProfileInterval
HalSetRealTimeClock
HalSetTimerProblem
HalSocGetAcpiTable
HalSocRequestApi
HalSocRequestConfigurationData
HalStartDynamicProcessor
HalStartNextProcessor
HalStartProfileInterrupt
HalStopProfileInterrupt
HalSystemVectorDispatchEntry
HalTranslateBusAddress
HalUnmapIoSpace
HalUpdateTimerCapabilities
HalWriteBootRegister
HalacpIrqTranslatorDereference
HalacpiIrqTranslateResourceRequirementsIsa
HalacpiIrqTranslateResourcesIsa
HalacpiIrqTranslatorReference
HaliAcpiMachineStateInit
HaliAcpiQueryFlags
HaliAcpiSleep
HaliAcpiTimerCarry
HaliAddInterruptRemapping
HaliGetDmaAdapter
HaliGetInterruptTranslator
HaliHaltSystem
HaliHandlePCIConfigSpaceAccess
HaliInitPnpDriver
HaliInitPowerManagement
HaliLocateHiberRanges
HaliPciInterfaceReadConfig
HaliPciInterfaceWriteConfig
HaliQuerySystemInformation
HaliRemoveInterruptRemapping
HaliSetMaxLegacyPciBusNumber
HaliSetPciErrorHandlerCallback
HaliSetWakeAlarm
Halp8254TimerAcknowledgeInterrupt
Halp8254TimerArm
Halp8254TimerInitialize
Halp8254TimerStop
HalpAcpiAllocateMemory
HalpAcpiAoacCapable
HalpAcpiCacheOverrideTables
HalpAcpiCacheTable
HalpAcpiCalculateCacheSizeForOverrideTables
HalpAcpiCheckAndMapTable
HalpAcpiCopyBiosTable
HalpAcpiDetectMachineSpecificActions
HalpAcpiFallbackOnLegacyConfigMethod
HalpAcpiFindRsdp
HalpAcpiFlushCache
HalpAcpiGetAllTablesWork
HalpAcpiGetCachedTable
HalpAcpiGetFacsMapping
HalpAcpiGetRsdt
HalpAcpiGetTable
HalpAcpiGetTableFromBios
HalpAcpiGetTableWork
HalpAcpiIBMExaMatch
HalpAcpiIBMVigilMatch
HalpAcpiInitDiscard
HalpAcpiInitSystem
HalpAcpiInitializePmRegisters
HalpAcpiIsCachedTableCompromised
HalpAcpiPmRegisterAvailable
HalpAcpiPmRegisterRead
HalpAcpiPmRegisterReadPciConfigSpace
HalpAcpiPmRegisterReadPort
HalpAcpiPmRegisterReadRegister
HalpAcpiPmRegisterWrite
HalpAcpiPmRegisterWritePciConfigSpace
HalpAcpiPmRegisterWritePort
HalpAcpiPmRegisterWriteRegister
HalpAcpiPostSleep
HalpAcpiPreSleep
HalpAcpiRealTimeToUtcTime
HalpAcpiSetupPmRegister
HalpAcpiSetupPmRegisterLegacy
HalpAcpiTableCacheInit
HalpAcpiValidateAcpiTable
HalpAcquireCmosSpinLock
HalpAcquireCmosSpinLockAndWait
HalpAcquireHighLevelLock
HalpAcquirePccInterface
HalpAcquireSecondaryIcEntryExclusive
HalpAddAdapterToList
HalpAddAdapterToSystemList
HalpAddDevice
HalpAddMcaToMemoryErrorSection
HalpAddMcaToProcessorGenericSection
HalpAddMcaToProcessorSpecificSection
HalpAllocPhysicalMemory
HalpAllocateAdapterCallbackV2
HalpAllocateAdapterCallbackV3
HalpAllocateAdapterChannel
HalpAllocateCR3Root
HalpAllocateDmaChannels
HalpAllocateDmaResources
HalpAllocateEarlyPages
HalpAllocateGsivForSecondaryInterrupt
HalpAllocateHalCounters
HalpAllocateKInterrupt
HalpAllocateMapRegisters
HalpAllocateNumaConfigData
HalpAllocatePmcCounterSet
HalpAllocateScratchMemory
HalpApic1EndOfInterrupt
HalpApic1ReadRegister
HalpApic1WaitForIcr
HalpApic1WriteIcr
HalpApic1WriteRegister
HalpApicClearLocalUnitError
HalpApicConvertFromRte
HalpApicConvertId
HalpApicConvertToRte
HalpApicDeinitializeLocalUnit
HalpApicDescribeLines
HalpApicDescribeLocalLines
HalpApicDiscover
HalpApicGenerateMessage
HalpApicGetCpuInfo
HalpApicGetLocalUnitError
HalpApicHvUpdateCallback
HalpApicInitializeIoUnit
HalpApicInitializeLocalUnit
HalpApicIsCmciImplemented
HalpApicQueryAndGetSource
HalpApicRegisterIoUnit
HalpApicReplayLocalInterrupts
HalpApicReplaySendSelfIpi
HalpApicRequestInterrupt
HalpApicSaveLocalInterrupts
HalpApicSetLineState
HalpApicSetLogicalId
HalpApicSetPriority
HalpApicSetupRegisterAccess
HalpApicStartProcessor
HalpApicTimerAcknowledgeInterrupt
HalpApicTimerArm
HalpApicTimerDiscover
HalpApicTimerInitialize
HalpApicTimerIsInvariant
HalpApicTimerQueryCounter
HalpApicTimerSetInterruptVector
HalpApicTimerStop
HalpApicWriteEndOfInterrupt
HalpApicX2EndOfInterrupt
HalpApicX2ReadRegister
HalpApicX2WaitForCommand
HalpApicX2WriteCommand
HalpApicX2WriteRegister
HalpArmAcpiWakeAlarm
HalpArtAvailable
HalpArtDiscover
HalpArtInitialize
HalpArtQueryCounter
HalpAssignSlotResourcesStub
HalpAuditAcpiTables
HalpAuditAllocateRsdtArrayTable
HalpAuditEnumerateRsdts
HalpAuditEnumerateRsdtsInRange
HalpAuditGetExtendedBiosDataArea
HalpAuditQuerySlicAddresses
HalpAuditSelectRsdtOrXsdt
HalpAuditSlicTables
HalpBiosDisplayReset
HalpBuildResumeStructures
HalpBuildScatterGatherList
HalpCalculateDivisorRate
HalpCalculateScatterGatherListSize
HalpCalculateTickCount
HalpCallWakeAlarmDriver
HalpChannelAscendingSort
HalpChannelAssignmentSort
HalpChannelInitializeStaticConfiguration
HalpChannelMpnIdSort
HalpChannelPowerRequest
HalpCheckFixedWakeSources
HalpCheckInterruptType
HalpCheckLowMemoryPreSleep
HalpCheckNumaConfiguration
HalpCheckPowerButton
HalpCheckSecondaryInterruptSupported
HalpCheckWakeupTimeAndAdjust
HalpClaimDebugResource
HalpCmcDeferredRoutine
HalpCmcInitializeErrorPacketContents
HalpCmcInitializePolling
HalpCmcPollProcessor
HalpCmcStartPolling
HalpCmcWorkerRoutine
HalpCmciDeferredRoutine
HalpCmciHandler
HalpCmciInit
HalpCmciInitProcessor
HalpCmciInitializeErrorPacket
HalpCmciLoadThresholdConfiguration
HalpCmciPollProcessor
HalpCmciResetState
HalpCmciSetProcessorConfig
HalpCmciSetProcessorConfigAMD
HalpCmciSetProcessorConfigIntel
HalpCmciSetProcessorMiscConfigAMD
HalpCmosNullReference
HalpCmosRangeHandler
HalpCmosReadByte
HalpCmosWriteByte
HalpCollectPmcCounters
HalpCommitCR3Worker
HalpConnectThermalInterrupt
HalpConsumeLowMemory
HalpConvertEfiToNtStatus
HalpCopyDebugDescriptor
HalpCorrectErrSrc
HalpCorrectGenericErrSrc
HalpCorrectMachineCheckErrSrc
HalpCorrectNMIErrSrc
HalpCpuID
HalpCreateErrorRecord
HalpCreateInterrupt
HalpCreateMachineCheckErrorRecord
HalpCreateMcaMemoryErrorRecord
HalpCreateMcaProcessorErrorRecord
HalpCreateNMIErrorRecord
HalpCreateSecondaryIcEntry
HalpDbgInitSystem
HalpDeallocateMsiLines
HalpDeleteSecondaryIcEntry
HalpDeviceEquals
HalpDisableCmciOnProcessor
HalpDisableSecondaryInterrupt
HalpDispatchPnp
HalpDispatchPower
HalpDispatchSystemStateTransition
HalpDispatchWmi
HalpDmaAcquireBufferMappings
HalpDmaAllocateChildAdapterV2
HalpDmaAllocateChildAdapterV3
HalpDmaAllocateContiguousMemory
HalpDmaAllocateContiguousPagesFromContiguousPool
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3
HalpDmaAllocateContiguousPagesFromContiguousPoolV2
HalpDmaAllocateContiguousPagesFromContiguousPoolV3
HalpDmaAllocateDomain
HalpDmaAllocateEmergencyResources
HalpDmaAllocateLocalContiguousPool
HalpDmaAllocateLocalScatterPool
HalpDmaAllocateMapRegisters
HalpDmaAllocateMapRegistersAtHighLevel
HalpDmaAllocateMappingResources
HalpDmaAllocateNewTranslationBuffer
HalpDmaAllocateReservedMapping
HalpDmaAllocateReservedMappingArray
HalpDmaAllocateScatterMemory
HalpDmaAllocateScatterPagesFromContiguousPool
HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2
HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3
HalpDmaAllocateScatterPagesFromContiguousPoolV2
HalpDmaAllocateScatterPagesFromContiguousPoolV3
HalpDmaAllocateScatterPagesFromScatterPool
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV2
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV3
HalpDmaAllocateScatterPagesFromScatterPoolV2
HalpDmaAllocateScatterPagesFromScatterPoolV3
HalpDmaAllocateTranslationBuffer
HalpDmaCheckAdapterToken
HalpDmaCheckMdlAccessibility
HalpDmaCommitContiguousMapBuffers
HalpDmaCommitScatterMapBuffers
HalpDmaConfigureInterrupt
HalpDmaControllerCancelTransfer
HalpDmaControllerDpcRoutine
HalpDmaControllerFlushChannel
HalpDmaControllerInitializeController
HalpDmaControllerInterruptRoutine
HalpDmaControllerProgramChannel
HalpDmaControllerQueryMaxFragments
HalpDmaControllerReadDmaCounter
HalpDmaControllerValidateRequestLineBinding
HalpDmaDeleteDomain
HalpDmaDequeueAdapter
HalpDmaFinalizeDoubleBufferingDisposition
HalpDmaFindAdapterByDeviceObject
HalpDmaFindDeviceObjectByToken
HalpDmaFlushBuffer
HalpDmaFlushBufferWithEmergencyResources
HalpDmaFlushContiguousTransferV2
HalpDmaFlushContiguousTransferV3
HalpDmaFlushDriverMdl
HalpDmaFlushScatterTransferV2
HalpDmaFlushScatterTransferV3
HalpDmaForceAllocation
HalpDmaFreeChildAdapter
HalpDmaFreeCrashDumpRegisters
HalpDmaFreeMapRegisters
HalpDmaFreeTranslationBuffer
HalpDmaGetAdapterCacheAlignment
HalpDmaGetAdapterVersion
HalpDmaGetMasterAdapterVersion
HalpDmaGetNextWcb
HalpDmaGetTranslationEntries
HalpDmaGrowContiguousMapBuffers
HalpDmaGrowScatterMapBuffers
HalpDmaIndexToTranslationEntry
HalpDmaInit
HalpDmaInitDiscard
HalpDmaInitMemory
HalpDmaInitPowerManagement
HalpDmaInitSystem
HalpDmaInitializeControllers
HalpDmaInitializeDomain
HalpDmaInitializeMasterAdapter
HalpDmaInsertDeviceObjectByToken
HalpDmaIsAutomaticDomain
HalpDmaIsDomainCompatible
HalpDmaLinkContiguousTranslations
HalpDmaLinkDeviceObjectByToken
HalpDmaMapContiguousTransferV2
HalpDmaMapContiguousTransferV3
HalpDmaMapScatterTransferV2
HalpDmaMapScatterTransferV3
HalpDmaMarkHiberAdapter
HalpDmaNextContiguousPiece
HalpDmaNextContiguousPieceV2
HalpDmaNextContiguousPieceV3
HalpDmaPowerCriticalTransitionCallback
HalpDmaPrependTranslations
HalpDmaProcessMapRegisterQueueV2
HalpDmaProcessMapRegisterQueueV3
HalpDmaQueueAdapter
HalpDmaReleaseBufferMappings
HalpDmaRemoveAdapterFromChannelQueue
HalpDmaRemoveAdapterFromMasterQueue
HalpDmaRemoveWcb
HalpDmaReturnPageToOwner
HalpDmaReturnPageToSource
HalpDmaReturnToContiguousPool
HalpDmaReturnToScatterPool
HalpDmaStartWcb
HalpDmaSyncMapBuffers
HalpDmaSyncMapBuffersWithEmergencyResources
HalpDmaTranslationEntryToIndex
HalpDmaZeroMapBuffers
HalpDpGetInterruptReplayState
HalpDpInitDiscard
HalpDpInitSystem
HalpDpOfflineProcessorForReplace
HalpDpPostReplace
HalpDpPostReplaceInitialization
HalpDpPreReplace
HalpDpQueryMaxHotPlugMemoryAddress
HalpDpReplaceBegin
HalpDpReplaceControl
HalpDpReplaceEnd
HalpDpReplaceTarget
HalpDpReplayInterrupts
HalpDpSortApicList
HalpDpStartProcessor
HalpDriverEntry
HalpDynamicDeviceInterfaceNotification
HalpECmosReadByte
HalpECmosWriteByte
HalpEfiBugCheckAddPagesCallback
HalpEfiInitializeOnResume
HalpEnableSecondaryInterrupt
HalpEndOfBoot
HalpErrataInitDiscard
HalpErrataInitSystem
HalpExtBuildResourceIdString
HalpExtGetAcpiTable
HalpExtGetNextResourceDescriptor
HalpExtGetRegisteredResourceIdString
HalpExtInitExtensions
HalpExtRegisterResourceDescriptor
HalpFindAdapterByRequestLine
HalpFindBusAddressTranslation
HalpFindDevice
HalpFindDmaControllerByRequestLine
HalpFindInterruptController
HalpFindSecondaryIcEntry
HalpFindSecondaryIcEntryFromObjectAndRange
HalpFindTimer
HalpFirmwareInitDiscard
HalpFirmwareInitSystem
HalpFlushAndWait
HalpFlushMapBuffers
HalpFlushTLB
HalpFreeDmaChannels
HalpFreeNvsBuffers
HalpFreePmcCounterSet
HalpFreeResumeStructures
HalpGenericPolledDpcRoutine
HalpGenericPolledWorkerRoutine
HalpGetAcpiStaticNumaTopology
HalpGetAdapter
HalpGetCacheCoherency
HalpGetChipHacks
HalpGetCmosData
HalpGetCpuInfo
HalpGetDisplayBiosInformation
HalpGetDynamicDevicePointer
HalpGetIrtEntryCount
HalpGetMcaPcrContext
HalpGetNumaProcMemoryCount
HalpGetPCIData
HalpGetPlatformTimerInformation
HalpGetProcessorBrandString
HalpGetResourceSortValue
HalpGetSetCmosData
HalpGrowMapBufferWorker
HalpHalExtInitSystem
HalpHandleMaskUnmaskSecondaryInterrupt
HalpHandlePreviousMcaErrors
HalpHandlePreviousMcaErrorsOnProcessor
HalpHpetAcknowledgeInterrupt
HalpHpetArmTimer
HalpHpetDiscover
HalpHpetInitialize
HalpHpetQueryCounter
HalpHpetSetMatchValue
HalpHpetSetMessageInterruptRouting
HalpHpetStop
HalpHvBuildDeviceId
HalpHvBuildInterruptDescriptor
HalpHvCounterInitialize
HalpHvCounterQueryCounter
HalpHvCounterUpdateCallback
HalpHvCpuid
HalpHvDiscover
HalpHvEpCpuid
HalpHvEpReadMsr
HalpHvEpWriteMsr
HalpHvEpWritebackInvalidate
HalpHvGetApicFrequency
HalpHvGetMachineCheckContext
HalpHvGetTscFrequency
HalpHvInitDiscard
HalpHvInitMcaPcrContext
HalpHvInitMcaStatusMsrCache
HalpHvInitSegRegister
HalpHvInitSystem
HalpHvIsFrequencyAvailable
HalpHvIsReferenceTscConfigured
HalpHvLpReadMcaStatusMsr
HalpHvLpReadMultipleMsr
HalpHvMapDeviceMsiRange
HalpHvMapIoApicDeviceInterrupt
HalpHvMceConsumedMemoryErrorRecovery
HalpHvNotifyDebugDeviceAvailable
HalpHvQueryAssociatedProcessors
HalpHvSetMachineCheckHandlerState
HalpHvSetMachineCheckRecoveryState
HalpHvSetSleepStateProperty
HalpHvStartProcessor
HalpHvTimerAcknowledgeInterrupt
HalpHvTimerArm
HalpHvTimerInitialize
HalpHvTimerSetInterruptVector
HalpHvTimerStop
HalpHvUnmapDeviceMsiRange
HalpHvUnmapIoApicDeviceInterrupt
HalpHvVpStartEnabled
HalpHwPerfCntInitSystem
HalpInitBootTable
HalpInitChipHacks
HalpInitGenericErrorSourceEntry
HalpInitGenericErrorSourcePollingRoutine
HalpInitMemoryCachingRequirementsTable
HalpInitNonBusHandler
HalpInitSystemHelper
HalpInitSystemPhase0
HalpInitSystemPhase1
HalpInitializeCmc
HalpInitializeCmciVector
HalpInitializeConfigurationFromMadt
HalpInitializeErrSrc
HalpInitializeGenericErrorSource
HalpInitializeInterruptRemappingBspLate
HalpInitializeInterrupts
HalpInitializeInterruptsBspLate
HalpInitializeInterruptsPn
HalpInitializeMce
HalpInitializeNMI
HalpInitializePnTimers
HalpInitializeProfiling
HalpInitializeSecondaryInterruptServices
HalpInitializeTimers
HalpInsertSecondarySignalList
HalpInterruptApplyOverrides
HalpInterruptBuildGlobalStartupStub
HalpInterruptBuildStartupStub
HalpInterruptCmciService
HalpInterruptConnect
HalpInterruptControllerInUse
HalpInterruptCreateGdtEntry32
HalpInterruptDeferredRecoveryService
HalpInterruptDestinationToTarget
HalpInterruptDpReplaceBegin
HalpInterruptEnableNmi
HalpInterruptEnablePerformanceEvents
HalpInterruptEnsureLineSwapComplete
HalpInterruptEnumerateUnmaskedInterrupts
HalpInterruptEnumerateUnmaskedSecondaryInterrupts
HalpInterruptFindBestRouting
HalpInterruptFindLines
HalpInterruptFindLinesForGsiRange
HalpInterruptForceClusterMode
HalpInterruptGenerateMessage
HalpInterruptGetApicVersion
HalpInterruptGetHighestPriorityInterrupt
HalpInterruptGetIrtInfo
HalpInterruptGetLocalIdentifier
HalpInterruptGetNextProcessorLocalId
HalpInterruptGetParkingPageInformation
HalpInterruptGetPriority
HalpInterruptGetX2ApicPolicy
HalpInterruptGsiToLine
HalpInterruptInitDiscard
HalpInterruptInitPowerManagement
HalpInterruptInitSystem
HalpInterruptInitializeController
HalpInterruptInitializeGlobals
HalpInterruptInitializeIpis
HalpInterruptInitializeLocalUnit
HalpInterruptIsCmciSupported
HalpInterruptIsGsiValid
HalpInterruptIsMsiSupported
HalpInterruptIsPicStateIntact
HalpInterruptIsRemappingRequired
HalpInterruptLineToGsi
HalpInterruptLocalErrorService
HalpInterruptLookupController
HalpInterruptMapParkedPage
HalpInterruptMarkProcessorStarted
HalpInterruptMaskAcpi
HalpInterruptMaskLevelTriggeredLines
HalpInterruptModel
HalpInterruptOfflineProcessor
HalpInterruptParseAcpiTables
HalpInterruptParseMadt
HalpInterruptPicLine
HalpInterruptPowerChange
HalpInterruptPowerComponentActiveCallback
HalpInterruptPowerComponentIdleCallback
HalpInterruptPowerCriticalTransitionCallback
HalpInterruptQueryControllerInfo
HalpInterruptQueryProcessorRestartEntryPoint
HalpInterruptRebootService
HalpInterruptRegisterController
HalpInterruptRegisterDynamicProcessor
HalpInterruptRegisterLine
HalpInterruptReinitialize
HalpInterruptReinitializeThisProcessor
HalpInterruptRemap
HalpInterruptRequestInterrupt
HalpInterruptRequestSecondaryInterrupt
HalpInterruptResetThisProcessor
HalpInterruptRestoreAllControllerState
HalpInterruptRestoreClock
HalpInterruptRestoreController
HalpInterruptSaveReplayState
HalpInterruptSelectController
HalpInterruptSendIpi
HalpInterruptServiceActiveBoth
HalpInterruptSetDestination
HalpInterruptSetDestinationInternal
HalpInterruptSetIdtEntry
HalpInterruptSetLineState
HalpInterruptSetLineStateInternal
HalpInterruptSetMsiOverride
HalpInterruptSetProblemEx
HalpInterruptSetProcessorStartContext
HalpInterruptSetRemappedDestination
HalpInterruptSetRemappedLineState
HalpInterruptSetRemappedLineStateInternal
HalpInterruptSortProcessorTable
HalpInterruptSpuriousService
HalpInterruptStandardEndOfInterrupt
HalpInterruptStartProcessor
HalpInterruptStubService
HalpInterruptSwapProcessorIdentifiers
HalpInterruptThermalService
HalpInterruptUnmap
HalpInterruptUnmaskLevelTriggeredLines
HalpInterruptUpdateLinesPostSwap
HalpInterruptUpdateLocalUnitIdentifier
HalpInterruptVectorDataToGsiv
HalpInvokeIsrForGsiv
HalpIoDelay
HalpIommuConfigureInterrupt
HalpIommuExtMarkHiberMemory
HalpIommuGetNextFlushDevice
HalpIommuHsaDiscover
HalpIommuInitDiscard
HalpIommuInitSystem
HalpIommuInitializeAll
HalpIommuInterruptRoutine
HalpIommuLocateFromDevice
HalpIommuRegister
HalpIommuRegisterDispatchTable
HalpIommuSetupMessageInterruptRouting
HalpIommuSupportEnabled
HalpIommuUpdateRemappingDestination
HalpIommuUpdateRemappingTableEntry
HalpIrtAllocateIndex
HalpIrtFreeIndex
HalpIsCmciImplemented
HalpIsEFIRuntimeActive
HalpIsHvUsedForReboot
HalpIsInterruptTypeSecondary
HalpIsMicrosoftCompatibleHvLoaded
HalpIsPartitionCpuManager
HalpIsUefiFirmwareResourceTablePresent
HalpIumGetNextVariableName
HalpIumGetTime
HalpIumGetVariable
HalpIumQueryCapsuleCapabilities
HalpIumQueryVariableInfo
HalpIumResetSystem
HalpIumSetTime
HalpIumSetVariable
HalpIumUpdateCapsule
HalpIvtCheckPathMatch
HalpIvtProcessDmarTable
HalpIvtProcessDrhdEntry
HalpIvtValidateDeviceScope
HalpKdEnumerateDebuggingDevices
HalpKdReadPCIConfig
HalpKdReleaseDebuggingDevice
HalpKdSetupDebuggingDevice
HalpKdWritePCIConfig
HalpLMIdentityStub
HalpLMStub
HalpLMStubForVM
HalpLegacyShutdown
HalpLoadMicrocode
HalpMap
HalpMapCR3Ex
HalpMapEarlyPages
HalpMapNvsArea
HalpMapPhysicalMemory64
HalpMapPhysicalMemoryWriteThrough64
HalpMapTransferV2
HalpMapTransferV3
HalpMaskInterrupt
HalpMcUpdateFindDataTableEntry
HalpMcUpdateInitialize
HalpMcUpdateLock
HalpMcUpdateMicrocode
HalpMcUpdatePostUpdate
HalpMcUpdateUnlock
HalpMcaClearError
HalpMcaInitializePcrContext
HalpMcaQueueDpc
HalpMcaReadError
HalpMcaReadErrorPresence
HalpMcaReportError
HalpMcaResumeProcessorConfig
HalpMcaSetFeatureFlags
HalpMcaSetProcessorConfig
HalpMceBarrierWait
HalpMceHandler
HalpMceHandlerCore
HalpMceHandlerWithRendezvous
HalpMceInit
HalpMceInitProcessor
HalpMceInitializeErrorPacket
HalpMceInitializeErrorPacketContents
HalpMceInitializeRecovery
HalpMceMemoryErrorDeferredHandler
HalpMceMemoryErrorDeferredRecovery
HalpMceRecovery
HalpMiscBugCheckCallback
HalpMiscGetParameters
HalpMiscInitDiscard
HalpMiscInitSystem
HalpMiscIsLegacyPcType
HalpMmAllocCtxAlloc
HalpMmAllocCtxAllocBuffer
HalpMmAllocCtxBufferCleanup
HalpMmAllocCtxFree
HalpMmAllocCtxInit
HalpMmAllocCtxMarkHiberPhase
HalpMmAllocateMemory
HalpMmAllocateMemoryInternal
HalpMmAllocatePerProcessorMemory
HalpMmBuildTiledMemoryMap
HalpMmFreeTiledMemoryMap
HalpMmInitSystem
HalpMpsValueAscendingSort
HalpNmiGenericErrorHandler
HalpNmiReboot
HalpNodeCostSort
HalpNullReadWriteBusData
HalpNumaAddRangeProximity
HalpNumaInitializeStaticConfiguration
HalpNumaQueryNodeCapacity
HalpNumaQueryNodeDistance
HalpNumaQueryProcessorNode
HalpNumaQueryProximityId
HalpNumaQueryProximityNode
HalpNumaSwapP0NodeToFront
HalpPCIConfig
HalpPCIPerformConfigAccess
HalpParseChannelCount
HalpPassIrpFromFdoToPdo
HalpPciAccessIoConfigSpace
HalpPciCheckAmdK8
HalpPciGetHpetInterruptSource
HalpPciGetHpetInterruptSourceAmd
HalpPciGetHpetInterruptSourceIntel
HalpPciGetMmConfigPhysicalAddress
HalpPciInitSystem
HalpPciInitializeMmConfigAccess
HalpPciMapMmConfigPhysicalAddress
HalpPciMarkHiberPhase
HalpPciReadIoConfigUchar
HalpPciReadIoConfigUlong
HalpPciReadIoConfigUshort
HalpPciReadMmConfigUchar
HalpPciReadMmConfigUlong
HalpPciReadMmConfigUshort
HalpPciReportMmConfigAddressRange
HalpPciWriteIoConfigUchar
HalpPciWriteIoConfigUlong
HalpPciWriteIoConfigUshort
HalpPciWriteMmConfigUchar
HalpPciWriteMmConfigUlong
HalpPciWriteMmConfigUshort
HalpPerfInterrupt
HalpPicDiscover
HalpPicInitializeIoUnit
HalpPicRequestInterrupt
HalpPicSetLineState
HalpPicWriteEndOfInterrupt
HalpPiix4Detect
HalpPmTimerConfigure
HalpPmTimerDiscover
HalpPmTimerInitialize
HalpPmTimerQueryCounterIoPort
HalpPmTimerQueryCounterMemory
HalpPnpInitSystem
HalpPopulateMsiMessages
HalpPostPnpInitialize
HalpPostSleepMP
HalpPowerEarlyRestore
HalpPowerInitDiscard
HalpPowerInitFwPerformanceTableMappings
HalpPowerInitNvsRegionData
HalpPowerInitSystem
HalpPowerSetRebootHandler
HalpPowerStateCallback
HalpPowerWriteResetCommand
HalpPreAllocateKInterrupts
HalpPrepareForBugcheck
HalpPreserveNvsArea
HalpProcGetFeatureBits
HalpProcInitDiscard
HalpProcInitSystem
HalpProcessAcpiStartDevice
HalpProcessSecondarySignalList
HalpProcessorFence
HalpProcessorPrepareForIdle
HalpProcessorResumeFromIdle
HalpPteReserveResources
HalpPutAcpiHacksInRegistry
HalpQueryAcpiRealTimeClock
HalpQueryAcpiResourceRequirements
HalpQueryCapsuleCapabilities
HalpQueryChannelTopologyInformation
HalpQueryDebuggerInformation
HalpQueryDeviceRelations
HalpQueryIdFdo
HalpQueryIdPdo
HalpQueryInterface
HalpQueryIommuReservedRegionInformation
HalpQueryMaximumGsiv
HalpQueryMaximumRegisteredProcessorCount
HalpQueryNumaRangeTableInformation
HalpQueryPccInterface
HalpQueryPrimaryInterruptInformation
HalpQueryProfileSourceList
HalpQueryResources
HalpQuerySecondaryInterruptInformation
HalpQueryVirtualRtc
HalpQueueMapBufferWorker
HalpReadCmosTime
HalpReadGenericErrorInfo
HalpReadPCIConfig
HalpReadPartitionTable
HalpReadRtcStdPCAT
HalpReadStdCmosData
HalpReadWheaPhysicalMemory
HalpReadWriteWheaPhysicalMemory
HalpReboot
HalpRecordSecondaryGsivRange
HalpReenableAcpi
HalpRegisterDeviceInUse
HalpRegisterDmaChannel
HalpRegisterDmaController
HalpRegisterKdSupportFunctions
HalpRegisterSecondaryIcInterface
HalpRegisterUsbController
HalpReleaseHighLevelLock
HalpReleaseSecondaryIcEntryShared
HalpReportResourceUsage
HalpReserveHalPtes
HalpResetSBF
HalpRestartProfiling
HalpRestoreDmaControllerState
HalpRestoreHvEnlightenment
HalpRestoreNvsArea
HalpRtcAcknowledgeInterrupt
HalpRtcArmTimer
HalpRtcDiscover
HalpRtcFixedStall
HalpRtcInitialize
HalpRtcSetDivisor
HalpRtcStop
HalpSaveAndDisableEnlightenment
HalpSaveDmaControllerState
HalpSaveProcessorState
HalpSecondaryInterruptQueryPrimaryInformation
HalpSelectFeasibleLowPowerState
HalpSendPccCommand
HalpSetAcpiRealTimeClock
HalpSetClockAfterSleep
HalpSetClockBeforeSleep
HalpSetCmosData
HalpSetIrtEntry
HalpSetPCIData
HalpSetPartitionInformation
HalpSetPlatformFlags
HalpSetProfileSourceInterval
HalpSetResumeTime
HalpSetSystemInformation
HalpSetTimer
HalpSetTimerAnyMode
HalpSetVirtualRtc
HalpSetWakeAlarm
HalpSetupAcpiPhase0
HalpSetupRealModeResume
HalpSfiTimerAcknowledgeInterrupt
HalpSfiTimerArm
HalpSfiTimerDiscover
HalpSfiTimerInitialize
HalpSfiTimerQueryCounter
HalpSfiTimerStop
HalpShutdown
HalpSimpleCheck
HalpSocApiAllocatePhysicalMemory
HalpStopLegacyUsbInterrupts
HalpStopLegacyUsbInterruptsInternal
HalpStopOhciInterrupt
HalpStopUhciInterrupt
HalpStopXhciInterrupt
HalpStoreFreeCr3
HalpTimerAlwaysOnClockInterrupt
HalpTimerCalculateMaximumAllowableDrift
HalpTimerCalibratePerformanceCounter
HalpTimerCaptureCloestAuxiliaryQpcPair
HalpTimerCaptureCurrentAuxiliaryQpcPair
HalpTimerClearProblem
HalpTimerClockActivate
HalpTimerClockArm
HalpTimerClockInitialize
HalpTimerClockInterrupt
HalpTimerClockInterruptStub
HalpTimerClockIpiRoutine
HalpTimerClockPowerChange
HalpTimerClockStart
HalpTimerClockStop
HalpTimerConfigureInterrupt
HalpTimerConfigureQpcBypass
HalpTimerConvertAuxiliaryCounter
HalpTimerConvertAuxiliaryCounterToPerformanceCounter
HalpTimerConvertPerformanceCounterToAuxiliaryCounter
HalpTimerDelayedQueryCounter
HalpTimerDetermineValidTimerPairReadLatency
HalpTimerDpcRoutine
HalpTimerEnableHypervisorTimer
HalpTimerFindBestAlwaysOnTimer
HalpTimerFindIdealClockSource
HalpTimerFindIdealPerformanceCounterSource
HalpTimerFindIdealWatchdog
HalpTimerGetClockConfiguration
HalpTimerGetClockRates
HalpTimerGetInternalData
HalpTimerGetProfilingHandler
HalpTimerGetProfilingTarget
HalpTimerGetSavedPerformanceCounter
HalpTimerHypervisorInterrupt
HalpTimerHypervisorInterruptStub
HalpTimerInitPowerManagement
HalpTimerInitSystem
HalpTimerInitialize
HalpTimerInitializeClock
HalpTimerInitializeClockPn
HalpTimerInitializeEarlyStallSource
HalpTimerInitializeHypervisorTimer
HalpTimerInitializeProfiling
HalpTimerInitializeSystemWatchdog
HalpTimerMarkWake
HalpTimerMeasureAllProcessorFrequencies
HalpTimerMeasureFrequencies
HalpTimerMeasureProcessorsWorker
HalpTimerNoteHpetMaskingBehavior
HalpTimerNotifyProcessorFreeze
HalpTimerOnlyClockInterruptPending
HalpTimerPerformanceCounterPowerChange
HalpTimerPowerChange
HalpTimerPowerComponentActiveCallback
HalpTimerPowerComponentIdleCallback
HalpTimerPowerCriticalTransitionCallback
HalpTimerPrepareClockInterrupt
HalpTimerProfileInterrupt
HalpTimerProfilePowerChange
HalpTimerQueryAuxiliaryCounterFrequency
HalpTimerQueryCycleCounter
HalpTimerQueryWakeTime
HalpTimerReadTimerPairWithLatencyLimit
HalpTimerRegister
HalpTimerRegisterBuiltinPlugins
HalpTimerRegisterBuiltinPluginsCommon
HalpTimerReportIdleStateUsage
HalpTimerResetProfileAdjustment
HalpTimerRestartProfileInterrupt
HalpTimerRestorePerformanceCounter
HalpTimerRestoreProcessorCounter
HalpTimerSavePerformanceCounter
HalpTimerSaveProcessorFrequency
HalpTimerScaleCounter
HalpTimerSchedulePeriodicQueries
HalpTimerSelectFallbackPerformanceCounter
HalpTimerSelectRoles
HalpTimerSetProblemEx
HalpTimerSetProfilingHandler
HalpTimerSetProfilingTarget
HalpTimerSetTimerBackedProfileInterval
HalpTimerSetupMessageInterruptRouting
HalpTimerStallCounterPowerChange
HalpTimerStallExecutionProcessor
HalpTimerStartProfileInterrupt
HalpTimerStopProfileInterrupt
HalpTimerSwitchStallSource
HalpTimerSwitchToNormalClock
HalpTimerTestHypervisorTimer
HalpTimerUnmapInterrupt
HalpTimerUpdateApiConsumers
HalpTimerWaitForPhase0Interrupt
HalpTimerWatchdogGeneratedLastReset
HalpTimerWatchdogInitWakeTimer
HalpTimerWatchdogLogReset
HalpTimerWatchdogPreResetInterrupt
HalpTimerWatchdogResetCountdown
HalpTimerWatchdogStart
HalpTimerWatchdogStop
HalpTimerWatchdogTriggerSystemReset
HalpTranslateBusAddress
HalpTranslateToLegacyMcaException
HalpTscAdvSynchCalculateRemoteDelta
HalpTscAdvSynchCalculateRemoteDeltas
HalpTscAdvSynchComputeMinimumDelta
HalpTscAdvSynchComputeMinimumDeltaAlternate
HalpTscAdvSynchLeader
HalpTscAdvSynchReadTimeStamp
HalpTscAdvSynchSkewCounter
HalpTscAdvSynchTarget
HalpTscAdvSynchToLeader
HalpTscAdvSynchToTarget
HalpTscCompatibilitySynchronization
HalpTscDiscover
HalpTscFallback
HalpTscFallbackToPlatformSource
HalpTscGetAttributes
HalpTscInitialize
HalpTscInitializeSynchronizationContext
HalpTscQueryCounter
HalpTscReserveResources
HalpTscSynchronization
HalpTscSynchronizationWorker
HalpTscTraceProcessorSynchronization
HalpTscTraceStatus
HalpUnloadMicrocode
HalpUnmapVirtualAddress
HalpUnmaskInterrupt
HalpUnregisterSecondaryIcInterface
HalpUpdateCapsule
HalpUpdateConfigurationFromMsct
HalpUpdateCoolingPacket
HalpUpdateIrtDestinationId
HalpUpdateNumaConfiguration
HalpUtcTimeToAcpiRealTime
HalpValidPCISlot
HalpValidateInterface
HalpValidateMpns
HalpVerifySratEntryLengthAndFlag
HalpVpptAcknowledgeInterrupt
HalpVpptArmTimer
HalpVpptInitialize
HalpVpptStop
HalpVpptTimerRegister
HalpVpptUpdatePhysicalTimer
HalpWatchdoWakeTimerDpcRoutine
HalpWatchdogWakeTimerCallback
HalpWdatArmTimer
HalpWdatDiscover
HalpWdatExecuteActionBeforeInitialize
HalpWdatInitialize
HalpWdatInitializeWdat
HalpWdatInitializeWdrt
HalpWdatProcessWdatInternalData
HalpWdatProcessWdrtInternalData
HalpWdatStop
HalpWhackICHUsbSmi
HalpWheaInitDiscard
HalpWheaInitProcessorGenericSection
HalpWheaInitSystem
HalpWheaNativeCpuid
HalpWheaNativeReadMsr
HalpWheaNativeWriteMsr
HalpWheaNativeWritebackInvalidate
HalpWriteCmosTime
HalpWritePCIConfig
HalpWritePartitionTable
HalpWriteRtcStdPCAT
HalpWriteStdCmosData
HalpWriteWheaPhysicalMemory
HalpcGetCmosDataByType
HalpcSetCmosDataByType
HsaDisableInterrupt
HsaDismissPageFault
HsaEnableInterrupt
HsaEnsureNoPendingFaults
HsaFindDevice
HsaFlushDeviceTbOnly
HsaFlushTb
HsaGetPageFault
HsaGrowPasidTable
HsaHandleInterrupt
HsaInitializeIommu
HsaInvalidateDTE
HsaIommuSendCommand
HsaMarkHiberRegions
HsaSetDevicePasidTable
HsaSetDeviceSvmCapabilities
HsaSetMessageInterruptRouting
HsaSetPasidAddressSpace
HviGetHardwareFeatures
IoFlushAdapterBuffers
IoFlushAdapterBuffersV2
IoFlushAdapterBuffersV3
IoFreeAdapterChannel
IoFreeAdapterChannelV2
IoFreeAdapterChannelV3
IoFreeMapRegisters
IoFreeMapRegistersV2
IoFreeMapRegistersV3
IoMapTransfer
IoMapTransferInternal
IommuDevicePowerChange
IommuDisableDevicePasid
IommuEnableDevicePasid
IommuFlushAllPasid
IommuFlushTb
IommuGetConfiguration
IommuGetLibraryContext
IommuHvDevicePowerChange
IommuHvFlushAllPasid
IommuHvFlushTb
IommuHvGetConfiguration
IommuHvSetAddressSpace
IommuInitializeLibrary
IommuMapDevice
IommuProcessPageRequestQueue
IommuSetAddressSpace
IommuUnmapDevice
IommupGetSystemContext
IommupHvDismissPageFault
IommupHvGetDeviceCapabilities
IommupHvGetPageFault
IommupHvInitializeLibrary
IommupHvInterruptRoutine
IommupHvUnmapDevice
IvtBuildContextEntry
IvtCheckForReservedRegion
IvtDisableInterrupt
IvtDismissPageFault
IvtEnableInterrupt
IvtEnsureNoPendingFaults
IvtFindDevice
IvtFlushDeviceTbOnly
IvtFlushTb
IvtFlushTbInternal
IvtGetPageFault
IvtGrowPasidTable
IvtHandleInterrupt
IvtInitializeIommu
IvtInitializeMTRR
IvtInvalidateAllContextEntries
IvtInvalidateContextEntry
IvtInvalidateRemappingTableEntries
IvtInvalidateRemappingTableEntry
IvtIommuSendCommand
IvtMarkHiberRegions
IvtSetDevicePasidTable
IvtSetDeviceSvmCapabilities
IvtSetMessageInterruptRouting
IvtSetPasidAddressSpace
IvtUpdateContextEntryPasidTable
IvtUpdateExtendedDestination
IvtUpdateGlobalCommand
IvtUpdateRemappingDestination
IvtUpdateRemappingTableEntry
IvtUpdateSingleTargetExtendedDestination
IvtpGetNextDeviceScope
IvtpGetNextDrhdDeviceScope
IvtpGetNextInternalDeviceScope
IvtpGetNextRemappingStructure
KeFlushWriteBuffer
KeQueryPerformanceCounter
KeSaveStateForHibernate
KeStallExecutionProcessor
MmLockPagableDataSection
MmLockPagableSectionByHandle
MmUnlockPagableImageSection
PcAllocateChannelAdapter
PcFlushChannel
PcGetChannelAdapter
PcInitializeDmaHW
PcMapTransfer
PcReadCounter
PcValidateDmaAdapterRequest
PcValidateDmaScatterTransfer
READ_PORT_USHORT_PAIR
RtlCopyMemoryNonTemporal
RtlMoveMemory
RtlQueryRegistryValues
RtlRaiseException
TranslateGlobalVectorToIsaVector
WRITE_PORT_USHORT_PAIR
WdHwCreateHardwareRegister
WdHwDestroyHardwareRegister
WdHwpGetReadMethod
WdHwpGetWriteMethod
WdHwpReadPortUChar
WdHwpReadPortULong
WdHwpReadPortUShort
WdHwpReadRegisterUChar
WdHwpReadRegisterULong
WdHwpReadRegisterUShort
WdHwpWritePortUChar
WdHwpWritePortULong
WdHwpWritePortUShort
WdHwpWriteRegisterUChar
WdHwpWriteRegisterULong
WdHwpWriteRegisterUShort
WdInstrDestroyInstruction
WdInstrExecuteAction
WdInstrExecuteInstruction
WdInstrInitializeInstruction
XmAaaOp
XmAadOp
XmAamOp
XmAasOp
XmAccumImmediate
XmAccumRegister
XmAdcOp
XmAddOp
XmAddOperands
XmAndOp
XmBitScanGeneral
XmBoundOp
XmBsfOp
XmBsrOp
XmBswapOp
XmBtOp
XmBtcOp
XmBtrOp
XmBtsOp
XmByteImmediate
XmCallOp
XmCbwOp
XmClcOp
XmCldOp
XmCliOp
XmCmcOp
XmCmpOp
XmCmpsOp
XmCmpxchgOp
XmCompareOperands
XmCwdOp
XmDaaOp
XmDasOp
XmDecOp
XmDivOp
XmEffectiveOffset
XmEmulateInterrupt
XmEmulateStream
XmEnterOp
XmEvaluateAddressSpecifier
XmEvaluateIndexSpecifier
XmExecuteInt1a
XmFlagsRegister
XmGeneralBitOffset
XmGeneralRegister
XmGetCodeByte
XmGetImmediateSourceValue
XmGetLongImmediate
XmGetOffsetAddress
XmGetRegisterAddress
XmGetStringAddress
XmGetStringAddressRange
XmGetWordImmediate
XmGroup1General
XmGroup1Immediate
XmGroup2By1
XmGroup2ByByte
XmGroup2ByCL
XmGroup3General
XmGroup45General
XmGroup7General
XmGroup8BitOffset
XmHltOp
XmIdivOp
XmIllOp
XmImmediateEnter
XmImmediateJump
XmImulImmediate
XmImulOp
XmImulxOp
XmInOp
XmIncOp
XmInitializeEmulator
XmInsOp
XmInt1aFindPciClassCode
XmInt1aFindPciDevice
XmInt1aReadConfigRegister
XmInt1aWriteConfigRegister
XmIntOp
XmIretOp
XmJcxzOp
XmJmpOp
XmJxxOp
XmLahfOp
XmLeaveOp
XmLoadSegment
XmLodsOp
XmLongJump
XmLoopOp
XmMovOp
XmMoveGeneral
XmMoveImmediate
XmMoveRegImmediate
XmMoveSegment
XmMoveXxGeneral
XmMovsOp
XmMulOp
XmNegOp
XmNoOperands
XmNopOp
XmNotOp
XmOpcodeEscape
XmOpcodeRegister
XmOrOp
XmOutOp
XmOutsOp
XmPopGeneral
XmPopOp
XmPopStack
XmPopaOp
XmPortDX
XmPortImmediate
XmPrefixOpcode
XmPushImmediate
XmPushOp
XmPushPopSegment
XmPushStack
XmPushaOp
XmRclOp
XmRcrOp
XmRdtscOp
XmRetOp
XmRolOp
XmRorOp
XmSahfOp
XmSarOp
XmSbbOp
XmScasOp
XmSegmentOffset
XmSetDataType
XmSetDestinationValue
XmSetLogicalResult
XmSetSourceValue
XmSetccByte
XmShiftDouble
XmShlOp
XmShldOp
XmShortJump
XmShrOp
XmShrdOp
XmSmswOp
XmStcOp
XmStdOp
XmStiOp
XmStoreResult
XmStosOp
XmStringOperands
XmSubOp
XmSubOperands
XmSxxOp
XmTestOp
XmXaddOp
XmXchgOp
XmXlatOpcode
XmXorOp
ZwClose
ZwOpenKey
ZwSetValueKey
__GSHandlerCheck
__GSHandlerCheckCommon
__chkstk
__report_gsfailure
__security_check_cookie
__security_init_cookie
_guard_check_icall_nop
_guard_dispatch_icall_nop
_setjmp
memcmp
memcpy
memmove
memset
strcmp
x86BiosAllocateBuffer
x86BiosCall
x86BiosExecuteInterruptShadowed
x86BiosFreeBuffer
x86BiosGetPciBusData
x86BiosInitializeBiosEx
x86BiosReadCmosPort
x86BiosReadCmosPortByte
x86BiosReadIoSpace
x86BiosReadMemory
x86BiosReadPciAddressPort
x86BiosReadPciDataPort
x86BiosSetPciBusData
x86BiosTranslateAddress
x86BiosWriteCmosPort
x86BiosWriteCmosPortByte
x86BiosWriteIoSpace
x86BiosWriteMemory
x86BiosWritePciAddressPort
x86BiosWritePciDataPort
*/
