typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_VAD_ALLOCATION_CELL
{
  /* 0x0000 */ struct _RTL_BITMAP AllocationBitMap;
  /* 0x0008 */ unsigned long BitMapHint;
  /* 0x000c */ unsigned long LastAllocationSize;
  /* 0x0010 */ unsigned long LastAllocationSizeHint;
  /* 0x0014 */ unsigned long LowestBottomUpVadBit;
  /* 0x0018 */ void* LowestBottomUpAllocationAddress;
} MI_VAD_ALLOCATION_CELL, *PMI_VAD_ALLOCATION_CELL; /* size: 0x001c */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_CFG_BITMAP_INFO
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0004 */ unsigned long RegionSize;
  /* 0x0008 */ struct _MMVAD* BitmapVad;
} MI_CFG_BITMAP_INFO, *PMI_CFG_BITMAP_INFO; /* size: 0x000c */

typedef struct _MI_USER_VA_INFO
{
  /* 0x0000 */ unsigned long NumberOfCommittedPageTables;
  /* 0x0004 */ void* HighestTopDownAllocationAddress;
  /* 0x0008 */ struct _MI_VAD_ALLOCATION_CELL VadCell[2];
  /* 0x0040 */ unsigned long VadBitMapCommitment;
  /* 0x0044 */ unsigned long MaximumLastVadBit;
  /* 0x0048 */ long VadsBeingDeleted;
  /* 0x004c */ long NumberOfDebugEnclaves;
  /* 0x0050 */ unsigned long PhysicalMappingCount;
  /* 0x0054 */ struct _KEVENT* LastVadDeletionEvent;
  /* 0x0058 */ struct _LIST_ENTRY SubVadRanges[1];
  /* 0x0060 */ unsigned char NumaAware;
  /* 0x0068 */ unsigned __int64 CloneNestingLevel;
  /* 0x0070 */ unsigned long PrivateFixupVadCount;
  /* 0x0074 */ struct _MI_CFG_BITMAP_INFO CfgBitMap[1];
  /* 0x0080 */ unsigned long CommittedPageTableBufferForTopLevel[48];
  /* 0x0140 */ struct _RTL_BITMAP CommittedPageTableBitmaps[1];
  /* 0x0148 */ unsigned short UsedPageTableEntries[1536];
} MI_USER_VA_INFO, *PMI_USER_VA_INFO; /* size: 0x0d48 */

