typedef struct _PROCESS_COMMIT_RELEASE_INFORMATION
{
  /* 0x0000 */ unsigned long Version;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long Eligible : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned long Spare : 31; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0008 */ unsigned __int64 CommitDebt;
} PROCESS_COMMIT_RELEASE_INFORMATION, *PPROCESS_COMMIT_RELEASE_INFORMATION; /* size: 0x0010 */

