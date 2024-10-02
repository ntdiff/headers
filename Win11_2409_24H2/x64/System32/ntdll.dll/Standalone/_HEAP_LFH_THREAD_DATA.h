typedef union _HEAP_LFH_THREAD_DATA
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short SlotMapRef;
      /* 0x0002 */ unsigned short HeatMapRef;
      /* 0x0004 */ unsigned char CachedProcIndex;
      /* 0x0005 */ unsigned char ContentionRemapCount;
      /* 0x0006 */ unsigned short Spare;
    }; /* size: 0x0008 */
    /* 0x0000 */ void* AllBits;
  }; /* size: 0x0008 */
} HEAP_LFH_THREAD_DATA, *PHEAP_LFH_THREAD_DATA; /* size: 0x0008 */

