typedef struct _HEAP_DESCRIPTOR_KEY
{
  union
  {
    /* 0x0000 */ unsigned long Key;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Ignore : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long EncodedCommittedPageCount : 16; /* bit position: 8 */
      /* 0x0000 */ unsigned long UnitCount : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} HEAP_DESCRIPTOR_KEY, *PHEAP_DESCRIPTOR_KEY; /* size: 0x0004 */

