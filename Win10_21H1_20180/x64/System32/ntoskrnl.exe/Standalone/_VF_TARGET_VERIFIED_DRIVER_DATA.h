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
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
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
          /* 0x0020 */ unsigned long IsBootDriver : 1; /* bit position: 1 */
          /* 0x0020 */ unsigned long Spare : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
      /* 0x0020 */ unsigned long Whole;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0028 */ unsigned __int64 Signature;
  /* 0x0030 */ unsigned char SeSigningLevel;
  /* 0x0040 */ union _SLIST_HEADER PoolPageHeaders;
  /* 0x0050 */ union _SLIST_HEADER PoolTrackers;
  /* 0x0060 */ struct _LIST_ENTRY DifPluginPerDriverDataContextHead;
  /* 0x0070 */ volatile unsigned long CurrentPagedPoolAllocations;
  /* 0x0074 */ volatile unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0078 */ unsigned long PeakPagedPoolAllocations;
  /* 0x007c */ unsigned long PeakNonPagedPoolAllocations;
  /* 0x0080 */ volatile unsigned __int64 PagedBytes;
  /* 0x0088 */ volatile unsigned __int64 NonPagedBytes;
  /* 0x0090 */ unsigned __int64 PeakPagedBytes;
  /* 0x0098 */ unsigned __int64 PeakNonPagedBytes;
  /* 0x00a0 */ unsigned long RaiseIrqls;
  /* 0x00a4 */ unsigned long AcquireSpinLocks;
  /* 0x00a8 */ unsigned long SynchronizeExecutions;
  /* 0x00ac */ unsigned long AllocationsWithNoTag;
  /* 0x00b0 */ unsigned long AllocationsFailed;
  /* 0x00b4 */ unsigned long AllocationsFailedDeliberately;
  /* 0x00b8 */ unsigned __int64 LockedBytes;
  /* 0x00c0 */ unsigned __int64 PeakLockedBytes;
  /* 0x00c8 */ unsigned __int64 MappedLockedBytes;
  /* 0x00d0 */ unsigned __int64 PeakMappedLockedBytes;
  /* 0x00d8 */ unsigned __int64 MappedIoSpaceBytes;
  /* 0x00e0 */ unsigned __int64 PeakMappedIoSpaceBytes;
  /* 0x00e8 */ unsigned __int64 PagesForMdlBytes;
  /* 0x00f0 */ unsigned __int64 PeakPagesForMdlBytes;
  /* 0x00f8 */ unsigned __int64 ContiguousMemoryBytes;
  /* 0x0100 */ unsigned __int64 PeakContiguousMemoryBytes;
  /* 0x0108 */ struct _LIST_ENTRY ContiguousMemoryListHead;
  /* 0x0118 */ volatile unsigned long ExecutePoolTypes;
  /* 0x011c */ volatile unsigned long ExecutePageProtections;
  /* 0x0120 */ volatile unsigned long ExecutePageMappings;
  /* 0x0124 */ volatile unsigned long ExecuteWriteSections;
  /* 0x0128 */ volatile unsigned long SectionAlignmentFailures;
  /* 0x012c */ volatile unsigned long IATInExecutableSection;
} VF_TARGET_VERIFIED_DRIVER_DATA, *PVF_TARGET_VERIFIED_DRIVER_DATA; /* size: 0x0130 */

