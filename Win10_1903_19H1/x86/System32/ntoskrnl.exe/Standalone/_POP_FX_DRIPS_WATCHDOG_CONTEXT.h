typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _POP_FX_DRIPS_WATCHDOG_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ unsigned long ComponentIndex;
  /* 0x000c */ struct _DEVICE_NODE** ChildDevices;
  /* 0x0010 */ unsigned long ChildDeviceCount;
} POP_FX_DRIPS_WATCHDOG_CONTEXT, *PPOP_FX_DRIPS_WATCHDOG_CONTEXT; /* size: 0x0014 */

