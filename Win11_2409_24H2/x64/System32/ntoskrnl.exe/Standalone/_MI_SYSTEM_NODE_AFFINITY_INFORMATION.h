typedef struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION
{
  /* 0x0000 */ struct _GROUP_AFFINITY* GroupAffinity;
  /* 0x0008 */ unsigned long NumberOfDomains;
  /* 0x000c */ unsigned long GlobalDomainIndex;
  /* 0x0010 */ unsigned short GroupAffinityCount;
  /* 0x0012 */ unsigned short ProcessorCount[3];
  /* 0x0018 */ unsigned short UsableProcessorCount[3];
  /* 0x001e */ char __PADDING__[2];
} MI_SYSTEM_NODE_AFFINITY_INFORMATION, *PMI_SYSTEM_NODE_AFFINITY_INFORMATION; /* size: 0x0020 */

