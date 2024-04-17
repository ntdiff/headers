typedef struct _REASSIGN_BLOCKS
{
  /* 0x0000 */ unsigned short Reserved;
  /* 0x0002 */ unsigned short Count;
  /* 0x0004 */ unsigned long BlockNumber[1];
} REASSIGN_BLOCKS, *PREASSIGN_BLOCKS; /* size: 0x0008 */

