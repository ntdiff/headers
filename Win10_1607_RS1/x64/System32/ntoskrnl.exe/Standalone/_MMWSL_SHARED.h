typedef struct _MMWSL_SHARED
{
  /* 0x0000 */ unsigned __int64 FirstFree;
  /* 0x0008 */ unsigned __int64 FirstDynamic;
  /* 0x0010 */ unsigned __int64 LastEntry;
  /* 0x0018 */ unsigned __int64 LastInitializedWsle;
  /* 0x0020 */ unsigned long WsleSize;
  /* 0x0028 */ unsigned __int64 NonDirectCount;
  /* 0x0030 */ void* LowestPagableAddress;
  /* 0x0038 */ struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;
  /* 0x0040 */ struct _MMWSLE_HASH* HashTableStart;
  /* 0x0048 */ struct _MMWSLE_HASH* HighestPermittedHashAddress;
  /* 0x0050 */ struct _MMWSLE* Wsle;
  /* 0x0058 */ long __PADDING__[2];
} MMWSL_SHARED, *PMMWSL_SHARED; /* size: 0x0060 */

