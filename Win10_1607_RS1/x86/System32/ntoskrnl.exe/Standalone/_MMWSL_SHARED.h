typedef struct _MMWSL_SHARED
{
  /* 0x0000 */ unsigned long FirstFree;
  /* 0x0004 */ unsigned long FirstDynamic;
  /* 0x0008 */ unsigned long LastEntry;
  /* 0x000c */ unsigned long LastInitializedWsle;
  /* 0x0010 */ unsigned long WsleSize;
  /* 0x0014 */ unsigned long NonDirectCount;
  /* 0x0018 */ void* LowestPagableAddress;
  /* 0x001c */ struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;
  /* 0x0020 */ struct _MMWSLE_HASH* HashTableStart;
  /* 0x0024 */ struct _MMWSLE_HASH* HighestPermittedHashAddress;
  /* 0x0030 */ struct _MMWSLE* Wsle;
  /* 0x0034 */ long __PADDING__[3];
} MMWSL_SHARED, *PMMWSL_SHARED; /* size: 0x0040 */

