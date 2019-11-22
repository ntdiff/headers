typedef enum _KHETERO_CPU_POLICY
{
  KHeteroCpuPolicyAll = 0,
  KHeteroCpuPolicyLarge = 1,
  KHeteroCpuPolicyLargeOrIdle = 2,
  KHeteroCpuPolicySmall = 3,
  KHeteroCpuPolicySmallOrIdle = 4,
  KHeteroCpuPolicyDynamic = 5,
  KHeteroCpuPolicyStaticMax = 5,
  KHeteroCpuPolicyBiasedSmall = 6,
  KHeteroCpuPolicyBiasedLarge = 7,
  KHeteroCpuPolicyDefault = 8,
  KHeteroCpuPolicyMax = 9,
} KHETERO_CPU_POLICY, *PKHETERO_CPU_POLICY;

