typedef enum _KPROCESS_PPM_POLICY
{
  ProcessPpmDefault = 0,
  ProcessPpmThrottle = 1,
  ProcessPpmNoThrottle = 2,
  MaxProcessPpmPolicy = 3,
} KPROCESS_PPM_POLICY, *PKPROCESS_PPM_POLICY;

