typedef struct _IMAGE_DVRT_ARM64X_DELTA_FIXUP_RECORD
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short Offset : 12; /* bit position: 0 */
    /* 0x0000 */ unsigned short Type : 2; /* bit position: 12 */
    /* 0x0000 */ unsigned short Sign : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned short Scale : 1; /* bit position: 15 */
  }; /* bitfield */
} IMAGE_DVRT_ARM64X_DELTA_FIXUP_RECORD, *PIMAGE_DVRT_ARM64X_DELTA_FIXUP_RECORD; /* size: 0x0002 */

