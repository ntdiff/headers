typedef enum _KPROCESS_PPM_POLICY
{
  ProcessPpmDefault = 0,
  ProcessPpmThrottle = 1,
  ProcessPpmSemiThrottle = 2,
  ProcessPpmNoThrottle = 3,
  ProcessPpmWindowMinimized = 4,
  ProcessPpmWindowOccluded = 5,
  ProcessPpmWindowVisible = 6,
  ProcessPpmWindowInFocus = 7,
  MaxProcessPpmPolicy = 8,
} KPROCESS_PPM_POLICY, *PKPROCESS_PPM_POLICY;

