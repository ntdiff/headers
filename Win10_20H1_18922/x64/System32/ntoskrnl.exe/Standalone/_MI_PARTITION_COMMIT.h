typedef struct _MI_PARTITION_COMMIT
{
  /* 0x0000 */ unsigned __int64 PeakCommitment;
  /* 0x0008 */ unsigned __int64 TotalCommitLimitMaximum;
  /* 0x0010 */ volatile long Popups[2];
  /* 0x0018 */ unsigned __int64 LowCommitThreshold;
  /* 0x0020 */ unsigned __int64 HighCommitThreshold;
  /* 0x0028 */ unsigned __int64 EventLock;
  /* 0x0030 */ unsigned __int64 SystemCommitReserve;
  /* 0x0038 */ unsigned __int64 OverCommit;
} MI_PARTITION_COMMIT, *PMI_PARTITION_COMMIT; /* size: 0x0040 */

