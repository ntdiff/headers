typedef struct _HEAP_LFH_BLOCK_SLIST
{
  /* 0x0000 */ unsigned short Next;
} HEAP_LFH_BLOCK_SLIST, *PHEAP_LFH_BLOCK_SLIST; /* size: 0x0002 */

typedef union _HEAP_LFH_BLOCK_LIST
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Next;
      /* 0x0002 */ unsigned short Count;
    }; /* size: 0x0004 */
    /* 0x0000 */ struct _HEAP_LFH_BLOCK_SLIST SList;
    /* 0x0000 */ unsigned long ListFields;
  }; /* size: 0x0004 */
} HEAP_LFH_BLOCK_LIST, *PHEAP_LFH_BLOCK_LIST; /* size: 0x0004 */

