typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _SYSTEM_NUMA_INFORMATION
{
  /* 0x0000 */ unsigned long HighestNodeNumber;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ struct _GROUP_AFFINITY ActiveProcessorsGroupAffinity[16];
    /* 0x0008 */ unsigned __int64 AvailableMemory[16];
    /* 0x0008 */ unsigned __int64 Pad[32];
  }; /* size: 0x0100 */
} SYSTEM_NUMA_INFORMATION, *PSYSTEM_NUMA_INFORMATION; /* size: 0x0108 */

