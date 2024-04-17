typedef struct _SEGMENT_HEAP_EXTRA
{
  /* 0x0000 */ unsigned short AllocationTag;
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned char InterceptorIndex : 4; /* bit position: 0 */
    /* 0x0002 */ unsigned char UserFlags : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0003 */ unsigned char ExtraSizeInUnits;
  /* 0x0004 */ void* Settable;
} SEGMENT_HEAP_EXTRA, *PSEGMENT_HEAP_EXTRA; /* size: 0x0008 */

