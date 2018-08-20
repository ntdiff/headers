typedef struct _MI_ACTIVE_WSLE
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
} MI_ACTIVE_WSLE, *PMI_ACTIVE_WSLE; /* size: 0x0008 */

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
  /* 0x003c */ unsigned long ActiveWsleCounts[8];
  /* 0x005c */ struct _MI_ACTIVE_WSLE ActiveWsles[8];
  /* 0x009c */ struct _MMWSLE* Wsle;
  /* 0x00a0 */ struct _MI_USER_VA_INFO UserVaInfo;
} MMWSL, *PMMWSL; /* size: 0x0d9c */

