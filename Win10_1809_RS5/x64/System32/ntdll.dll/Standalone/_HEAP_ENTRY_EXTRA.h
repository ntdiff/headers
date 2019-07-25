typedef struct _HEAP_ENTRY_EXTRA
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short AllocatorBackTraceIndex;
      /* 0x0002 */ unsigned short TagIndex;
      /* 0x0008 */ unsigned __int64 Settable;
    }; /* size: 0x000c */
    struct
    {
      /* 0x0000 */ unsigned __int64 ZeroInit;
      /* 0x0008 */ unsigned __int64 ZeroInit1;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} HEAP_ENTRY_EXTRA, *PHEAP_ENTRY_EXTRA; /* size: 0x0010 */

