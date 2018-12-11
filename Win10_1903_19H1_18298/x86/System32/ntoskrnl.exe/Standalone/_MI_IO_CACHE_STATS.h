typedef struct _MI_IO_CACHE_STATS
{
  /* 0x0000 */ unsigned long UnusedBlocks;
  /* 0x0004 */ unsigned long ActiveCacheMatch;
  /* 0x0008 */ unsigned long ActiveCacheOverride;
  /* 0x000c */ unsigned long UnmappedCacheFlush;
  /* 0x0010 */ unsigned long UnmappedCacheMatch;
  /* 0x0014 */ unsigned long UnmappedCacheConflict;
  /* 0x0018 */ unsigned long PermanentIoAttributeConflict;
  /* 0x001c */ unsigned long PermanentIoNodeConflict;
} MI_IO_CACHE_STATS, *PMI_IO_CACHE_STATS; /* size: 0x0020 */

