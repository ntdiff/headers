typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
} PNP_DEVICE_ACTION_REQUEST, *PPNP_DEVICE_ACTION_REQUEST;

typedef struct _PNP_DEVICE_ACTION_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x000c */ enum _PNP_DEVICE_ACTION_REQUEST RequestType;
  /* 0x0010 */ unsigned char ReorderingBarrier;
  /* 0x0014 */ unsigned long RequestArgument;
  /* 0x0018 */ struct _KEVENT* CompletionEvent;
  /* 0x001c */ long* CompletionStatus;
} PNP_DEVICE_ACTION_ENTRY, *PPNP_DEVICE_ACTION_ENTRY; /* size: 0x0020 */

