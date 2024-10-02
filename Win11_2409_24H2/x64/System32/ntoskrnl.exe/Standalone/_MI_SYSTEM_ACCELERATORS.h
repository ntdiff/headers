typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_SYSTEM_ACCELERATORS
{
  /* 0x0000 */ struct _LIST_ENTRY HardwareInstances;
  /* 0x0010 */ unsigned long NumberOfHardwareInstances;
  /* 0x0014 */ unsigned char ShuttingDown;
  /* 0x0015 */ unsigned char AllocationFailures;
  /* 0x0016 */ unsigned char AllocationQueryFailures;
  /* 0x0017 */ unsigned char AllocationQueryBadNodes;
  /* 0x0018 */ struct _SINGLE_LIST_ENTRY DeferredPoolFrees;
  /* 0x0020 */ void** OpaqueContext;
  /* 0x0028 */ volatile long Lock;
  /* 0x002c */ long __PADDING__[1];
} MI_SYSTEM_ACCELERATORS, *PMI_SYSTEM_ACCELERATORS; /* size: 0x0030 */

