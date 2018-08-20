typedef enum _PS_RESOURCE_TYPE
{
  PsResourceNonPagedPool = 0,
  PsResourcePagedPool = 1,
  PsResourcePageFile = 2,
  PsResourceWorkingSet = 3,
  PsResourceCpuRate = 4,
  PsResourceMax = 5,
} PS_RESOURCE_TYPE, *PPS_RESOURCE_TYPE;

