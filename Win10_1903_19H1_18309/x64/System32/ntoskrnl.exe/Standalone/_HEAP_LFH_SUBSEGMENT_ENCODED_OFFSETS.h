typedef struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short BlockSize;
      /* 0x0002 */ unsigned short FirstBlockOffset;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long EncodedData;
  }; /* size: 0x0004 */
} HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS, *PHEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS; /* size: 0x0004 */

