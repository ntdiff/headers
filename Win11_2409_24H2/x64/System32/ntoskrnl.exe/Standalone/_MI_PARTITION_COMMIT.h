typedef struct _MI_PARTITION_COMMIT
{
  /* 0x0000 */ volatile unsigned __int64 PeakCommitment;
  /* 0x0008 */ volatile unsigned __int64 TotalCommitLimitMaximum;
  /* 0x0010 */ volatile unsigned long Popups[2];
  /* 0x0018 */ volatile unsigned __int64 LowCommitThreshold;
  /* 0x0020 */ volatile unsigned __int64 HighCommitThreshold;
  /* 0x0028 */ volatile unsigned __int64 ExtremelyHighCommitThreshold;
  /* 0x0030 */ unsigned __int64 IdealCommitTarget;
  /* 0x0038 */ volatile long Lock;
  /* 0x0040 */ unsigned __int64 SystemCommitReserve;
  /* 0x0048 */ unsigned __int64 OverCommit;
} MI_PARTITION_COMMIT, *PMI_PARTITION_COMMIT; /* size: 0x0050 */

