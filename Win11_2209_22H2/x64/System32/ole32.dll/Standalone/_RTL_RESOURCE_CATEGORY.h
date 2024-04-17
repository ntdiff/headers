typedef enum _RTL_RESOURCE_CATEGORY
{
  RtlResTypePhysicalMemoryTier = 0,
  RtlResTypeDiskSpaceTier = 1,
  RtlResTypeDiskSpeedTier = 2,
  RtlResTypeDiskWriteConstraintTier = 3,
  RtlResTypeMax = 4,
} RTL_RESOURCE_CATEGORY, *PRTL_RESOURCE_CATEGORY;

