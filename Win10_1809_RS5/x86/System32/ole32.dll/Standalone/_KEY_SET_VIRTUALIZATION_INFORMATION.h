typedef struct _KEY_SET_VIRTUALIZATION_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long VirtualTarget : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long VirtualStore : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long VirtualSource : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
  }; /* bitfield */
} KEY_SET_VIRTUALIZATION_INFORMATION, *PKEY_SET_VIRTUALIZATION_INFORMATION; /* size: 0x0004 */

