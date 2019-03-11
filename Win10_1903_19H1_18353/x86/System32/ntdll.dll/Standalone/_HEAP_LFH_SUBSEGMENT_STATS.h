typedef struct _HEAP_LFH_SUBSEGMENT_STAT
{
  /* 0x0000 */ unsigned char Index;
  /* 0x0001 */ unsigned char Count;
} HEAP_LFH_SUBSEGMENT_STAT, *PHEAP_LFH_SUBSEGMENT_STAT; /* size: 0x0002 */

typedef union _HEAP_LFH_SUBSEGMENT_STATS
{
  union
  {
    /* 0x0000 */ struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[2];
    /* 0x0000 */ void* AllStats;
  }; /* size: 0x0004 */
} HEAP_LFH_SUBSEGMENT_STATS, *PHEAP_LFH_SUBSEGMENT_STATS; /* size: 0x0004 */

