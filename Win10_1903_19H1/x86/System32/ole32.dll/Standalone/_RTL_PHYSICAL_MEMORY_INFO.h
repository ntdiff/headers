enum RTL_PHYSICAL_MEMORY_POLICY
{
  RtlPhysicalMemoryPolicyLow = 10,
  RtlPhysicalMemoryPolicyNormal = 20,
};

typedef struct _RTL_PHYSICAL_MEMORY_INFO
{
  /* 0x0000 */ enum RTL_PHYSICAL_MEMORY_POLICY Policy;
} RTL_PHYSICAL_MEMORY_INFO, *PRTL_PHYSICAL_MEMORY_INFO; /* size: 0x0004 */

