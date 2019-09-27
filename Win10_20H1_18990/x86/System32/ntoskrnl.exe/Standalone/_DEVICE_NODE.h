typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
              /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
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
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
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
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 7 */
          }; /* bitfield */
          /* 0x0003 */ unsigned char DebugActive;
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

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

typedef struct _PO_DEVICE_NOTIFY
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ struct _LIST_ENTRY PowerChildren;
  /* 0x0010 */ struct _LIST_ENTRY PowerParents;
  /* 0x0018 */ struct _DEVICE_OBJECT* TargetDevice;
  /* 0x001c */ unsigned char OrderLevel;
  /* 0x0020 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0024 */ wchar_t* DeviceName;
  /* 0x0028 */ wchar_t* DriverName;
  /* 0x002c */ unsigned long ChildCount;
  /* 0x0030 */ unsigned long ActiveChild;
  /* 0x0034 */ unsigned long ParentCount;
  /* 0x0038 */ unsigned long ActiveParent;
} PO_DEVICE_NOTIFY, *PPO_DEVICE_NOTIFY; /* size: 0x003c */

typedef struct _PO_IRP_QUEUE
{
  /* 0x0000 */ struct _IRP* CurrentIrp;
  /* 0x0004 */ struct _IRP* PendingIrpList;
} PO_IRP_QUEUE, *PPO_IRP_QUEUE; /* size: 0x0008 */

typedef struct _PO_IRP_MANAGER
{
  /* 0x0000 */ struct _PO_IRP_QUEUE DeviceIrpQueue;
  /* 0x0008 */ struct _PO_IRP_QUEUE SystemIrpQueue;
} PO_IRP_MANAGER, *PPO_IRP_MANAGER; /* size: 0x0010 */

typedef enum _PNP_DEVNODE_STATE
{
  DeviceNodeUnspecified = 768,
  DeviceNodeUninitialized = 769,
  DeviceNodeInitialized = 770,
  DeviceNodeDriversAdded = 771,
  DeviceNodeResourcesAssigned = 772,
  DeviceNodeStartPending = 773,
  DeviceNodeStartCompletion = 774,
  DeviceNodeStartPostWork = 775,
  DeviceNodeStarted = 776,
  DeviceNodeQueryStopped = 777,
  DeviceNodeStopped = 778,
  DeviceNodeRestartCompletion = 779,
  DeviceNodeEnumeratePending = 780,
  DeviceNodeEnumerateCompletion = 781,
  DeviceNodeAwaitingQueuedDeletion = 782,
  DeviceNodeAwaitingQueuedRemoval = 783,
  DeviceNodeQueryRemoved = 784,
  DeviceNodeRemovePendingCloses = 785,
  DeviceNodeRemoved = 786,
  DeviceNodeDeletePendingCloses = 787,
  DeviceNodeDeleted = 788,
  MaxDeviceNodeState = 789,
} PNP_DEVNODE_STATE, *PPNP_DEVNODE_STATE;

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

enum PROFILE_STATUS
{
  DOCK_NOTDOCKDEVICE = 0,
  DOCK_QUIESCENT = 1,
  DOCK_ARRIVING = 2,
  DOCK_DEPARTING = 3,
  DOCK_EJECTIRP_COMPLETED = 4,
};

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _PO_DIRECTED_DRIPS_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY QueueLink;
  /* 0x0008 */ struct _LIST_ENTRY VisitedQueueLink;
  /* 0x0010 */ volatile unsigned long Flags;
  /* 0x0014 */ unsigned long CachedFlags;
  /* 0x0018 */ unsigned long DeviceUsageCount;
  /* 0x001c */ void* Diagnostic;
} PO_DIRECTED_DRIPS_STATE, *PPO_DIRECTED_DRIPS_STATE; /* size: 0x0020 */

typedef struct _DEVICE_NODE
{
  /* 0x0000 */ struct _DEVICE_NODE* Sibling;
  /* 0x0004 */ struct _DEVICE_NODE* Child;
  /* 0x0008 */ struct _DEVICE_NODE* Parent;
  /* 0x000c */ struct _DEVICE_NODE* LastChild;
  /* 0x0010 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0014 */ struct _UNICODE_STRING InstancePath;
  /* 0x001c */ struct _UNICODE_STRING ServiceName;
  /* 0x0024 */ struct _IRP* PendingIrp;
  /* 0x0028 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x002c */ volatile long FxDeviceLock;
  /* 0x0030 */ struct _KEVENT FxRemoveEvent;
  /* 0x0040 */ volatile long FxActivationCount;
  /* 0x0044 */ volatile long FxSleepCount;
  /* 0x0048 */ struct _UNICODE_STRING UniqueId;
  /* 0x0050 */ struct _POP_FX_PLUGIN* Plugin;
  /* 0x0054 */ unsigned long Level;
  /* 0x0058 */ union _POWER_STATE CurrentPowerState;
  /* 0x005c */ struct _PO_DEVICE_NOTIFY Notify;
  /* 0x0098 */ struct _PO_IRP_MANAGER PoIrpManager;
  /* 0x00a8 */ unsigned long PowerFlags;
  /* 0x00ac */ enum _PNP_DEVNODE_STATE State;
  /* 0x00b0 */ enum _PNP_DEVNODE_STATE PreviousState;
  /* 0x00b4 */ enum _PNP_DEVNODE_STATE StateHistory[20];
  /* 0x0104 */ unsigned long StateHistoryEntry;
  /* 0x0108 */ long CompletionStatus;
  /* 0x010c */ unsigned long Flags;
  /* 0x0110 */ unsigned long UserFlags;
  /* 0x0114 */ unsigned long Problem;
  /* 0x0118 */ long ProblemStatus;
  /* 0x011c */ struct _CM_RESOURCE_LIST* ResourceList;
  /* 0x0120 */ struct _CM_RESOURCE_LIST* ResourceListTranslated;
  /* 0x0124 */ struct _DEVICE_OBJECT* DuplicatePDO;
  /* 0x0128 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;
  /* 0x012c */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0130 */ unsigned long BusNumber;
  /* 0x0134 */ enum _INTERFACE_TYPE ChildInterfaceType;
  /* 0x0138 */ unsigned long ChildBusNumber;
  /* 0x013c */ unsigned short ChildBusTypeIndex;
  /* 0x013e */ unsigned char RemovalPolicy;
  /* 0x013f */ unsigned char HardwareRemovalPolicy;
  /* 0x0140 */ struct _LIST_ENTRY TargetDeviceNotify;
  /* 0x0148 */ struct _LIST_ENTRY DeviceArbiterList;
  /* 0x0150 */ struct _LIST_ENTRY DeviceTranslatorList;
  /* 0x0158 */ unsigned short NoTranslatorMask;
  /* 0x015a */ unsigned short QueryTranslatorMask;
  /* 0x015c */ unsigned short NoArbiterMask;
  /* 0x015e */ unsigned short QueryArbiterMask;
  union
  {
    union
    {
      /* 0x0160 */ struct _DEVICE_NODE* LegacyDeviceNode;
      /* 0x0160 */ struct _DEVICE_RELATIONS* PendingDeviceRelations;
      /* 0x0160 */ void* Information;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ OverUsed1;
  union
  {
    /* 0x0164 */ struct _DEVICE_NODE* NextResourceDeviceNode;
  } /* size: 0x0004 */ OverUsed2;
  /* 0x0168 */ struct _CM_RESOURCE_LIST* BootResources;
  /* 0x016c */ struct _CM_RESOURCE_LIST* BootResourcesTranslated;
  /* 0x0170 */ unsigned long CapabilityFlags;
  struct
  {
    /* 0x0174 */ enum PROFILE_STATUS DockStatus;
    /* 0x0178 */ struct _LIST_ENTRY ListEntry;
    /* 0x0180 */ wchar_t* SerialNumber;
  } /* size: 0x0010 */ DockInfo;
  /* 0x0184 */ unsigned long DisableableDepends;
  /* 0x0188 */ struct _LIST_ENTRY PendedSetInterfaceState;
  /* 0x0190 */ struct _LIST_ENTRY LegacyBusListEntry;
  /* 0x0198 */ unsigned long DriverUnloadRetryCount;
  /* 0x019c */ struct _DEVICE_NODE* PreviousParent;
  /* 0x01a0 */ long DeletedChildren;
  /* 0x01a4 */ unsigned long NumaNodeIndex;
  /* 0x01a8 */ struct _GUID ContainerID;
  /* 0x01b8 */ unsigned char OverrideFlags;
  /* 0x01bc */ unsigned long DeviceIdsHash;
  /* 0x01c0 */ unsigned char RequiresUnloadedDriver;
  /* 0x01c4 */ struct _PENDING_RELATIONS_LIST_ENTRY* PendingEjectRelations;
  /* 0x01c8 */ unsigned long StateFlags;
  /* 0x01cc */ struct _PNP_REBALANCE_TRACE_CONTEXT* RebalanceContext;
  /* 0x01d0 */ struct _DEVICE_NODE_IOMMU_EXTENSION* IommuExtension;
  /* 0x01d4 */ struct _PO_DIRECTED_DRIPS_STATE DirectedDripsState;
} DEVICE_NODE, *PDEVICE_NODE; /* size: 0x01f4 */

