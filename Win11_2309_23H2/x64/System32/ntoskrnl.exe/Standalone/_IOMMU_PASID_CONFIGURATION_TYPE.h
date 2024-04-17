typedef enum _IOMMU_PASID_CONFIGURATION_TYPE
{
  PasidConfigTypeDefaultPasidOnly = 0,
  PasidConfigTypePasidTaggedDma = 1,
  PasidConfigTypeMax = 2,
} IOMMU_PASID_CONFIGURATION_TYPE, *PIOMMU_PASID_CONFIGURATION_TYPE;

