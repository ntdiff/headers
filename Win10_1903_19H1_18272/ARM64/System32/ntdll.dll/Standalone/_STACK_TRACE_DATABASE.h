typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _RTL_STACK_DATABASE_LOCK
{
  /* 0x0000 */ struct _RTL_SRWLOCK Lock;
} RTL_STACK_DATABASE_LOCK, *PRTL_STACK_DATABASE_LOCK; /* size: 0x0008 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _RTL_STD_LIST_HEAD
{
  /* 0x0000 */ struct _RTL_STD_LIST_ENTRY* Next;
  /* 0x0008 */ struct _RTL_STACK_DATABASE_LOCK Lock;
} RTL_STD_LIST_HEAD, *PRTL_STD_LIST_HEAD; /* size: 0x0010 */

typedef struct _STACK_TRACE_DATABASE
{
  union
  {
    /* 0x0000 */ char Reserved[104];
    /* 0x0000 */ struct _RTL_STACK_DATABASE_LOCK Lock;
  }; /* size: 0x0068 */
  /* 0x0068 */ void* Reserved2;
  /* 0x0070 */ unsigned __int64 PeakHashCollisionListLength;
  /* 0x0078 */ void* LowerMemoryStart;
  /* 0x0080 */ unsigned char PreCommitted;
  /* 0x0081 */ unsigned char DumpInProgress;
  /* 0x0088 */ void* CommitBase;
  /* 0x0090 */ void* CurrentLowerCommitLimit;
  /* 0x0098 */ void* CurrentUpperCommitLimit;
  /* 0x00a0 */ char* NextFreeLowerMemory;
  /* 0x00a8 */ char* NextFreeUpperMemory;
  /* 0x00b0 */ unsigned long NumberOfEntriesLookedUp;
  /* 0x00b4 */ unsigned long NumberOfEntriesAdded;
  /* 0x00b8 */ struct _RTL_STACK_TRACE_ENTRY** EntryIndexArray;
  /* 0x00c0 */ unsigned long NumberOfEntriesAllocated;
  /* 0x00c4 */ unsigned long NumberOfEntriesAvailable;
  /* 0x00c8 */ unsigned long NumberOfAllocationFailures;
  /* 0x00d0 */ union _SLIST_HEADER FreeLists[32];
  /* 0x02d0 */ unsigned long NumberOfBuckets;
  /* 0x02d8 */ struct _RTL_STD_LIST_HEAD Buckets[1];
  /* 0x02e8 */ long __PADDING__[2];
} STACK_TRACE_DATABASE, *PSTACK_TRACE_DATABASE; /* size: 0x02f0 */

