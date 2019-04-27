typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KWAIT_CHAIN
{
  /* 0x0000 */ void* Head;
} KWAIT_CHAIN, *PKWAIT_CHAIN; /* size: 0x0004 */

typedef struct _FAST_ERESOURCE_INTERNAL
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0008 */ void* ReservedPointer;
  /* 0x000c */ short ActiveCount;
  /* 0x000e */ unsigned short Flag;
  /* 0x0010 */ struct _KWAIT_CHAIN SharedWaiters;
  /* 0x0014 */ struct _KWAIT_CHAIN ExclusiveWaiters;
  /* 0x0018 */ struct _LIST_ENTRY OwnerEntryListHead;
  /* 0x0020 */ unsigned long ActiveEntries;
  /* 0x0024 */ unsigned long ContentionCount;
  /* 0x0028 */ unsigned long NumberOfSharedWaiters;
  /* 0x002c */ unsigned long NumberOfExclusiveWaiters;
  union
  {
    /* 0x0030 */ void* Address;
    /* 0x0030 */ unsigned long CreatorBackTraceIndex;
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long SpinLock;
} FAST_ERESOURCE_INTERNAL, *PFAST_ERESOURCE_INTERNAL; /* size: 0x0038 */

