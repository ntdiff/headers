typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

typedef struct _RTL_STACK_DATABASE_LOCK
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
} RTL_STACK_DATABASE_LOCK, *PRTL_STACK_DATABASE_LOCK; /* size: 0x0004 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _RTL_STD_LIST_HEAD
{
  /* 0x0000 */ struct _RTL_STD_LIST_ENTRY* Next;
  /* 0x0004 */ struct _RTL_STACK_DATABASE_LOCK Lock;
} RTL_STD_LIST_HEAD, *PRTL_STD_LIST_HEAD; /* size: 0x0008 */

typedef struct _STACK_TRACE_DATABASE
{
  union
  {
    /* 0x0000 */ char Reserved[56];
    /* 0x0000 */ struct _RTL_STACK_DATABASE_LOCK Lock;
  }; /* size: 0x0038 */
  /* 0x0038 */ void* Reserved2;
  /* 0x003c */ unsigned long PeakHashCollisionListLength;
  /* 0x0040 */ void* LowerMemoryStart;
  /* 0x0044 */ unsigned char PreCommitted;
  /* 0x0045 */ unsigned char DumpInProgress;
  /* 0x0048 */ void* CommitBase;
  /* 0x004c */ void* CurrentLowerCommitLimit;
  /* 0x0050 */ void* CurrentUpperCommitLimit;
  /* 0x0054 */ char* NextFreeLowerMemory;
  /* 0x0058 */ char* NextFreeUpperMemory;
  /* 0x005c */ unsigned long NumberOfEntriesLookedUp;
  /* 0x0060 */ unsigned long NumberOfEntriesAdded;
  /* 0x0064 */ struct _RTL_STACK_TRACE_ENTRY** EntryIndexArray;
  /* 0x0068 */ unsigned long NumberOfEntriesAllocated;
  /* 0x006c */ unsigned long NumberOfEntriesAvailable;
  /* 0x0070 */ unsigned long NumberOfAllocationFailures;
  /* 0x0078 */ union _SLIST_HEADER FreeLists[32];
  /* 0x0178 */ unsigned long NumberOfBuckets;
  /* 0x017c */ struct _RTL_STD_LIST_HEAD Buckets[1];
  /* 0x0184 */ long __PADDING__[1];
} STACK_TRACE_DATABASE, *PSTACK_TRACE_DATABASE; /* size: 0x0188 */

