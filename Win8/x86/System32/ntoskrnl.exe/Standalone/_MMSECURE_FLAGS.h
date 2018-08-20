typedef struct _MMSECURE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long ReadOnly : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long NoWrite : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long SecNoChange : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long Spare : 9; /* bit position: 3 */
  }; /* bitfield */
} MMSECURE_FLAGS, *PMMSECURE_FLAGS; /* size: 0x0004 */

