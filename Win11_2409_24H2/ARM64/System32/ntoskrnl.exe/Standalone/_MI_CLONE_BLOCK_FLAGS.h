typedef struct _MI_CLONE_BLOCK_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 CloneProtection : 5; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ReducedCommitReferences : 55; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 ScpPage : 1; /* bit position: 60 */
      /* 0x0000 */ unsigned __int64 Spare : 2; /* bit position: 61 */
      /* 0x0000 */ unsigned __int64 LockBit : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ __int64 EntireField;
  }; /* size: 0x0008 */
} MI_CLONE_BLOCK_FLAGS, *PMI_CLONE_BLOCK_FLAGS; /* size: 0x0008 */

