typedef enum _IOMMU_PASID_CONFIGURATION_TYPE
{
  PasidConfigTypeDefaultPasidOnly = 0,
  PasidConfigTypePasidTaggedDma = 1,
  PasidConfigTypeMax = 2,
} IOMMU_PASID_CONFIGURATION_TYPE, *PIOMMU_PASID_CONFIGURATION_TYPE;

typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID
{
  /* 0x0000 */ enum _IOMMU_PASID_CONFIGURATION_TYPE ConfigType;
  /* 0x0004 */ unsigned char SuppressPasidFaults;
  /* 0x0005 */ char __PADDING__[3];
} IOMMU_DEVICE_CREATION_CONFIGURATION_PASID, *PIOMMU_DEVICE_CREATION_CONFIGURATION_PASID; /* size: 0x0008 */

