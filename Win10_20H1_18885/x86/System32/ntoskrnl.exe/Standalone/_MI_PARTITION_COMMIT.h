typedef struct _MI_PARTITION_COMMIT
{
  /* 0x0000 */ unsigned long PeakCommitment;
  /* 0x0004 */ unsigned long TotalCommitLimitMaximum;
  /* 0x0008 */ volatile long Popups[2];
  /* 0x0010 */ unsigned long LowCommitThreshold;
  /* 0x0014 */ unsigned long HighCommitThreshold;
  /* 0x0018 */ unsigned long EventLock;
  /* 0x001c */ unsigned long SystemCommitReserve;
  /* 0x0040 */ volatile unsigned long OverCommit;
  /* 0x0044 */ long __PADDING__[15];
} MI_PARTITION_COMMIT, *PMI_PARTITION_COMMIT; /* size: 0x0080 */

