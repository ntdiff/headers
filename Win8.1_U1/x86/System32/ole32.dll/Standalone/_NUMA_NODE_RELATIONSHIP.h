typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _NUMA_NODE_RELATIONSHIP
{
  /* 0x0000 */ unsigned long NodeNumber;
  /* 0x0004 */ unsigned char Reserved[20];
  /* 0x0018 */ struct _GROUP_AFFINITY GroupMask;
} NUMA_NODE_RELATIONSHIP, *PNUMA_NODE_RELATIONSHIP; /* size: 0x0024 */

