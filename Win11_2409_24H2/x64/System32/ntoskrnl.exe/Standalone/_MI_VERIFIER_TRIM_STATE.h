typedef struct _MI_VERIFIER_TRIM_STATE
{
  /* 0x0000 */ unsigned __int64 StartTime;
  /* 0x0008 */ unsigned __int64 ActualTrimTime;
  /* 0x0010 */ unsigned __int64 MaximumSingleTrimTimeReached;
  /* 0x0018 */ unsigned long Instances;
  /* 0x001c */ volatile long TrimInProgress;
} MI_VERIFIER_TRIM_STATE, *PMI_VERIFIER_TRIM_STATE; /* size: 0x0020 */

