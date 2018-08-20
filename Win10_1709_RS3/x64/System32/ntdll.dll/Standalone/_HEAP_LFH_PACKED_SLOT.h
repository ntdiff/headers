typedef union _HEAP_LFH_PACKED_SLOT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short Index : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned short Start : 8; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short Data;
  }; /* size: 0x0002 */
} HEAP_LFH_PACKED_SLOT, *PHEAP_LFH_PACKED_SLOT; /* size: 0x0002 */

