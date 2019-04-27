typedef struct _IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long PageRelativeOffset : 12; /* bit position: 0 */
    /* 0x0000 */ unsigned long IndirectCall : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned long IATIndex : 19; /* bit position: 13 */
  }; /* bitfield */
} IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION, *PIMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION; /* size: 0x0004 */

