typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _SYSTEM_NUMA_INFORMATION
{
  /* 0x0000 */ unsigned long HighestNodeNumber;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ struct _GROUP_AFFINITY ActiveProcessorsGroupAffinity[64];
    /* 0x0008 */ unsigned __int64 AvailableMemory[64];
    /* 0x0008 */ unsigned __int64 Pad[128];
  }; /* size: 0x0400 */
} SYSTEM_NUMA_INFORMATION, *PSYSTEM_NUMA_INFORMATION; /* size: 0x0408 */

