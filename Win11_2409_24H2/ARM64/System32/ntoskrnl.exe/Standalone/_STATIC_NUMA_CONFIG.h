typedef struct _STATIC_NUMA_CONFIG
{
  /* 0x0000 */ unsigned long* ProcessorLocalId;
  /* 0x0008 */ unsigned long* ProcessorUid;
  /* 0x0010 */ unsigned long* ProcessorProximity;
  /* 0x0018 */ unsigned long* ProximityId;
  /* 0x0020 */ unsigned long* OrigProximityId;
  /* 0x0028 */ unsigned long* NodeCapacity;
  /* 0x0030 */ unsigned short* NodeDistance;
  /* 0x0038 */ unsigned long NodeCount;
  /* 0x003c */ unsigned long ProcessorCount;
  /* 0x0040 */ unsigned long AllocatedNodeCount;
  /* 0x0044 */ unsigned long AllocatedProcCount;
} STATIC_NUMA_CONFIG, *PSTATIC_NUMA_CONFIG; /* size: 0x0048 */

