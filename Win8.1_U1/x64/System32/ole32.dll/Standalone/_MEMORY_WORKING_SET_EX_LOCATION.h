typedef enum _MEMORY_WORKING_SET_EX_LOCATION
{
  MemoryLocationInvalid = 0,
  MemoryLocationResident = 1,
  MemoryLocationPagefile = 2,
  MemoryLocationReserved = 3,
} MEMORY_WORKING_SET_EX_LOCATION, *PMEMORY_WORKING_SET_EX_LOCATION;

