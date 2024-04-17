typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP
{
  RelationProcessorCore = 0,
  RelationNumaNode = 1,
  RelationCache = 2,
  RelationProcessorPackage = 3,
  RelationGroup = 4,
  RelationAll = 0xffffffff,
} LOGICAL_PROCESSOR_RELATIONSHIP, *PLOGICAL_PROCESSOR_RELATIONSHIP;

