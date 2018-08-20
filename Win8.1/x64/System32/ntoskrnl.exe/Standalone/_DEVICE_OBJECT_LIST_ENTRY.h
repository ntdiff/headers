typedef enum _DEVICE_RELATION_LEVEL
{
  DeviceRelation = 0,
  Dependent = 1,
  DirectDescendant = 2,
} DEVICE_RELATION_LEVEL, *PDEVICE_RELATION_LEVEL;

typedef struct _DEVICE_OBJECT_LIST_ENTRY
{
  /* 0x0000 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0008 */ enum _DEVICE_RELATION_LEVEL RelationLevel;
  /* 0x000c */ unsigned long Flags;
} DEVICE_OBJECT_LIST_ENTRY, *PDEVICE_OBJECT_LIST_ENTRY; /* size: 0x0010 */

