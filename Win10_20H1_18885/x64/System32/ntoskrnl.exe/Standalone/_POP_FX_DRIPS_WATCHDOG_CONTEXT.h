typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _POP_FX_DRIPS_WATCHDOG_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ unsigned long ComponentIndex;
  /* 0x0018 */ struct _DEVICE_NODE** ChildDevices;
  /* 0x0020 */ unsigned long ChildDeviceCount;
  /* 0x0024 */ long __PADDING__[1];
} POP_FX_DRIPS_WATCHDOG_CONTEXT, *PPOP_FX_DRIPS_WATCHDOG_CONTEXT; /* size: 0x0028 */

