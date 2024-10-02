typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _CPU_PARTITION_SET_INFORMATION_MOVE_CPUS
{
  /* 0x0000 */ void* SourcePartition;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned short GroupCount;
  /* 0x0010 */ struct _GROUP_AFFINITY GroupAffinities[1];
} CPU_PARTITION_SET_INFORMATION_MOVE_CPUS, *PCPU_PARTITION_SET_INFORMATION_MOVE_CPUS; /* size: 0x0020 */

