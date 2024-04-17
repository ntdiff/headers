typedef struct _POOL_TRACKER_BIG_PAGES
{
  /* 0x0000 */ volatile unsigned __int64 Va;
  /* 0x0008 */ unsigned long Key;
  struct /* bitfield */
  {
    /* 0x000c */ unsigned long Pattern : 8; /* bit position: 0 */
    /* 0x000c */ unsigned long PoolType : 12; /* bit position: 8 */
    /* 0x000c */ unsigned long SlushSize : 12; /* bit position: 20 */
  }; /* bitfield */
  /* 0x0010 */ unsigned __int64 NumberOfBytes;
} POOL_TRACKER_BIG_PAGES, *PPOOL_TRACKER_BIG_PAGES; /* size: 0x0018 */

