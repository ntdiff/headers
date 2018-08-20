typedef struct _MMPTE_FLUSH_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long MaximumCount;
  /* 0x0008 */ void* FlushVa[20];
} MMPTE_FLUSH_LIST, *PMMPTE_FLUSH_LIST; /* size: 0x00a8 */

