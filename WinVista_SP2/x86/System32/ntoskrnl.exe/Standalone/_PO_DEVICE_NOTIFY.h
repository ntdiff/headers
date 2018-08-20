typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PO_DEVICE_NOTIFY
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ struct _DEVICE_OBJECT* TargetDevice;
  /* 0x000c */ unsigned char OrderLevel;
  /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0014 */ unsigned short* DeviceName;
  /* 0x0018 */ unsigned short* DriverName;
  /* 0x001c */ unsigned long ChildCount;
  /* 0x0020 */ unsigned long ActiveChild;
} PO_DEVICE_NOTIFY, *PPO_DEVICE_NOTIFY; /* size: 0x0024 */

