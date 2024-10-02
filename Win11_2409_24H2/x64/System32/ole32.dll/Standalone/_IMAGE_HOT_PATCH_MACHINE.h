typedef struct _IMAGE_HOT_PATCH_MACHINE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long _x86 : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Amd64 : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Arm64 : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long Amd64EC : 1; /* bit position: 3 */
  }; /* bitfield */
} IMAGE_HOT_PATCH_MACHINE, *PIMAGE_HOT_PATCH_MACHINE; /* size: 0x0004 */

