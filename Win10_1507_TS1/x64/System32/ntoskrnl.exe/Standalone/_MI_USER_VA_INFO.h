typedef struct _MI_CFG_BITMAP_INFO
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ unsigned __int64 RegionSize;
  /* 0x0010 */ struct _MMVAD* BitmapVad;
} MI_CFG_BITMAP_INFO, *PMI_CFG_BITMAP_INFO; /* size: 0x0018 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_USER_VA_INFO
{
  /* 0x0000 */ unsigned long NumberOfCommittedPageTables;
  /* 0x0004 */ unsigned long VadBitMapHint;
  /* 0x0008 */ unsigned long LastAllocationSizeHint;
  /* 0x000c */ unsigned long LastAllocationSize;
  /* 0x0010 */ unsigned long LowestBottomUpVadBit;
  /* 0x0014 */ unsigned long VadBitMapSize;
  /* 0x0018 */ unsigned long VadBitMapCommitment;
  /* 0x001c */ unsigned long MaximumLastVadBit;
  /* 0x0020 */ long VadsBeingDeleted;
  /* 0x0028 */ unsigned __int64 PhysicalMappingCount;
  /* 0x0030 */ struct _KEVENT* LastVadDeletionEvent;
  /* 0x0038 */ unsigned long* VadBitBuffer;
  /* 0x0040 */ void* LowestBottomUpAllocationAddress;
  /* 0x0048 */ void* HighestTopDownAllocationAddress;
  /* 0x0050 */ void* FreeTebHint;
  /* 0x0058 */ unsigned char NumaAware;
  /* 0x0060 */ unsigned __int64 CloneNestingLevel;
  /* 0x0068 */ unsigned __int64 PrivateFixupVadCount;
  /* 0x0070 */ struct _MI_CFG_BITMAP_INFO CfgBitMap[2];
  /* 0x00a0 */ unsigned long CommittedPageTableBufferForTopLevel[8];
  /* 0x00c0 */ struct _RTL_BITMAP CommittedPageTableBitmaps[3];
  /* 0x00f0 */ unsigned long PageTableBitmapPages[3];
  /* 0x0100 */ void* FreeUmsTebHint;
} MI_USER_VA_INFO, *PMI_USER_VA_INFO; /* size: 0x0108 */

