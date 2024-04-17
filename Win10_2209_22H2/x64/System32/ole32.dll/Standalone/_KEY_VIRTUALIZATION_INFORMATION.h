typedef struct _KEY_VIRTUALIZATION_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long VirtualizationCandidate : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long VirtualizationEnabled : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long VirtualTarget : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long VirtualStore : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long VirtualSource : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Reserved : 27; /* bit position: 5 */
  }; /* bitfield */
} KEY_VIRTUALIZATION_INFORMATION, *PKEY_VIRTUALIZATION_INFORMATION; /* size: 0x0004 */

