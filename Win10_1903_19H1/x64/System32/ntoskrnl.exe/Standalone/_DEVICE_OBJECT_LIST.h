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

typedef enum _DEVICE_RELATION_LEVEL
{
  RELATION_LEVEL_REMOVE_EJECT = 0,
  RELATION_LEVEL_DEPENDENT = 1,
  RELATION_LEVEL_DIRECT_DESCENDANT = 2,
} DEVICE_RELATION_LEVEL, *PDEVICE_RELATION_LEVEL;

typedef struct _DEVICE_OBJECT_LIST_ENTRY
{
  /* 0x0000 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0008 */ enum _DEVICE_RELATION_LEVEL RelationLevel;
  /* 0x000c */ unsigned long Ordinal;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long __PADDING__[1];
} DEVICE_OBJECT_LIST_ENTRY, *PDEVICE_OBJECT_LIST_ENTRY; /* size: 0x0018 */

typedef struct _DEVICE_OBJECT_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long MaxCount;
  /* 0x0008 */ unsigned long TagCount;
  /* 0x000c */ enum _PNP_DEVICE_DELETE_TYPE OperationCode;
  /* 0x0010 */ struct _DEVICE_OBJECT_LIST_ENTRY Devices[1];
} DEVICE_OBJECT_LIST, *PDEVICE_OBJECT_LIST; /* size: 0x0028 */

