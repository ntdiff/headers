typedef struct _MI_USER_VA_INFO
{
  /* 0x0000 */ unsigned long NumberOfCommittedPageTables;
  /* 0x0004 */ unsigned long PhysicalMappingCount;
  /* 0x0008 */ unsigned long VadBitMapHint;
  /* 0x000c */ unsigned long LastAllocationSizeHint;
  /* 0x0010 */ unsigned long LastAllocationSize;
  /* 0x0014 */ unsigned long LowestBottomUpVadBit;
  /* 0x0018 */ unsigned long VadBitMapSize;
  /* 0x001c */ unsigned long MaximumLastVadBit;
  /* 0x0020 */ long VadsBeingDeleted;
  /* 0x0028 */ struct _KEVENT* LastVadDeletionEvent;
  /* 0x0030 */ unsigned long* VadBitBuffer;
  /* 0x0038 */ void* LowestBottomUpAllocationAddress;
  /* 0x0040 */ void* HighestTopDownAllocationAddress;
  /* 0x0048 */ void* FreeTebHint;
  /* 0x0050 */ unsigned __int64 PrivateFixupVadCount;
  /* 0x0058 */ void* FreeUmsTebHint;
  /* 0x0060 */ unsigned long* CommittedPageTables;
  /* 0x0068 */ unsigned long PageTableBitmapPages;
  /* 0x0070 */ unsigned __int64 CommittedPageDirectories[128];
  /* 0x0470 */ unsigned __int64 CommittedPageDirectoryParents[1];
} MI_USER_VA_INFO, *PMI_USER_VA_INFO; /* size: 0x0478 */

