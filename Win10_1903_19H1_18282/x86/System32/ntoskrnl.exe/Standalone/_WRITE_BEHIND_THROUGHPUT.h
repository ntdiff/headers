typedef struct _WRITE_BEHIND_THROUGHPUT
{
  /* 0x0000 */ unsigned long PagesYetToWrite;
  /* 0x0004 */ unsigned long Throughput;
} WRITE_BEHIND_THROUGHPUT, *PWRITE_BEHIND_THROUGHPUT; /* size: 0x0008 */

