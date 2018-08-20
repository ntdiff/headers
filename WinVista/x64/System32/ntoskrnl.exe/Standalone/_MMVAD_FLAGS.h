typedef struct _MMVAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 CommitCharge : 51; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 NoChange : 1; /* bit position: 51 */
    /* 0x0000 */ unsigned __int64 VadType : 3; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 MemCommit : 1; /* bit position: 55 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 56 */
    /* 0x0000 */ unsigned __int64 Spare : 2; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 PrivateMemory : 1; /* bit position: 63 */
  }; /* bitfield */
} MMVAD_FLAGS, *PMMVAD_FLAGS; /* size: 0x0008 */

