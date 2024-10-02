typedef struct _IMAGE_EC_RANGE_ENTRY
{
  union
  {
    /* 0x0000 */ unsigned long StartOffset;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Type : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long AddressBits : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Length;
} IMAGE_EC_RANGE_ENTRY, *PIMAGE_EC_RANGE_ENTRY; /* size: 0x0008 */

