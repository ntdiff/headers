typedef enum _PPM_PERF_QOS_DISABLE_REASON
{
  PpmPerfQosDisableInternal = 0,
  PpmPerfQosDisableNoProfile = 1,
  PpmPerfQosDisableNoPolicy = 2,
  PpmPerfQosDisableInsufficientPolicy = 3,
  PpmPerfQosDisableMaxOverride = 4,
  PpmPerfQosDisableLowLatency = 5,
  PpmPerfQosDisableSmtScheduler = 6,
  PpmPerfQosDisableNoHardwareSupport = 7,
  PpmPerfQosDisableGroupPolicy = 8,
  PpmPerfQosDisableMax = 9,
} PPM_PERF_QOS_DISABLE_REASON, *PPPM_PERF_QOS_DISABLE_REASON;

