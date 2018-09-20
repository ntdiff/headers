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
  /* 0x0048 */ wchar_t* DeviceName;
  /* 0x0050 */ wchar_t* DriverName;
  /* 0x0058 */ unsigned long ChildCount;
  /* 0x005c */ unsigned long ActiveChild;
  /* 0x0060 */ unsigned long ParentCount;
  /* 0x0064 */ unsigned long ActiveParent;
} PO_DEVICE_NOTIFY, *PPO_DEVICE_NOTIFY; /* size: 0x0068 */

