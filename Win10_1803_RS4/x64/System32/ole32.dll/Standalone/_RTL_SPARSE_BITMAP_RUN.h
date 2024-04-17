typedef struct _RTL_SPARSE_BITMAP_RUN
{
  /* 0x0000 */ unsigned long StartingIndexLow;
  /* 0x0004 */ unsigned long StartingIndexHigh;
  /* 0x0008 */ unsigned long Length;
  /* 0x0010 */ void* Metadata;
} RTL_SPARSE_BITMAP_RUN, *PRTL_SPARSE_BITMAP_RUN; /* size: 0x0018 */

