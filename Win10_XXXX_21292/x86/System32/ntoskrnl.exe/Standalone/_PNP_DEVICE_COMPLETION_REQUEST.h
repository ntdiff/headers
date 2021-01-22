typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef enum _PNP_DEVNODE_STATE
{
  DeviceNodeUnspecified = 768,
  DeviceNodeUninitialized = 769,
  DeviceNodeUninitializedPending = 770,
  DeviceNodeInitializedPending = 771,
  DeviceNodeInitialized = 772,
  DeviceNodeDriversAdded = 773,
  DeviceNodeResourcesAssigned = 774,
  DeviceNodeStartPending = 775,
  DeviceNodeStartCompletion = 776,
  DeviceNodeStartPostWork = 777,
  DeviceNodeStarted = 778,
  DeviceNodeQueryStopped = 779,
  DeviceNodeStopped = 780,
  DeviceNodeRestartCompletion = 781,
  DeviceNodeEnumeratePending = 782,
  DeviceNodeEnumerateCompletion = 783,
  DeviceNodeAwaitingQueuedDeletion = 784,
  DeviceNodeAwaitingQueuedRemoval = 785,
  DeviceNodeQueryRemoved = 786,
  DeviceNodeRemovePendingCloses = 787,
  DeviceNodeRemoved = 788,
  DeviceNodeDeletePendingCloses = 789,
  DeviceNodeDeleted = 790,
  MaxDeviceNodeState = 791,
} PNP_DEVNODE_STATE, *PPNP_DEVNODE_STATE;

typedef struct _PNP_DEVICE_COMPLETION_REQUEST
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _DEVICE_NODE* DeviceNode;
  /* 0x000c */ void* Context;
  /* 0x0010 */ enum _PNP_DEVNODE_STATE CompletionState;
  /* 0x0014 */ unsigned long IrpPended;
  /* 0x0018 */ long Status;
  /* 0x001c */ void* Information;
  /* 0x0020 */ long ReferenceCount;
  /* 0x0024 */ struct _PNP_WATCHDOG* Watchdog;
} PNP_DEVICE_COMPLETION_REQUEST, *PPNP_DEVICE_COMPLETION_REQUEST; /* size: 0x0028 */

