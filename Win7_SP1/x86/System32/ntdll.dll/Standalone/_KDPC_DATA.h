typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _LIST_ENTRY DpcListHead;
  /* 0x0008 */ unsigned long DpcLock;
  /* 0x000c */ volatile long DpcQueueDepth;
  /* 0x0010 */ unsigned long DpcCount;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0014 */

