typedef enum _MI_ASSIGNED_REGION_TYPES
{
  AssignedRegionPfnDatabase = 0,
  AssignedRegionNonPagedPool = 1,
  AssignedRegionPagedPool = 2,
  AssignedRegionSystemCache = 3,
  AssignedRegionSystemPtes = 4,
  AssignedRegionUltraZero = 5,
  AssignedRegionCfg = 6,
  AssignedRegionHyperSpace = 7,
  AssignedRegionKernelStacks = 8,
  AssignedRegionPageTables = 9,
  AssignedRegionSession = 10,
  AssignedRegionSecureNonPagedPool = 11,
  AssignedRegionSystemImages = 12,
  AssignedRegionMaximum = 13,
} MI_ASSIGNED_REGION_TYPES, *PMI_ASSIGNED_REGION_TYPES;

