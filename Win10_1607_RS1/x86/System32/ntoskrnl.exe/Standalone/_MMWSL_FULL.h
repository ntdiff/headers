typedef struct _MI_ACTIVE_WSLE_LISTHEAD
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
} MI_ACTIVE_WSLE_LISTHEAD, *PMI_ACTIVE_WSLE_LISTHEAD; /* size: 0x0008 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ unsigned long NextSlot;
  /* 0x0004 */ unsigned long NextAgingSlot;
  /* 0x0008 */ unsigned long NextAccessClearingSlot;
  /* 0x000c */ unsigned long LastAccessClearingRemainder;
  /* 0x0010 */ unsigned long LastAgingRemainder;
  /* 0x0014 */ unsigned long ActiveWsleCounts[16];
  /* 0x0054 */ struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x00d4 */

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

typedef struct _MMWSL_FULL
{
  /* 0x0000 */ struct _MMWSL_INSTANCE Instance;
  /* 0x00e0 */ struct _MMWSL_SHARED Shared;
} MMWSL_FULL, *PMMWSL_FULL; /* size: 0x0120 */

