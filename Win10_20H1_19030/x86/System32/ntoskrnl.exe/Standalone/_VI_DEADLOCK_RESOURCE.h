typedef enum _VI_DEADLOCK_RESOURCE_TYPE
{
  VfDeadlockUnknown = 0,
  VfDeadlockMutex = 1,
  VfDeadlockMutexAbandoned = 2,
  VfDeadlockFastMutex = 3,
  VfDeadlockFastMutexUnsafe = 4,
  VfDeadlockSpinLock = 5,
  VfDeadlockInStackQueuedSpinLock = 6,
  VfDeadlockUnusedSpinLock = 7,
  VfDeadlockEresource = 8,
  VfDeadlockTypeMaximum = 9,
} VI_DEADLOCK_RESOURCE_TYPE, *PVI_DEADLOCK_RESOURCE_TYPE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _VI_DEADLOCK_RESOURCE
{
  /* 0x0000 */ enum _VI_DEADLOCK_RESOURCE_TYPE Type;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long NodeCount : 16; /* bit position: 0 */
    /* 0x0004 */ unsigned long RecursionCount : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x0008 */ void* ResourceAddress;
  /* 0x000c */ struct _VI_DEADLOCK_THREAD* ThreadOwner;
  /* 0x0010 */ struct _LIST_ENTRY ResourceList;
  union
  {
    /* 0x0018 */ struct _LIST_ENTRY HashChainList;
    /* 0x0018 */ struct _LIST_ENTRY FreeListEntry;
  }; /* size: 0x0008 */
  /* 0x0020 */ void* StackTrace[8];
  /* 0x0040 */ void* LastAcquireTrace[8];
  /* 0x0060 */ void* LastReleaseTrace[8];
} VI_DEADLOCK_RESOURCE, *PVI_DEADLOCK_RESOURCE; /* size: 0x0080 */

