typedef enum _IOMMU_DEVICE_BUS_TYPE
{
  IommuDeviceBusPci = 0,
  IommuDeviceBusAcpi = 1,
  IommuDeviceBusTest = 2,
  IommuDeviceBusMax = 3,
} IOMMU_DEVICE_BUS_TYPE, *PIOMMU_DEVICE_BUS_TYPE;

typedef struct _IOMMU_DEVICE_PATH
{
  /* 0x0000 */ enum _IOMMU_DEVICE_BUS_TYPE BusType;
  /* 0x0004 */ unsigned long UniqueIdLength;
  /* 0x0008 */ unsigned long PathLength;
  /* 0x000c */ void* UniqueId;
  /* 0x0010 */ void* Path;
} IOMMU_DEVICE_PATH, *PIOMMU_DEVICE_PATH; /* size: 0x0014 */

