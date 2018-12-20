typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x0018 */ char Balance;
  /* 0x0019 */ unsigned char Reserved[3];
  /* 0x001c */ long __PADDING__[1];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0020 */

typedef struct _DPH_HEAP_BLOCK
{
  union
  {
    /* 0x0000 */ struct _DPH_HEAP_BLOCK* pNextAlloc;
    /* 0x0000 */ struct _LIST_ENTRY AvailableEntry;
    /* 0x0000 */ struct _RTL_BALANCED_LINKS TableLinks;
  }; /* size: 0x0020 */
  /* 0x0020 */ unsigned char* pUserAllocation;
  /* 0x0028 */ unsigned char* pVirtualBlock;
  /* 0x0030 */ unsigned __int64 nVirtualBlockSize;
  /* 0x0038 */ unsigned __int64 nVirtualAccessSize;
  /* 0x0040 */ unsigned __int64 nUserRequestedSize;
  /* 0x0048 */ unsigned __int64 nUserActualSize;
  /* 0x0050 */ void* UserValue;
  /* 0x0058 */ unsigned long UserFlags;
  /* 0x0060 */ struct _RTL_TRACE_BLOCK* StackTrace;
  /* 0x0068 */ struct _LIST_ENTRY AdjacencyEntry;
  /* 0x0078 */ unsigned char* pVirtualRegion;
} DPH_HEAP_BLOCK, *PDPH_HEAP_BLOCK; /* size: 0x0080 */

