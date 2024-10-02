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

typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

typedef struct _SYSTEM_SINGLE_PROCESSOR_RELATIONSHIP_INFORMATION_REQUEST
{
  /* 0x0000 */ enum _LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
  /* 0x0004 */ struct _PROCESSOR_NUMBER ProcessorNumber;
} SYSTEM_SINGLE_PROCESSOR_RELATIONSHIP_INFORMATION_REQUEST, *PSYSTEM_SINGLE_PROCESSOR_RELATIONSHIP_INFORMATION_REQUEST; /* size: 0x0008 */

