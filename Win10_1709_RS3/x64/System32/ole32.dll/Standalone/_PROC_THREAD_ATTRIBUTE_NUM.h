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
  ProcThreadAttributeChildProcessPolicy = 14,
  ProcThreadAttributeAllApplicationPackagesPolicy = 15,
  ProcThreadAttributeWin32kFilter = 16,
  ProcThreadAttributeSafeOpenPromptOriginClaim = 17,
  ProcThreadAttributeDesktopAppPolicy = 18,
} PROC_THREAD_ATTRIBUTE_NUM, *PPROC_THREAD_ATTRIBUTE_NUM;

