typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

enum IRPLOCK
{
  IRPLOCK_CANCELABLE = 0,
  IRPLOCK_CANCEL_STARTED = 1,
  IRPLOCK_CANCEL_COMPLETE = 2,
  IRPLOCK_COMPLETED = 3,
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

typedef enum _PNP_DEVICE_DELETE_TYPE
{
  QueryRemoveDevice = 0,
  CancelRemoveDevice = 1,
  RemoveDevice = 2,
  SurpriseRemoveDevice = 3,
  EjectDevice = 4,
  RemoveFailedDevice = 5,
  RemoveUnstartedFailedDevice = 6,
  MaxDeviceDeleteType = 7,
} PNP_DEVICE_DELETE_TYPE, *PPNP_DEVICE_DELETE_TYPE;

typedef struct _PENDING_RELATIONS_LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0018 */ struct _PNP_DEVICE_EVENT_ENTRY* DeviceEvent;
  /* 0x001c */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0020 */ struct _RELATION_LIST* RelationsList;
  /* 0x0024 */ struct _IRP* EjectIrp;
  /* 0x0028 */ enum IRPLOCK Lock;
  /* 0x002c */ unsigned long Problem;
  /* 0x0030 */ unsigned char ProfileChangingEject;
  /* 0x0031 */ unsigned char DisplaySafeRemovalDialog;
  /* 0x0034 */ enum _SYSTEM_POWER_STATE LightestSleepState;
  /* 0x0038 */ struct DOCK_INTERFACE* DockInterface;
  /* 0x003c */ unsigned char DequeuePending;
  /* 0x0040 */ enum _PNP_DEVICE_DELETE_TYPE DeleteType;
} PENDING_RELATIONS_LIST_ENTRY, *PPENDING_RELATIONS_LIST_ENTRY; /* size: 0x0044 */

