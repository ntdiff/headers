typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _NUMA_NODE_RELATIONSHIP
{
  /* 0x0000 */ unsigned long NodeNumber;
  /* 0x0004 */ unsigned char Reserved[18];
  /* 0x0016 */ unsigned short GroupCount;
  union
  {
    /* 0x0018 */ struct _GROUP_AFFINITY GroupMask;
    /* 0x0018 */ struct _GROUP_AFFINITY GroupMasks[1];
  }; /* size: 0x0010 */
} NUMA_NODE_RELATIONSHIP, *PNUMA_NODE_RELATIONSHIP; /* size: 0x0028 */

