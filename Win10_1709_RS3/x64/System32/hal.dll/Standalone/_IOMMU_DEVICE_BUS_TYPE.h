typedef enum _IOMMU_DEVICE_BUS_TYPE
{
  IommuDeviceBusPci = 0,
  IommuDeviceBusAcpi = 1,
  IommuDeviceBusTest = 2,
  IommuDeviceBusMax = 3,
} IOMMU_DEVICE_BUS_TYPE, *PIOMMU_DEVICE_BUS_TYPE;

