typedef struct _HEAP_ENTRY_EXTRA
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short AllocatorBackTraceIndex;
      /* 0x0002 */ unsigned short TagIndex;
      /* 0x0004 */ unsigned long Settable;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 ZeroInit;
  }; /* size: 0x0008 */
} HEAP_ENTRY_EXTRA, *PHEAP_ENTRY_EXTRA; /* size: 0x0008 */

