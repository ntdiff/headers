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
  AssignedRegionNonCachedMappings = 10,
  AssignedRegionSoftWsles = 11,
  AssignedRegionPageTables = 12,
  AssignedRegionNotUsed = 13,
  AssignedRegionSecureNonPagedPool = 14,
  AssignedRegionKernelShadowStacks = 15,
  AssignedRegionSystemDataViews = 16,
  AssignedRegionSystemImages = 17,
  AssignedRegionMaximum = 18,
} MI_ASSIGNED_REGION_TYPES, *PMI_ASSIGNED_REGION_TYPES;

