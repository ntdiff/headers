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

typedef struct _HEAP_LOCAL_DATA
{
  /* 0x0000 */ union _SLIST_HEADER DeletedSubSegments;
  /* 0x0008 */ struct _LFH_BLOCK_ZONE* volatile CrtZone;
  /* 0x000c */ struct _LFH_HEAP* LowFragHeap;
  /* 0x0010 */ unsigned long Sequence;
  /* 0x0014 */ unsigned long DeleteRateThreshold;
} HEAP_LOCAL_DATA, *PHEAP_LOCAL_DATA; /* size: 0x0018 */

