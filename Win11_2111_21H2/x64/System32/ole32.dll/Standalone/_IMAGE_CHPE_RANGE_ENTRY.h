typedef struct _IMAGE_CHPE_RANGE_ENTRY
{
  union
  {
    /* 0x0000 */ unsigned long StartOffset;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long NativeCode : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AddressBits : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Length;
} IMAGE_CHPE_RANGE_ENTRY, *PIMAGE_CHPE_RANGE_ENTRY; /* size: 0x0008 */

