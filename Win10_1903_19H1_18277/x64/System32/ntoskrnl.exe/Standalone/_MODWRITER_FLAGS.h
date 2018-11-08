typedef struct _MODWRITER_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long KeepForever : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Networked : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long IoPriority : 3; /* bit position: 2 */
    /* 0x0000 */ unsigned long ModifiedStoreWrite : 1; /* bit position: 5 */
  }; /* bitfield */
} MODWRITER_FLAGS, *PMODWRITER_FLAGS; /* size: 0x0004 */

