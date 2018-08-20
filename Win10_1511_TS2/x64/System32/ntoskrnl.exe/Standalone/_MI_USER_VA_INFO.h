typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_VAD_ALLOCATION_CELL
{
  /* 0x0000 */ struct _RTL_BITMAP AllocationBitMap;
  /* 0x0010 */ unsigned long BitMapHint;
  /* 0x0014 */ unsigned long LastAllocationSize;
  /* 0x0018 */ unsigned long LastAllocationSizeHint;
  /* 0x001c */ unsigned long LowestBottomUpVadBit;
  /* 0x0020 */ void* LowestBottomUpAllocationAddress;
} MI_VAD_ALLOCATION_CELL, *PMI_VAD_ALLOCATION_CELL; /* size: 0x0028 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_CFG_BITMAP_INFO
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ unsigned __int64 RegionSize;
  /* 0x0010 */ struct _MMVAD* BitmapVad;
} MI_CFG_BITMAP_INFO, *PMI_CFG_BITMAP_INFO; /* size: 0x0018 */

typedef struct _MI_USER_VA_INFO
{
  /* 0x0000 */ unsigned long NumberOfCommittedPageTables;
  /* 0x0008 */ void* HighestTopDownAllocationAddress;
  /* 0x0010 */ struct _MI_VAD_ALLOCATION_CELL VadCell[2];
  /* 0x0060 */ unsigned long VadBitMapCommitment;
  /* 0x0064 */ unsigned long MaximumLastVadBit;
  /* 0x0068 */ long VadsBeingDeleted;
  /* 0x006c */ long NumberOfDebugEnclaves;
  /* 0x0070 */ unsigned __int64 PhysicalMappingCount;
  /* 0x0078 */ struct _KEVENT* LastVadDeletionEvent;
  /* 0x0080 */ struct _LIST_ENTRY SubVadRanges[3];
  /* 0x00b0 */ unsigned char NumaAware;
  /* 0x00b8 */ unsigned __int64 CloneNestingLevel;
  /* 0x00c0 */ unsigned __int64 PrivateFixupVadCount;
  /* 0x00c8 */ struct _MI_CFG_BITMAP_INFO CfgBitMap[2];
  /* 0x00f8 */ unsigned long CommittedPageTableBufferForTopLevel[8];
  /* 0x0118 */ struct _RTL_BITMAP CommittedPageTableBitmaps[3];
  /* 0x0148 */ unsigned long PageTableBitmapPages[3];
  /* 0x0154 */ long __PADDING__[1];
} MI_USER_VA_INFO, *PMI_USER_VA_INFO; /* size: 0x0158 */

