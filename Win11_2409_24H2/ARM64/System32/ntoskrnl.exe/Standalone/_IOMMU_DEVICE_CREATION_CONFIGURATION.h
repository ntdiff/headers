typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE
{
  IommuDeviceCreationConfigTypeNone = 0,
  IommuDeviceCreationConfigTypeAcpi = 1,
  IommuDeviceCreationConfigTypeDeviceId = 2,
  IommuDeviceCreationConfigTypePasid = 3,
  IommuDeviceCreationConfigTypeMax = 4,
} IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE, *PIOMMU_DEVICE_CREATION_CONFIGURATION_TYPE;

typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI
{
  /* 0x0000 */ unsigned int InputMappingBase;
  /* 0x0004 */ unsigned int MappingsCount;
} IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI, *PIOMMU_DEVICE_CREATION_CONFIGURATION_ACPI; /* size: 0x0008 */

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

typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION
{
  /* 0x0000 */ struct _LIST_ENTRY NextConfiguration;
  /* 0x0010 */ enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE ConfigType;
  union
  {
    /* 0x0018 */ struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI Acpi;
    /* 0x0018 */ void* DeviceId;
    /* 0x0018 */ struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID Pasid;
  }; /* size: 0x0008 */
} IOMMU_DEVICE_CREATION_CONFIGURATION, *PIOMMU_DEVICE_CREATION_CONFIGURATION; /* size: 0x0020 */

