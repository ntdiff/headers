typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _VF_TARGET_VERIFIED_DRIVER_DATA
{
  /* 0x0000 */ struct _VF_SUSPECT_DRIVER_ENTRY* SuspectDriverEntry;
  /* 0x0004 */ void* WMICallback;
  /* 0x0008 */ struct _LIST_ENTRY EtwHandlesListHead;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0010 */ unsigned long MissedEtwRegistration : 1; /* bit position: 0 */
          /* 0x0010 */ unsigned long IsBootDriver : 1; /* bit position: 1 */
          /* 0x0010 */ unsigned long Spare : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
      /* 0x0010 */ unsigned long Whole;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0014 */ unsigned long Signature;
  /* 0x0018 */ unsigned char SeSigningLevel;
  /* 0x0020 */ union _SLIST_HEADER PoolPageHeaders;
  /* 0x0028 */ union _SLIST_HEADER PoolTrackers;
  /* 0x0030 */ volatile unsigned long CurrentPagedPoolAllocations;
  /* 0x0034 */ volatile unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0038 */ unsigned long PeakPagedPoolAllocations;
  /* 0x003c */ unsigned long PeakNonPagedPoolAllocations;
  /* 0x0040 */ volatile unsigned long PagedBytes;
  /* 0x0044 */ volatile unsigned long NonPagedBytes;
  /* 0x0048 */ unsigned long PeakPagedBytes;
  /* 0x004c */ unsigned long PeakNonPagedBytes;
  /* 0x0050 */ unsigned long RaiseIrqls;
  /* 0x0054 */ unsigned long AcquireSpinLocks;
  /* 0x0058 */ unsigned long SynchronizeExecutions;
  /* 0x005c */ unsigned long AllocationsWithNoTag;
  /* 0x0060 */ unsigned long AllocationsFailed;
  /* 0x0064 */ unsigned long AllocationsFailedDeliberately;
  /* 0x0068 */ unsigned long LockedBytes;
  /* 0x006c */ unsigned long PeakLockedBytes;
  /* 0x0070 */ unsigned long MappedLockedBytes;
  /* 0x0074 */ unsigned long PeakMappedLockedBytes;
  /* 0x0078 */ unsigned long MappedIoSpaceBytes;
  /* 0x007c */ unsigned long PeakMappedIoSpaceBytes;
  /* 0x0080 */ unsigned long PagesForMdlBytes;
  /* 0x0084 */ unsigned long PeakPagesForMdlBytes;
  /* 0x0088 */ unsigned long ContiguousMemoryBytes;
  /* 0x008c */ unsigned long PeakContiguousMemoryBytes;
  /* 0x0090 */ struct _LIST_ENTRY ContiguousMemoryListHead;
  /* 0x0098 */ volatile unsigned long ExecutePoolTypes;
  /* 0x009c */ volatile unsigned long ExecutePageProtections;
  /* 0x00a0 */ volatile unsigned long ExecutePageMappings;
  /* 0x00a4 */ volatile unsigned long ExecuteWriteSections;
  /* 0x00a8 */ volatile unsigned long SectionAlignmentFailures;
  /* 0x00ac */ volatile unsigned long IATInExecutableSection;
} VF_TARGET_VERIFIED_DRIVER_DATA, *PVF_TARGET_VERIFIED_DRIVER_DATA; /* size: 0x00b0 */

