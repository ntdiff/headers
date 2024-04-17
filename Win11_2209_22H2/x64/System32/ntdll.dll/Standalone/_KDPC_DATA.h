typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC_LIST
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY ListHead;
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY* LastEntry;
} KDPC_LIST, *PKDPC_LIST; /* size: 0x0010 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _KDPC_LIST DpcList;
  /* 0x0010 */ unsigned __int64 DpcLock;
  /* 0x0018 */ volatile long DpcQueueDepth;
  /* 0x001c */ unsigned long DpcCount;
  /* 0x0020 */ struct _KDPC* volatile ActiveDpc;
  /* 0x0028 */ unsigned long LongDpcPresent;
  /* 0x002c */ unsigned long Padding;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0030 */

