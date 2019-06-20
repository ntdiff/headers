typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PO_NOTIFY_ORDER_LEVEL
{
  /* 0x0000 */ unsigned long DeviceCount;
  /* 0x0004 */ unsigned long ActiveCount;
  /* 0x0008 */ struct _LIST_ENTRY WaitSleep;
  /* 0x0018 */ struct _LIST_ENTRY ReadySleep;
  /* 0x0028 */ struct _LIST_ENTRY ReadyS0;
  /* 0x0038 */ struct _LIST_ENTRY WaitS0;
} PO_NOTIFY_ORDER_LEVEL, *PPO_NOTIFY_ORDER_LEVEL; /* size: 0x0048 */

typedef struct _PO_DEVICE_NOTIFY_ORDER
{
  /* 0x0000 */ unsigned char Locked;
  /* 0x0008 */ struct _DEVICE_OBJECT** WarmEjectPdoPointer;
  /* 0x0010 */ struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5];
  /* 0x0178 */ unsigned long Flags;
  /* 0x017c */ long __PADDING__[1];
} PO_DEVICE_NOTIFY_ORDER, *PPO_DEVICE_NOTIFY_ORDER; /* size: 0x0180 */

