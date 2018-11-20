typedef struct _PROC_PERF_QOS_CLASS_POLICY
{
  /* 0x0000 */ unsigned long MaxPolicyPercent;
  /* 0x0004 */ unsigned long MaxEquivalentFrequencyPercent;
  /* 0x0008 */ unsigned long MinPolicyPercent;
  /* 0x000c */ unsigned long AutonomousActivityWindow;
  /* 0x0010 */ unsigned long EnergyPerfPreference;
  /* 0x0014 */ unsigned char ProvideGuidance;
  /* 0x0015 */ unsigned char AllowThrottling;
  /* 0x0016 */ unsigned char PerfBoostMode;
  /* 0x0017 */ unsigned char LatencyHintPerf;
  /* 0x0018 */ unsigned char TrackDesiredCrossClass;
  /* 0x0019 */ char __PADDING__[3];
} PROC_PERF_QOS_CLASS_POLICY, *PPROC_PERF_QOS_CLASS_POLICY; /* size: 0x001c */

