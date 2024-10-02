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

typedef union _HEAP_LFH_SUBSEGMENT_STATE
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short DelayFreeList;
      /* 0x0002 */ unsigned short DelayFreeCount;
      /* 0x0004 */ unsigned short Owner;
      /* 0x0006 */ unsigned char Location;
    }; /* size: 0x0007 */
    struct
    {
      /* 0x0000 */ long DelayFreeFields;
      /* 0x0004 */ long OwnerLocation;
    }; /* size: 0x0008 */
    /* 0x0000 */ union _HEAP_LFH_BLOCK_LIST FreeList;
    /* 0x0000 */ void* AllBits;
  }; /* size: 0x0008 */
} HEAP_LFH_SUBSEGMENT_STATE, *PHEAP_LFH_SUBSEGMENT_STATE; /* size: 0x0008 */

