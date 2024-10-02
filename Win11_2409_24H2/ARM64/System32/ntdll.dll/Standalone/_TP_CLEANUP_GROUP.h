typedef struct _TPP_REFCOUNT
{
  /* 0x0000 */ volatile long Refcount;
} TPP_REFCOUNT, *PTPP_REFCOUNT; /* size: 0x0004 */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _TPP_FLAGS_COUNT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Count : 60; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Flags : 4; /* bit position: 60 */
    }; /* bitfield */
    /* 0x0000 */ __int64 Data;
  }; /* size: 0x0008 */
} TPP_FLAGS_COUNT, *PTPP_FLAGS_COUNT; /* size: 0x0008 */

typedef struct _TPP_ITE
{
  /* 0x0000 */ struct _TPP_ITE_WAITER* First;
} TPP_ITE, *PTPP_ITE; /* size: 0x0008 */

typedef struct _TPP_BARRIER
{
  /* 0x0000 */ volatile union _TPP_FLAGS_COUNT Ptr;
  /* 0x0008 */ struct _RTL_SRWLOCK WaitLock;
  /* 0x0010 */ struct _TPP_ITE WaitList;
} TPP_BARRIER, *PTPP_BARRIER; /* size: 0x0018 */

typedef struct _TP_CLEANUP_GROUP
{
  /* 0x0000 */ struct _TPP_REFCOUNT Refcount;
  /* 0x0004 */ long Released;
  /* 0x0008 */ struct _RTL_SRWLOCK MemberLock;
  /* 0x0010 */ struct _LIST_ENTRY MemberList;
  /* 0x0020 */ struct _TPP_BARRIER Barrier;
  /* 0x0038 */ struct _RTL_SRWLOCK CleanupLock;
  /* 0x0040 */ struct _LIST_ENTRY CleanupList;
} TP_CLEANUP_GROUP, *PTP_CLEANUP_GROUP; /* size: 0x0050 */

