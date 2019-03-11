typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RH_OP_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ struct _IRP* OplockRequestIrp;
  /* 0x0018 */ struct _FILE_OBJECT* OplockRequestFileObject;
  /* 0x0020 */ struct _EPROCESS* OplockRequestProcess;
  /* 0x0028 */ struct _ETHREAD* OplockOwnerThread;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0038 */ struct _LIST_ENTRY AtomicLinks;
} RH_OP_CONTEXT, *PRH_OP_CONTEXT; /* size: 0x0048 */

