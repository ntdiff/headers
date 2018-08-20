typedef struct _MI_ACTIVE_WSLE_LISTHEAD
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
} MI_ACTIVE_WSLE_LISTHEAD, *PMI_ACTIVE_WSLE_LISTHEAD; /* size: 0x0010 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ unsigned __int64 NextSlot;
  /* 0x0008 */ unsigned __int64 NextAgingSlot;
  /* 0x0010 */ unsigned __int64 NextAccessClearingSlot;
  /* 0x0018 */ unsigned long LastAccessClearingRemainder;
  /* 0x001c */ unsigned long LastAgingRemainder;
  /* 0x0020 */ unsigned __int64 ActiveWsleCounts[16];
  /* 0x00a0 */ struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x01a0 */

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

typedef struct _MMWSL_FULL
{
  /* 0x0000 */ struct _MMWSL_INSTANCE Instance;
  /* 0x01a0 */ struct _MMWSL_SHARED Shared;
} MMWSL_FULL, *PMMWSL_FULL; /* size: 0x0200 */

