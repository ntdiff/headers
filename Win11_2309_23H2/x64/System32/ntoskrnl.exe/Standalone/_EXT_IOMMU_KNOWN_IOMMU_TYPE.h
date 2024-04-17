typedef enum _EXT_IOMMU_KNOWN_IOMMU_TYPE
{
  ExtIommuInvalid = 0,
  ExtIommuAmd = 1,
  ExtIommuIntel = 2,
  ExtIommuSmmuv1 = 3,
  ExtIommuSmmuv2 = 4,
  ExtIommuSmmuv3 = 5,
  ExtIommuIts = 6,
  ExtIommuUnknown = 4096,
} EXT_IOMMU_KNOWN_IOMMU_TYPE, *PEXT_IOMMU_KNOWN_IOMMU_TYPE;

