typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KWAIT_CHAIN
{
  /* 0x0000 */ void* Head;
} KWAIT_CHAIN, *PKWAIT_CHAIN; /* size: 0x0008 */

typedef struct _FAST_ERESOURCE_INTERNAL
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0010 */ void* ReservedPointer;
  /* 0x0018 */ short ActiveCount;
  /* 0x001a */ unsigned short Flag;
  /* 0x0020 */ struct _KWAIT_CHAIN SharedWaiters;
  /* 0x0028 */ struct _KWAIT_CHAIN ExclusiveWaiters;
  /* 0x0030 */ struct _LIST_ENTRY OwnerEntryListHead;
  /* 0x0040 */ unsigned long ActiveEntries;
  /* 0x0044 */ unsigned long ContentionCount;
  /* 0x0048 */ unsigned long NumberOfSharedWaiters;
  /* 0x004c */ unsigned long NumberOfExclusiveWaiters;
  /* 0x0050 */ void* ReservedWin64OnlyPointer;
  union
  {
    /* 0x0058 */ void* Address;
    /* 0x0058 */ unsigned __int64 CreatorBackTraceIndex;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned __int64 SpinLock;
} FAST_ERESOURCE_INTERNAL, *PFAST_ERESOURCE_INTERNAL; /* size: 0x0068 */

