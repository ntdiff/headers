typedef enum _PROC_THREAD_ATTRIBUTE_NUM
{
  ProcThreadAttributeParentProcess = 0,
  ProcThreadAttributeExtendedFlags = 1,
  ProcThreadAttributeHandleList = 2,
  ProcThreadAttributeGroupAffinity = 3,
  ProcThreadAttributePreferredNode = 4,
  ProcThreadAttributeIdealProcessor = 5,
  ProcThreadAttributeUmsThread = 6,
  ProcThreadAttributeMitigationPolicy = 7,
  ProcThreadAttributeMax = 8,
} PROC_THREAD_ATTRIBUTE_NUM, *PPROC_THREAD_ATTRIBUTE_NUM;

