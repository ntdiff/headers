typedef enum _MI_ASSIGNED_REGION_TYPES
{
  AssignedRegionPfnDatabase = 0,
  AssignedRegionNonPagedPool = 1,
  AssignedRegionPagedPool = 2,
  AssignedRegionSystemCache = 3,
  AssignedRegionSystemPtes = 4,
  AssignedRegionKasan = 5,
  AssignedRegionUltraZero = 6,
  AssignedRegionCfg = 7,
  AssignedRegionHyperSpace = 8,
  AssignedRegionKernelStacks = 9,
  AssignedRegionPageTables = 10,
  AssignedRegionSession = 11,
  AssignedRegionSecureNonPagedPool = 12,
  AssignedRegionKernelShadowStacks = 13,
  AssignedRegionSystemImages = 14,
  AssignedRegionMaximum = 15,
} MI_ASSIGNED_REGION_TYPES, *PMI_ASSIGNED_REGION_TYPES;

