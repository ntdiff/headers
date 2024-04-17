typedef struct _SYSTEM_NUMA_INFORMATION
{
  /* 0x0000 */ unsigned long HighestNodeNumber;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 ActiveProcessorsAffinityMask[16];
    /* 0x0008 */ unsigned __int64 AvailableMemory[16];
  }; /* size: 0x0080 */
} SYSTEM_NUMA_INFORMATION, *PSYSTEM_NUMA_INFORMATION; /* size: 0x0088 */

