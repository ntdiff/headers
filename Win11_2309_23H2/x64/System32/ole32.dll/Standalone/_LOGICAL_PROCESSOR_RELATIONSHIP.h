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

