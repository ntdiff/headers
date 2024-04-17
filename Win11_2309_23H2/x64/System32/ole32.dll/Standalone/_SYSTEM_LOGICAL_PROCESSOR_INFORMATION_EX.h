typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP
{
  RelationProcessorCore = 0,
  RelationNumaNode = 1,
  RelationCache = 2,
  RelationProcessorPackage = 3,
  RelationGroup = 4,
  RelationProcessorDie = 5,
  RelationNumaNodeEx = 6,
  RelationProcessorModule = 7,
  RelationAll = 0xffffffff,
} LOGICAL_PROCESSOR_RELATIONSHIP, *PLOGICAL_PROCESSOR_RELATIONSHIP;

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _PROCESSOR_RELATIONSHIP
{
  /* 0x0000 */ unsigned char Flags;
  /* 0x0001 */ unsigned char EfficiencyClass;
  /* 0x0002 */ unsigned char Reserved[20];
  /* 0x0016 */ unsigned short GroupCount;
  /* 0x0018 */ struct _GROUP_AFFINITY GroupMask[1];
} PROCESSOR_RELATIONSHIP, *PPROCESSOR_RELATIONSHIP; /* size: 0x0028 */

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

typedef enum _PROCESSOR_CACHE_TYPE
{
  CacheUnified = 0,
  CacheInstruction = 1,
  CacheData = 2,
  CacheTrace = 3,
} PROCESSOR_CACHE_TYPE, *PPROCESSOR_CACHE_TYPE;

typedef struct _CACHE_RELATIONSHIP
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char Associativity;
  /* 0x0002 */ unsigned short LineSize;
  /* 0x0004 */ unsigned long CacheSize;
  /* 0x0008 */ enum _PROCESSOR_CACHE_TYPE Type;
  /* 0x000c */ unsigned char Reserved[18];
  /* 0x001e */ unsigned short GroupCount;
  union
  {
    /* 0x0020 */ struct _GROUP_AFFINITY GroupMask;
    /* 0x0020 */ struct _GROUP_AFFINITY GroupMasks[1];
  }; /* size: 0x0010 */
} CACHE_RELATIONSHIP, *PCACHE_RELATIONSHIP; /* size: 0x0030 */

typedef struct _PROCESSOR_GROUP_INFO
{
  /* 0x0000 */ unsigned char MaximumProcessorCount;
  /* 0x0001 */ unsigned char ActiveProcessorCount;
  /* 0x0002 */ unsigned char Reserved[38];
  /* 0x0028 */ unsigned __int64 ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO; /* size: 0x0030 */

typedef struct _GROUP_RELATIONSHIP
{
  /* 0x0000 */ unsigned short MaximumGroupCount;
  /* 0x0002 */ unsigned short ActiveGroupCount;
  /* 0x0004 */ unsigned char Reserved[20];
  /* 0x0018 */ struct _PROCESSOR_GROUP_INFO GroupInfo[1];
} GROUP_RELATIONSHIP, *PGROUP_RELATIONSHIP; /* size: 0x0048 */

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX
{
  /* 0x0000 */ enum _LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
  /* 0x0004 */ unsigned long Size;
  union
  {
    /* 0x0008 */ struct _PROCESSOR_RELATIONSHIP Processor;
    /* 0x0008 */ struct _NUMA_NODE_RELATIONSHIP NumaNode;
    /* 0x0008 */ struct _CACHE_RELATIONSHIP Cache;
    /* 0x0008 */ struct _GROUP_RELATIONSHIP Group;
  }; /* size: 0x0048 */
} SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX; /* size: 0x0050 */

