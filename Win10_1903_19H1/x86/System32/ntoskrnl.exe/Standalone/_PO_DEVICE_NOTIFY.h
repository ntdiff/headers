typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

