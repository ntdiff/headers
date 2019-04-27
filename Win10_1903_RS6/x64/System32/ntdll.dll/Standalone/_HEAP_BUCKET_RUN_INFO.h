typedef union _HEAP_BUCKET_RUN_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Bucket;
      /* 0x0004 */ unsigned long RunLength;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 Aggregate64;
  }; /* size: 0x0008 */
} HEAP_BUCKET_RUN_INFO, *PHEAP_BUCKET_RUN_INFO; /* size: 0x0008 */

