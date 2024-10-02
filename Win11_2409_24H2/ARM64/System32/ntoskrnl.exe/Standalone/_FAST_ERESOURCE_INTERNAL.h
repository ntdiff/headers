union FAST_ERESOURCE_LOCK_STATE
{
  union
  {
    /* 0x0000 */ __int64 Value;
    struct /* bitfield */
    {
      /* 0x0000 */ __int64 Exclusive : 1; /* bit position: 0 */
      /* 0x0000 */ __int64 Conflict : 1; /* bit position: 1 */
      /* 0x0000 */ __int64 ShareCount : 62; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

typedef struct _KWAIT_CHAIN
{
  /* 0x0000 */ void* Head;
} KWAIT_CHAIN, *PKWAIT_CHAIN; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _FAST_OWNER_ENTRY_INTERNAL
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ void* ThreadAddressAndDisowned;
  /* 0x0018 */ void* LockAddress;
  /* 0x0020 */ long RecursiveReferenceCount;
  /* 0x0024 */ unsigned char AbLockHandle;
  struct /* bitfield */
  {
    /* 0x0025 */ unsigned char DynamicallyAllocated : 1; /* bit position: 0 */
    /* 0x0025 */ unsigned char CallerExclusive : 1; /* bit position: 1 */
    /* 0x0025 */ unsigned char CurrentlyWaitingShared : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0026 */ unsigned char Reserved[2];
} FAST_OWNER_ENTRY_INTERNAL, *PFAST_OWNER_ENTRY_INTERNAL; /* size: 0x0028 */

typedef struct _FAST_ERESOURCE_INTERNAL
{
  /* 0x0000 */ volatile union FAST_ERESOURCE_LOCK_STATE LockWord;
  /* 0x0008 */ struct _KWAIT_CHAIN SharedWaiters;
  /* 0x0010 */ struct _KWAIT_CHAIN ExclusiveWaiters;
  /* 0x0018 */ unsigned char Reserved;
  /* 0x0019 */ volatile char MiscFlags;
  /* 0x001a */ unsigned short Flag;
  /* 0x001c */ unsigned long ResourceTimeoutCount;
  /* 0x0020 */ unsigned long Reserved1;
  /* 0x0028 */ unsigned __int64 CreatorBackTraceIndex;
  /* 0x0030 */ unsigned __int64 SpinLock;
  /* 0x0038 */ unsigned long NumberOfSharedWaiters;
  /* 0x003c */ unsigned long ContentionCount;
  /* 0x0040 */ struct _FAST_OWNER_ENTRY_INTERNAL ExclusiveOwnerEntry;
} FAST_ERESOURCE_INTERNAL, *PFAST_ERESOURCE_INTERNAL; /* size: 0x0068 */

