typedef struct _HEAP_USERDATA_OFFSETS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short FirstAllocationOffset;
      /* 0x0002 */ unsigned short BlockStride;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long StrideAndOffset;
  }; /* size: 0x0004 */
} HEAP_USERDATA_OFFSETS, *PHEAP_USERDATA_OFFSETS; /* size: 0x0004 */

