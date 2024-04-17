typedef struct _KEY_SET_LAYER_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long IsTombstone : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long IsSupersedeLocal : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long IsSupersedeTree : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long ClassIsInherited : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
  }; /* bitfield */
} KEY_SET_LAYER_INFORMATION, *PKEY_SET_LAYER_INFORMATION; /* size: 0x0004 */

