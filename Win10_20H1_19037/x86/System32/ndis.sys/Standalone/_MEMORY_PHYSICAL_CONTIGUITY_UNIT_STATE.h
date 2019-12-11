typedef enum _MEMORY_PHYSICAL_CONTIGUITY_UNIT_STATE
{
  MemoryNotContiguous = 0,
  MemoryAlignedAndContiguous = 1,
  MemoryNotResident = 2,
  MemoryNotEligibleToMakeContiguous = 3,
  MemoryContiguityStateMax = 4,
} MEMORY_PHYSICAL_CONTIGUITY_UNIT_STATE, *PMEMORY_PHYSICAL_CONTIGUITY_UNIT_STATE;

