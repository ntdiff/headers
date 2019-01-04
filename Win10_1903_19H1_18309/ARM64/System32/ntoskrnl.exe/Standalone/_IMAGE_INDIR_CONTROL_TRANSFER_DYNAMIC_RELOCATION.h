typedef struct _IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short PageRelativeOffset : 12; /* bit position: 0 */
    /* 0x0000 */ unsigned short IndirectCall : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned short RexWPrefix : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned short CfgCheck : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned short Reserved : 1; /* bit position: 15 */
  }; /* bitfield */
} IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION, *PIMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION; /* size: 0x0002 */

