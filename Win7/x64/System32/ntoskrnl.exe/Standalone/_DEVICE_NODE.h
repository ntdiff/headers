typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PO_DEVICE_NOTIFY
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ struct _LIST_ENTRY PowerChildren;
  /* 0x0020 */ struct _LIST_ENTRY PowerParents;
  /* 0x0030 */ struct _DEVICE_OBJECT* TargetDevice;
  /* 0x0038 */ unsigned char OrderLevel;
  /* 0x0040 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0048 */ unsigned short* DeviceName;
  /* 0x0050 */ unsigned short* DriverName;
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
  MaximumInterfaceType = 17,
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
  /* 0x0050 */ unsigned long Level;
  /* 0x0058 */ struct _PO_DEVICE_NOTIFY Notify;
  /* 0x00c0 */ struct _PO_IRP_MANAGER PoIrpManager;
  /* 0x00e0 */ enum _PNP_DEVNODE_STATE State;
  /* 0x00e4 */ enum _PNP_DEVNODE_STATE PreviousState;
  /* 0x00e8 */ enum _PNP_DEVNODE_STATE StateHistory[20];
  /* 0x0138 */ unsigned long StateHistoryEntry;
  /* 0x013c */ long CompletionStatus;
  /* 0x0140 */ unsigned long Flags;
  /* 0x0144 */ unsigned long UserFlags;
  /* 0x0148 */ unsigned long Problem;
  /* 0x0150 */ struct _CM_RESOURCE_LIST* ResourceList;
  /* 0x0158 */ struct _CM_RESOURCE_LIST* ResourceListTranslated;
  /* 0x0160 */ struct _DEVICE_OBJECT* DuplicatePDO;
  /* 0x0168 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;
  /* 0x0170 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0174 */ unsigned long BusNumber;
  /* 0x0178 */ enum _INTERFACE_TYPE ChildInterfaceType;
  /* 0x017c */ unsigned long ChildBusNumber;
  /* 0x0180 */ unsigned short ChildBusTypeIndex;
  /* 0x0182 */ unsigned char RemovalPolicy;
  /* 0x0183 */ unsigned char HardwareRemovalPolicy;
  /* 0x0188 */ struct _LIST_ENTRY TargetDeviceNotify;
  /* 0x0198 */ struct _LIST_ENTRY DeviceArbiterList;
  /* 0x01a8 */ struct _LIST_ENTRY DeviceTranslatorList;
  /* 0x01b8 */ unsigned short NoTranslatorMask;
  /* 0x01ba */ unsigned short QueryTranslatorMask;
  /* 0x01bc */ unsigned short NoArbiterMask;
  /* 0x01be */ unsigned short QueryArbiterMask;
  union // _TAG_UNNAMED_156
  {
    union
    {
      /* 0x01c0 */ struct _DEVICE_NODE* LegacyDeviceNode;
      /* 0x01c0 */ struct _DEVICE_RELATIONS* PendingDeviceRelations;
      /* 0x01c0 */ void* Information;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ OverUsed1;
  union // _TAG_UNNAMED_157
  {
    /* 0x01c8 */ struct _DEVICE_NODE* NextResourceDeviceNode;
  } /* size: 0x0008 */ OverUsed2;
  /* 0x01d0 */ struct _CM_RESOURCE_LIST* BootResources;
  /* 0x01d8 */ struct _CM_RESOURCE_LIST* BootResourcesTranslated;
  /* 0x01e0 */ unsigned long CapabilityFlags;
  struct // _TAG_UNNAMED_158
  {
    /* 0x01e8 */ enum PROFILE_STATUS DockStatus;
    /* 0x01f0 */ struct _LIST_ENTRY ListEntry;
    /* 0x0200 */ unsigned short* SerialNumber;
  } /* size: 0x0020 */ DockInfo;
  /* 0x0208 */ unsigned long DisableableDepends;
  /* 0x0210 */ struct _LIST_ENTRY PendedSetInterfaceState;
  /* 0x0220 */ struct _LIST_ENTRY LegacyBusListEntry;
  /* 0x0230 */ unsigned long DriverUnloadRetryCount;
  /* 0x0238 */ struct _DEVICE_NODE* PreviousParent;
  /* 0x0240 */ unsigned long DeletedChildren;
  /* 0x0244 */ unsigned long NumaNodeIndex;
  /* 0x0248 */ struct _GUID ContainerID;
  /* 0x0258 */ unsigned char OverrideFlags;
  /* 0x0259 */ unsigned char RequiresUnloadedDriver;
  /* 0x0260 */ struct _PENDING_RELATIONS_LIST_ENTRY* PendingEjectRelations;
} DEVICE_NODE, *PDEVICE_NODE; /* size: 0x0268 */

