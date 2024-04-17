typedef struct _MI_CLONE_BLOCK_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 ReducedCommitCount : 55; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 CloneProtection : 5; /* bit position: 55 */
    /* 0x0000 */ unsigned __int64 OwningPartitionResidentCharged : 1; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 OwningPartitionCommitCharged : 1; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 OwningPartitionCommitFloating : 1; /* bit position: 62 */
    /* 0x0000 */ unsigned __int64 LockBit : 1; /* bit position: 63 */
  }; /* bitfield */
} MI_CLONE_BLOCK_FLAGS, *PMI_CLONE_BLOCK_FLAGS; /* size: 0x0008 */

