typedef union _HEAP_LFH_ONDEMAND_POINTER
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned short Invalid : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned short AllocationInProgress : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned short Spare0 : 14; /* bit position: 2 */
      }; /* bitfield */
      /* 0x0002 */ unsigned short UsageData;
    }; /* size: 0x0004 */
    /* 0x0000 */ void* AllBits;
  }; /* size: 0x0004 */
} HEAP_LFH_ONDEMAND_POINTER, *PHEAP_LFH_ONDEMAND_POINTER; /* size: 0x0004 */

