typedef enum _MI_ASSIGNED_REGION_TYPES
{
  AssignedRegionNonPagedPool = 0,
  AssignedRegionPagedPool = 1,
  AssignedRegionSystemCache = 2,
  AssignedRegionSystemPtes = 3,
  AssignedRegionUltraZero = 4,
  AssignedRegionPfnDatabase = 5,
  AssignedRegionCfg = 6,
  AssignedRegionHyperSpace = 7,
  AssignedRegionKernelStacks = 8,
  AssignedRegionPageTables = 9,
  AssignedRegionSpecialPoolPaged = 10,
  AssignedRegionSpecialPoolNonPaged = 11,
  AssignedRegionSession = 12,
  AssignedRegionSystemImages = 13,
  AssignedRegionMaximum = 14,
} MI_ASSIGNED_REGION_TYPES, *PMI_ASSIGNED_REGION_TYPES;

