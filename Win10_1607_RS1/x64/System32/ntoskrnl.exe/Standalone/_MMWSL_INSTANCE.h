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

