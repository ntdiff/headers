typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

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
  /* 0x0010 */ struct _LIST_ENTRY PowerChildren;
  /* 0x0020 */ struct _LIST_ENTRY PowerParents;
  /* 0x0030 */ struct _DEVICE_OBJECT* TargetDevice;
  /* 0x0038 */ unsigned char OrderLevel;
  /* 0x0040 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0048 */ wchar_t* DeviceName;
  /* 0x0050 */ wchar_t* DriverName;
  /* 0x0058 */ unsigned long ChildCount;
  /* 0x005c */ unsigned long ActiveChild;
  /* 0x0060 */ unsigned long ParentCount;
  /* 0x0064 */ unsigned long ActiveParent;
} PO_DEVICE_NOTIFY, *PPO_DEVICE_NOTIFY; /* size: 0x0068 */

typedef struct _PO_IRP_QUEUE
{
  /* 0x0000 */ struct _IRP* CurrentIrp;
  /* 0x0008 */ struct _IRP* PendingIrpList;
} PO_IRP_QUEUE, *PPO_IRP_QUEUE; /* size: 0x0010 */

typedef struct _PO_IRP_MANAGER
{
  /* 0x0000 */ struct _PO_IRP_QUEUE DeviceIrpQueue;
  /* 0x0010 */ struct _PO_IRP_QUEUE SystemIrpQueue;
} PO_IRP_MANAGER, *PPO_IRP_MANAGER; /* size: 0x0020 */

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
  /* 0x0010 */ struct _LIST_ENTRY VisitedQueueLink;
  /* 0x0020 */ volatile unsigned long Flags;
  /* 0x0024 */ unsigned long CachedFlags;
  /* 0x0028 */ unsigned long DeviceUsageCount;
  /* 0x0030 */ void* Diagnostic;
} PO_DIRECTED_DRIPS_STATE, *PPO_DIRECTED_DRIPS_STATE; /* size: 0x0038 */

typedef struct _DEVICE_NODE
{
  /* 0x0000 */ struct _DEVICE_NODE* Sibling;
  /* 0x0008 */ struct _DEVICE_NODE* Child;
  /* 0x0010 */ struct _DEVICE_NODE* Parent;
  /* 0x0018 */ struct _DEVICE_NODE* LastChild;
  /* 0x0020 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0028 */ struct _UNICODE_STRING InstancePath;
  /* 0x0038 */ struct _UNICODE_STRING ServiceName;
  /* 0x0048 */ struct _IRP* PendingIrp;
  /* 0x0050 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x0058 */ volatile long FxDeviceLock;
  /* 0x0060 */ struct _KEVENT FxRemoveEvent;
  /* 0x0078 */ volatile long FxActivationCount;
  /* 0x007c */ volatile long FxSleepCount;
  /* 0x0080 */ struct _POP_FX_PLUGIN* Plugin;
  /* 0x0088 */ unsigned long Level;
  /* 0x008c */ union _POWER_STATE CurrentPowerState;
  /* 0x0090 */ struct _PO_DEVICE_NOTIFY Notify;
  /* 0x00f8 */ struct _PO_IRP_MANAGER PoIrpManager;
  /* 0x0118 */ struct _UNICODE_STRING UniqueId;
  /* 0x0128 */ unsigned long PowerFlags;
  /* 0x012c */ enum _PNP_DEVNODE_STATE State;
  /* 0x0130 */ enum _PNP_DEVNODE_STATE PreviousState;
  /* 0x0134 */ enum _PNP_DEVNODE_STATE StateHistory[20];
  /* 0x0184 */ unsigned long StateHistoryEntry;
  /* 0x0188 */ long CompletionStatus;
  /* 0x018c */ unsigned long Flags;
  /* 0x0190 */ unsigned long UserFlags;
  /* 0x0194 */ unsigned long Problem;
  /* 0x0198 */ long ProblemStatus;
  /* 0x01a0 */ struct _CM_RESOURCE_LIST* ResourceList;
  /* 0x01a8 */ struct _CM_RESOURCE_LIST* ResourceListTranslated;
  /* 0x01b0 */ struct _DEVICE_OBJECT* DuplicatePDO;
  /* 0x01b8 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;
  /* 0x01c0 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x01c4 */ unsigned long BusNumber;
  /* 0x01c8 */ enum _INTERFACE_TYPE ChildInterfaceType;
  /* 0x01cc */ unsigned long ChildBusNumber;
  /* 0x01d0 */ unsigned short ChildBusTypeIndex;
  /* 0x01d2 */ unsigned char RemovalPolicy;
  /* 0x01d3 */ unsigned char HardwareRemovalPolicy;
  /* 0x01d8 */ struct _LIST_ENTRY TargetDeviceNotify;
  /* 0x01e8 */ struct _LIST_ENTRY DeviceArbiterList;
  /* 0x01f8 */ struct _LIST_ENTRY DeviceTranslatorList;
  /* 0x0208 */ unsigned short NoTranslatorMask;
  /* 0x020a */ unsigned short QueryTranslatorMask;
  /* 0x020c */ unsigned short NoArbiterMask;
  /* 0x020e */ unsigned short QueryArbiterMask;
  union
  {
    union
    {
      /* 0x0210 */ struct _DEVICE_NODE* LegacyDeviceNode;
      /* 0x0210 */ struct _DEVICE_RELATIONS* PendingDeviceRelations;
      /* 0x0210 */ void* Information;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ OverUsed1;
  union
  {
    /* 0x0218 */ struct _DEVICE_NODE* NextResourceDeviceNode;
  } /* size: 0x0008 */ OverUsed2;
  /* 0x0220 */ struct _CM_RESOURCE_LIST* BootResources;
  /* 0x0228 */ struct _CM_RESOURCE_LIST* BootResourcesTranslated;
  /* 0x0230 */ unsigned long CapabilityFlags;
  struct
  {
    /* 0x0238 */ enum PROFILE_STATUS DockStatus;
    /* 0x0240 */ struct _LIST_ENTRY ListEntry;
    /* 0x0250 */ wchar_t* SerialNumber;
  } /* size: 0x0020 */ DockInfo;
  /* 0x0258 */ unsigned long DisableableDepends;
  /* 0x0260 */ struct _LIST_ENTRY PendedSetInterfaceState;
  /* 0x0270 */ struct _LIST_ENTRY LegacyBusListEntry;
  /* 0x0280 */ unsigned long DriverUnloadRetryCount;
  /* 0x0288 */ struct _DEVICE_NODE* PreviousParent;
  /* 0x0290 */ long DeletedChildren;
  /* 0x0294 */ unsigned long NumaNodeIndex;
  /* 0x0298 */ struct _GUID ContainerID;
  /* 0x02a8 */ unsigned char OverrideFlags;
  /* 0x02ac */ unsigned long DeviceIdsHash;
  /* 0x02b0 */ unsigned char RequiresUnloadedDriver;
  /* 0x02b8 */ struct _PENDING_RELATIONS_LIST_ENTRY* PendingEjectRelations;
  /* 0x02c0 */ unsigned long StateFlags;
  /* 0x02c8 */ struct _PNP_REBALANCE_TRACE_CONTEXT* RebalanceContext;
  /* 0x02d0 */ struct _DEVICE_NODE_IOMMU_EXTENSION* IommuExtension;
  /* 0x02d8 */ struct _PO_DIRECTED_DRIPS_STATE DirectedDripsState;
} DEVICE_NODE, *PDEVICE_NODE; /* size: 0x0310 */

