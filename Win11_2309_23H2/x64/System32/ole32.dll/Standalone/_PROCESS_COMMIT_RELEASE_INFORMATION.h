typedef struct _PROCESS_COMMIT_RELEASE_INFORMATION
{
  /* 0x0000 */ unsigned long Version;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long Eligible : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned long ReleaseRepurposedMemResetCommit : 1; /* bit position: 1 */
    /* 0x0004 */ unsigned long ForceReleaseMemResetCommit : 1; /* bit position: 2 */
    /* 0x0004 */ unsigned long Spare : 29; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0008 */ unsigned __int64 CommitDebt;
  /* 0x0010 */ unsigned __int64 CommittedMemResetSize;
  /* 0x0018 */ unsigned __int64 RepurposedMemResetSize;
} PROCESS_COMMIT_RELEASE_INFORMATION, *PPROCESS_COMMIT_RELEASE_INFORMATION; /* size: 0x0020 */

