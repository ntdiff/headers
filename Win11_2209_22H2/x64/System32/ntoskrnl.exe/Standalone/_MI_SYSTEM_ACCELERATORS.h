typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_SYSTEM_ACCELERATORS
{
  /* 0x0000 */ struct _LIST_ENTRY HardwareInstances;
  /* 0x0010 */ unsigned long NumberOfHardwareInstances;
  /* 0x0014 */ unsigned char ShuttingDown;
  /* 0x0015 */ unsigned char AllocationFailures;
  /* 0x0016 */ unsigned char AllocationQueryFailures;
  /* 0x0018 */ void** OpaqueContext;
  /* 0x0020 */ volatile long Lock;
  /* 0x0024 */ long __PADDING__[1];
} MI_SYSTEM_ACCELERATORS, *PMI_SYSTEM_ACCELERATORS; /* size: 0x0028 */

