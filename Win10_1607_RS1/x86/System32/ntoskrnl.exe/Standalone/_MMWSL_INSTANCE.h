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

