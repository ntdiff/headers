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
  /* 0x0024 */ struct _KEVENT* LastVadDeletionEvent;
  /* 0x0028 */ unsigned long* VadBitBuffer;
  /* 0x002c */ void* LowestBottomUpAllocationAddress;
  /* 0x0030 */ void* HighestTopDownAllocationAddress;
  /* 0x0034 */ void* FreeTebHint;
  /* 0x0038 */ unsigned long PrivateFixupVadCount;
  /* 0x003c */ unsigned short UsedPageTableEntries[1536];
  /* 0x0c3c */ unsigned long CommittedPageTables[48];
} MI_USER_VA_INFO, *PMI_USER_VA_INFO; /* size: 0x0cfc */

