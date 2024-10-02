typedef struct _IMAGE_IMPORT_CONTROL_TRANSFER_ARM64_RELOCATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long PageRelativeOffset : 10; /* bit position: 0 */
    /* 0x0000 */ unsigned long IndirectCall : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long RegisterIndex : 5; /* bit position: 11 */
    /* 0x0000 */ unsigned long ImportType : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long IATIndex : 15; /* bit position: 17 */
  }; /* bitfield */
} IMAGE_IMPORT_CONTROL_TRANSFER_ARM64_RELOCATION, *PIMAGE_IMPORT_CONTROL_TRANSFER_ARM64_RELOCATION; /* size: 0x0004 */

