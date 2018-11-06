typedef struct _POOL_TRACKER_BIG_PAGES
{
  /* 0x0000 */ volatile unsigned long Va;
  /* 0x0004 */ unsigned long Key;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long Pattern : 8; /* bit position: 0 */
    /* 0x0008 */ unsigned long PoolType : 12; /* bit position: 8 */
    /* 0x0008 */ unsigned long SlushSize : 12; /* bit position: 20 */
  }; /* bitfield */
  /* 0x000c */ unsigned long NumberOfBytes;
} POOL_TRACKER_BIG_PAGES, *PPOOL_TRACKER_BIG_PAGES; /* size: 0x0010 */

