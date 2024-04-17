typedef enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE
{
  MapPhysicalAddressTypeMdl = 0,
  MapPhysicalAddressTypeContiguousRange = 1,
  MapPhysicalAddressTypePfn = 2,
  MapPhysicalAddressTypeMax = 3,
} IOMMU_MAP_PHYSICAL_ADDRESS_TYPE, *PIOMMU_MAP_PHYSICAL_ADDRESS_TYPE;

