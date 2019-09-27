typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _PNP_DEVICE_ACTION_REQUEST
{
  AssignResources = 0,
  ClearDeviceProblem = 1,
  ClearProblem = 2,
  ClearEjectProblem = 3,
  HaltDevice = 4,
  QueryPowerRelations = 5,
  Rebalance = 6,
  ReenumerateBootDevices = 7,
  ReenumerateDeviceOnly = 8,
  ReenumerateDeviceTree = 9,
  ReenumerateRootDevices = 10,
  RequeryDeviceState = 11,
  ResetDevice = 12,
  ResourceRequirementsChanged = 13,
  RestartEnumeration = 14,
  SetDeviceProblem = 15,
  StartDevice = 16,
  StartSystemDevicesPass0 = 17,
  StartSystemDevicesPass1 = 18,
  NotifyTransportRelationsChange = 19,
  NotifyEjectionRelationsChange = 20,
  ConfigureDevice = 21,
  ConfigureDeviceClass = 22,
  ConfigureDeviceExtensions = 23,
  ConfigureDeviceReset = 24,
  ClearDmaGuardProblem = 25,
  PnpDeviceActionRequestMax = 26,
} PNP_DEVICE_ACTION_REQUEST, *PPNP_DEVICE_ACTION_REQUEST;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _PNP_DEVICE_ACTION_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0018 */ enum _PNP_DEVICE_ACTION_REQUEST RequestType;
  /* 0x001c */ unsigned char ReorderingBarrier;
  /* 0x0020 */ unsigned __int64 RequestArgument;
  /* 0x0028 */ struct _KEVENT* CompletionEvent;
  /* 0x0030 */ long* CompletionStatus;
  /* 0x0038 */ struct _GUID ActivityId;
  /* 0x0048 */ long RefCount;
  /* 0x004c */ unsigned char Dequeued;
  /* 0x0050 */ struct _EX_PUSH_LOCK CancelLock;
  /* 0x0058 */ unsigned char CancelRequested;
  /* 0x0059 */ char __PADDING__[7];
} PNP_DEVICE_ACTION_ENTRY, *PPNP_DEVICE_ACTION_ENTRY; /* size: 0x0060 */

