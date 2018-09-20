typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0004 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x000c */ char Balance;
  /* 0x000d */ unsigned char Reserved[3];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0010 */

typedef struct _DPH_HEAP_BLOCK
{
  union
  {
    /* 0x0000 */ struct _DPH_HEAP_BLOCK* pNextAlloc;
    /* 0x0000 */ struct _LIST_ENTRY AvailableEntry;
    /* 0x0000 */ struct _RTL_BALANCED_LINKS TableLinks;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned char* pUserAllocation;
  /* 0x0014 */ unsigned char* pVirtualBlock;
  /* 0x0018 */ unsigned long nVirtualBlockSize;
  /* 0x001c */ unsigned long nVirtualAccessSize;
  /* 0x0020 */ unsigned long nUserRequestedSize;
  /* 0x0024 */ unsigned long nUserActualSize;
  /* 0x0028 */ void* UserValue;
  /* 0x002c */ unsigned long UserFlags;
  /* 0x0030 */ struct _RTL_TRACE_BLOCK* StackTrace;
  /* 0x0034 */ struct _LIST_ENTRY AdjacencyEntry;
  /* 0x003c */ unsigned char* pVirtualRegion;
} DPH_HEAP_BLOCK, *PDPH_HEAP_BLOCK; /* size: 0x0040 */

