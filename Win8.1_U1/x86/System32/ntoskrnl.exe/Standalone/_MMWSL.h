typedef struct _MI_ACTIVE_WSLE_LISTHEAD
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
} MI_ACTIVE_WSLE_LISTHEAD, *PMI_ACTIVE_WSLE_LISTHEAD; /* size: 0x0008 */

typedef struct _MI_CFG_BITMAP_INFO
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0004 */ unsigned long RegionSize;
  /* 0x0008 */ void* VadBaseAddress;
  /* 0x000c */ struct _MMVAD* BitmapVad;
} MI_CFG_BITMAP_INFO, *PMI_CFG_BITMAP_INFO; /* size: 0x0010 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_USER_VA_INFO
{
  /* 0x0000 */ unsigned long NumberOfCommittedPageTables;
  /* 0x0004 */ unsigned long PhysicalMappingCount;
  /* 0x0008 */ unsigned long VadBitMapHint;
  /* 0x000c */ unsigned long LastAllocationSizeHint;
  /* 0x0010 */ unsigned long LastAllocationSize;
  /* 0x0014 */ unsigned long LowestBottomUpVadBit;
  /* 0x0018 */ unsigned long VadBitMapSize;
  /* 0x001c */ unsigned long VadBitMapCommitment;
  /* 0x0020 */ unsigned long MaximumLastVadBit;
  /* 0x0024 */ long VadsBeingDeleted;
  /* 0x0028 */ struct _KEVENT* LastVadDeletionEvent;
  /* 0x002c */ unsigned long* VadBitBuffer;
  /* 0x0030 */ void* LowestBottomUpAllocationAddress;
  /* 0x0034 */ void* HighestTopDownAllocationAddress;
  /* 0x0038 */ void* FreeTebHint;
  /* 0x003c */ unsigned char NumaAware;
  /* 0x0040 */ unsigned long PrivateFixupVadCount;
  /* 0x0044 */ struct _MI_CFG_BITMAP_INFO CfgBitMap[1];
  /* 0x0054 */ unsigned long CommittedPageTableBufferForTopLevel[48];
  /* 0x0114 */ struct _RTL_BITMAP CommittedPageTableBitmaps[1];
  /* 0x011c */ unsigned short UsedPageTableEntries[1536];
} MI_USER_VA_INFO, *PMI_USER_VA_INFO; /* size: 0x0d1c */

typedef struct _MMWSL
{
  /* 0x0000 */ unsigned long FirstFree;
  /* 0x0004 */ unsigned long FirstDynamic;
  /* 0x0008 */ unsigned long LastEntry;
  /* 0x000c */ unsigned long NextSlot;
  /* 0x0010 */ unsigned long LastInitializedWsle;
  /* 0x0014 */ unsigned long NextAgingSlot;
  /* 0x0018 */ unsigned long NextAccessClearingSlot;
  /* 0x001c */ unsigned long LastAccessClearingRemainder;
  /* 0x0020 */ unsigned long LastAgingRemainder;
  /* 0x0024 */ unsigned long WsleSize;
  /* 0x0028 */ unsigned long NonDirectCount;
  /* 0x002c */ void* LowestPagableAddress;
  /* 0x0030 */ struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;
  /* 0x0034 */ struct _MMWSLE_HASH* HashTableStart;
  /* 0x0038 */ struct _MMWSLE_HASH* HighestPermittedHashAddress;
  /* 0x003c */ unsigned long ActiveWsleCounts[16];
  /* 0x007c */ struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];
  /* 0x00fc */ struct _MMWSLE* Wsle;
  /* 0x0100 */ struct _MI_USER_VA_INFO UserVaInfo;
} MMWSL, *PMMWSL; /* size: 0x0e1c */

