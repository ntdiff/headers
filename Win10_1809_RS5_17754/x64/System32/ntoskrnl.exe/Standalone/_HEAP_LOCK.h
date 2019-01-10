typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned __int64 OwnerThread;
  union
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long IoPriorityBoosted : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned long OwnerReferenced : 1; /* bit position: 1 */
      /* 0x0008 */ unsigned long IoQoSPriorityBoosted : 1; /* bit position: 2 */
      /* 0x0008 */ unsigned long OwnerCount : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0008 */ unsigned long TableSize;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0010 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0010 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x0018 */ short ActiveCount;
  union
  {
    /* 0x001a */ unsigned short Flag;
    struct
    {
      /* 0x001a */ unsigned char ReservedLowFlags;
      /* 0x001b */ unsigned char WaiterPriority;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0020 */ void* SharedWaiters;
  /* 0x0028 */ void* ExclusiveWaiters;
  /* 0x0030 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0040 */ unsigned long ActiveEntries;
  /* 0x0044 */ unsigned long ContentionCount;
  /* 0x0048 */ unsigned long NumberOfSharedWaiters;
  /* 0x004c */ unsigned long NumberOfExclusiveWaiters;
  /* 0x0050 */ void* Reserved2;
  union
  {
    /* 0x0058 */ void* Address;
    /* 0x0058 */ unsigned __int64 CreatorBackTraceIndex;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned __int64 SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0068 */

typedef struct _HEAP_LOCK
{
  union
  {
    union
    {
      /* 0x0000 */ struct _RTL_CRITICAL_SECTION CriticalSection;
      /* 0x0000 */ struct _ERESOURCE Resource;
    }; /* size: 0x0068 */
  } /* size: 0x0068 */ Lock;
} HEAP_LOCK, *PHEAP_LOCK; /* size: 0x0068 */

