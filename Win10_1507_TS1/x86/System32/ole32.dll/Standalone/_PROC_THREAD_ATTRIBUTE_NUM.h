typedef enum _PROC_THREAD_ATTRIBUTE_NUM
{
  ProcThreadAttributeParentProcess = 0,
  ProcThreadAttributeHandleList = 2,
  ProcThreadAttributeGroupAffinity = 3,
  ProcThreadAttributePreferredNode = 4,
  ProcThreadAttributeIdealProcessor = 5,
  ProcThreadAttributeUmsThread = 6,
  ProcThreadAttributeMitigationPolicy = 7,
  ProcThreadAttributeSecurityCapabilities = 9,
  ProcThreadAttributeProtectionLevel = 11,
  ProcThreadAttributeJobList = 13,
} PROC_THREAD_ATTRIBUTE_NUM, *PPROC_THREAD_ATTRIBUTE_NUM;

