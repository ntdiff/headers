typedef struct _PPM_PERF_SNAPSHOT
{
  /* 0x0000 */ unsigned long Initiator;
  /* 0x0004 */ unsigned char LogType;
  /* 0x0005 */ unsigned char Reset;
  /* 0x0006 */ unsigned char Remote;
  /* 0x0008 */ unsigned __int64 InterruptTime;
  /* 0x0010 */ unsigned __int64 RawUnscaledTime;
  /* 0x0018 */ unsigned __int64 TotalUnscaleTime;
  /* 0x0020 */ unsigned long CachedScalingFactor[2];
  /* 0x0028 */ unsigned __int64 RawReferenceCount[2];
  /* 0x0038 */ unsigned __int64 RawActualCount[2];
  /* 0x0048 */ unsigned __int64 RawScaledTime[2];
  /* 0x0058 */ unsigned __int64 TotalScaleTime[2];
  /* 0x0068 */ unsigned __int64 HvCurrentTime;
  /* 0x0070 */ unsigned __int64 IdleAccumulation;
  /* 0x0078 */ unsigned long Value[2];
} PPM_PERF_SNAPSHOT, *PPPM_PERF_SNAPSHOT; /* size: 0x0080 */

