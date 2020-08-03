typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _KDPC_LIST
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY ListHead;
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY* LastEntry;
} KDPC_LIST, *PKDPC_LIST; /* size: 0x0008 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _KDPC_LIST DpcList;
  /* 0x0008 */ unsigned long DpcLock;
  /* 0x000c */ volatile long DpcQueueDepth;
  /* 0x0010 */ unsigned long DpcCount;
  /* 0x0014 */ struct _KDPC* volatile ActiveDpc;
  /* 0x0018 */ unsigned long LongDpcPresent;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x001c */

