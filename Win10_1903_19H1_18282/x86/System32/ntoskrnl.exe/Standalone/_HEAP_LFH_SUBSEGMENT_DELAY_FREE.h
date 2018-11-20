typedef union _HEAP_LFH_SUBSEGMENT_DELAY_FREE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DelayFree : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Count : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ void* AllBits;
  }; /* size: 0x0004 */
} HEAP_LFH_SUBSEGMENT_DELAY_FREE, *PHEAP_LFH_SUBSEGMENT_DELAY_FREE; /* size: 0x0004 */

