typedef struct _HEAP_SUMMARY
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0008 */ unsigned __int64 cbAllocated;
  /* 0x0010 */ unsigned __int64 cbCommitted;
  /* 0x0018 */ unsigned __int64 cbReserved;
  /* 0x0020 */ unsigned __int64 cbMaxReserve;
} HEAP_SUMMARY, *PHEAP_SUMMARY; /* size: 0x0028 */

