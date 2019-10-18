typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NONOPAQUE_OPLOCK
{
  /* 0x0000 */ struct _IRP* IrpExclusiveOplock;
  /* 0x0008 */ struct _FILE_OBJECT* FileObject;
  /* 0x0010 */ struct _EPROCESS* ExclusiveOplockOwner;
  /* 0x0018 */ struct _ETHREAD* ExclusiveOplockOwnerThread;
  /* 0x0020 */ unsigned char WaiterPriority;
  /* 0x0028 */ struct _LIST_ENTRY IrpOplocksR;
  /* 0x0038 */ struct _LIST_ENTRY IrpOplocksRH;
  /* 0x0048 */ struct _LIST_ENTRY RHBreakQueue;
  /* 0x0058 */ struct _LIST_ENTRY WaitingIrps;
  /* 0x0068 */ struct _LIST_ENTRY DelayAckFileObjectQueue;
  /* 0x0078 */ struct _LIST_ENTRY AtomicQueue;
  /* 0x0088 */ struct _GUID* DeleterParentKey;
  /* 0x0090 */ unsigned long OplockState;
  /* 0x0098 */ struct _FAST_MUTEX* FastMutex;
} NONOPAQUE_OPLOCK, *PNONOPAQUE_OPLOCK; /* size: 0x00a0 */

