typedef struct _HV_MINROOT_NUMA_LPS
{
  /* 0x0000 */ unsigned long NodeIndex;
  /* 0x0008 */ unsigned __int64 Mask[16];
} HV_MINROOT_NUMA_LPS, *PHV_MINROOT_NUMA_LPS; /* size: 0x0088 */

typedef struct _SYSTEM_HYPERVISOR_MINROOT_INFORMATION
{
  /* 0x0000 */ unsigned long NumProc;
  /* 0x0004 */ unsigned long RootProc;
  /* 0x0008 */ unsigned long RootProcNumaNodesSpecified;
  /* 0x000c */ unsigned short RootProcNumaNodes[64];
  /* 0x008c */ unsigned long RootProcPerCore;
  /* 0x0090 */ unsigned long RootProcPerNode;
  /* 0x0094 */ unsigned long RootProcNumaNodesLpsSpecified;
  /* 0x0098 */ struct _HV_MINROOT_NUMA_LPS RootProcNumaNodeLps[64];
} SYSTEM_HYPERVISOR_MINROOT_INFORMATION, *PSYSTEM_HYPERVISOR_MINROOT_INFORMATION; /* size: 0x2298 */

