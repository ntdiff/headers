typedef struct _HV_IMPLEMENTATION_LIMITS
{
  /* 0x0000 */ unsigned int MaxVirtualProcessorCount;
  /* 0x0004 */ unsigned int MaxLogicalProcessorCount;
  /* 0x0008 */ unsigned int MaxInterruptMappingCount;
  /* 0x000c */ unsigned int ReservedEdx;
} HV_IMPLEMENTATION_LIMITS, *PHV_IMPLEMENTATION_LIMITS; /* size: 0x0010 */

