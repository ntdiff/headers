typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Reserved : 3; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _VF_TARGET_VERIFIED_DRIVER_DATA
{
  /* 0x0000 */ struct _VF_SUSPECT_DRIVER_ENTRY* SuspectDriverEntry;
  /* 0x0008 */ void* WMICallback;
  /* 0x0010 */ struct _LIST_ENTRY EtwHandlesListHead;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0020 */ unsigned long MissedEtwRegistration : 1; /* bit position: 0 */
          /* 0x0020 */ unsigned long Spare : 31; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
      /* 0x0020 */ unsigned long Whole;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0028 */ unsigned __int64 Signature;
  /* 0x0030 */ union _SLIST_HEADER PoolPageHeaders;
  /* 0x0040 */ union _SLIST_HEADER PoolTrackers;
  /* 0x0050 */ volatile unsigned long CurrentPagedPoolAllocations;
  /* 0x0054 */ volatile unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0058 */ unsigned long PeakPagedPoolAllocations;
  /* 0x005c */ unsigned long PeakNonPagedPoolAllocations;
  /* 0x0060 */ volatile unsigned __int64 PagedBytes;
  /* 0x0068 */ volatile unsigned __int64 NonPagedBytes;
  /* 0x0070 */ unsigned __int64 PeakPagedBytes;
  /* 0x0078 */ unsigned __int64 PeakNonPagedBytes;
  /* 0x0080 */ unsigned long RaiseIrqls;
  /* 0x0084 */ unsigned long AcquireSpinLocks;
  /* 0x0088 */ unsigned long SynchronizeExecutions;
  /* 0x008c */ unsigned long AllocationsWithNoTag;
  /* 0x0090 */ unsigned long AllocationsFailed;
  /* 0x0094 */ unsigned long AllocationsFailedDeliberately;
  /* 0x0098 */ unsigned __int64 LockedBytes;
  /* 0x00a0 */ unsigned __int64 PeakLockedBytes;
  /* 0x00a8 */ unsigned __int64 MappedLockedBytes;
  /* 0x00b0 */ unsigned __int64 PeakMappedLockedBytes;
  /* 0x00b8 */ unsigned __int64 MappedIoSpaceBytes;
  /* 0x00c0 */ unsigned __int64 PeakMappedIoSpaceBytes;
  /* 0x00c8 */ unsigned __int64 PagesForMdlBytes;
  /* 0x00d0 */ unsigned __int64 PeakPagesForMdlBytes;
  /* 0x00d8 */ unsigned __int64 ContiguousMemoryBytes;
  /* 0x00e0 */ unsigned __int64 PeakContiguousMemoryBytes;
  /* 0x00e8 */ struct _LIST_ENTRY ContiguousMemoryListHead;
  /* 0x00f8 */ long __PADDING__[2];
} VF_TARGET_VERIFIED_DRIVER_DATA, *PVF_TARGET_VERIFIED_DRIVER_DATA; /* size: 0x0100 */

