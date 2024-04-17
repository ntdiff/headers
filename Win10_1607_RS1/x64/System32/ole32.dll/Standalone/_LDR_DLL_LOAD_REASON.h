typedef enum _LDR_DLL_LOAD_REASON
{
  LoadReasonStaticDependency = 0,
  LoadReasonStaticForwarderDependency = 1,
  LoadReasonDynamicForwarderDependency = 2,
  LoadReasonDelayloadDependency = 3,
  LoadReasonDynamicLoad = 4,
  LoadReasonAsImageLoad = 5,
  LoadReasonAsDataLoad = 6,
  LoadReasonUnknown = -1,
} LDR_DLL_LOAD_REASON, *PLDR_DLL_LOAD_REASON;

