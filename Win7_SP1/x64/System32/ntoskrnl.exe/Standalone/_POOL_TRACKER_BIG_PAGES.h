typedef struct _POOL_TRACKER_BIG_PAGES
{
  /* 0x0000 */ void* Va;
  /* 0x0008 */ unsigned long Key;
  /* 0x000c */ unsigned long PoolType;
  /* 0x0010 */ unsigned __int64 NumberOfBytes;
} POOL_TRACKER_BIG_PAGES, *PPOOL_TRACKER_BIG_PAGES; /* size: 0x0018 */

