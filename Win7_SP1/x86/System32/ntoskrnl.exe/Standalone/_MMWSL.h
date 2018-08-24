typedef struct _MMWSL
{
  /* 0x0000 */ unsigned long FirstFree;
  /* 0x0004 */ unsigned long FirstDynamic;
  /* 0x0008 */ unsigned long LastEntry;
  /* 0x000c */ unsigned long NextSlot;
  /* 0x0010 */ struct _MMWSLE* Wsle;
  /* 0x0014 */ void* LowestPagableAddress;
  /* 0x0018 */ unsigned long LastInitializedWsle;
  /* 0x001c */ unsigned long NextAgingSlot;
  /* 0x0020 */ unsigned long NumberOfCommittedPageTables;
  /* 0x0024 */ unsigned long VadBitMapHint;
  /* 0x0028 */ unsigned long NonDirectCount;
  /* 0x002c */ unsigned long LastVadBit;
  /* 0x0030 */ unsigned long MaximumLastVadBit;
  /* 0x0034 */ unsigned long LastAllocationSizeHint;
  /* 0x0038 */ unsigned long LastAllocationSize;
  /* 0x003c */ struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;
  /* 0x0040 */ struct _MMWSLE_HASH* HashTableStart;
  /* 0x0044 */ struct _MMWSLE_HASH* HighestPermittedHashAddress;
  /* 0x0048 */ unsigned short UsedPageTableEntries[768];
  /* 0x0648 */ unsigned long CommittedPageTables[24];
} MMWSL, *PMMWSL; /* size: 0x06a8 */

