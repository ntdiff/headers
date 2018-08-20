typedef struct _MMVAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long CommitCharge : 19; /* bit position: 0 */
    /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned long VadType : 3; /* bit position: 20 */
    /* 0x0000 */ unsigned long MemCommit : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 24 */
    /* 0x0000 */ unsigned long Spare : 2; /* bit position: 29 */
    /* 0x0000 */ unsigned long PrivateMemory : 1; /* bit position: 31 */
  }; /* bitfield */
} MMVAD_FLAGS, *PMMVAD_FLAGS; /* size: 0x0004 */

