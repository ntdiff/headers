typedef enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE
{
  IommuDeviceCreationConfigTypeNone = 0,
  IommuDeviceCreationConfigTypeAcpi = 1,
  IommuDeviceCreationConfigTypeDeviceId = 2,
  IommuDeviceCreationConfigTypePasid = 3,
  IommuDeviceCreationConfigTypeMax = 4,
} IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE, *PIOMMU_DEVICE_CREATION_CONFIGURATION_TYPE;

