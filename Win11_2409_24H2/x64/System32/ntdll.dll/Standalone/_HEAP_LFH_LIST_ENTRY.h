typedef struct _HEAP_LFH_LIST_ENTRY
{
  union
  {
    /* 0x0000 */ unsigned short Next;
    /* 0x0000 */ unsigned __int64 Preserve;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned long Check;
  /* 0x000c */ long __PADDING__[1];
} HEAP_LFH_LIST_ENTRY, *PHEAP_LFH_LIST_ENTRY; /* size: 0x0010 */

