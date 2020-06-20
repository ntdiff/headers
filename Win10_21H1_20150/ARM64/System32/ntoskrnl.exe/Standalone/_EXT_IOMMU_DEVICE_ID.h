typedef enum _EXT_IOMMU_DEVICE_TYPE
{
  EXT_IOMMU_DEVICE_TYPE_INVALID = 0,
  EXT_IOMMU_DEVICE_TYPE_PCI = 1,
  EXT_IOMMU_DEVICE_TYPE_ACPI = 2,
  EXT_IOMMU_DEVICE_TYPE_IOAPIC = 3,
  EXT_IOMMU_DEVICE_TYPE_LOGICAL = 4,
  EXT_IOMMU_DEVICE_TYPE_GIC = 5,
  EXT_IOMMU_DEVICE_TYPE_TEST = 6,
  EXT_IOMMU_DEVICE_TYPE_MAX = 7,
} EXT_IOMMU_DEVICE_TYPE, *PEXT_IOMMU_DEVICE_TYPE;

typedef struct _EXT_IOMMU_DEVICE_ID_PCI
{
  union
  {
    /* 0x0000 */ unsigned __int64 AsUINT64;
    struct
    {
      /* 0x0000 */ unsigned short PciSegmentNumber;
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned short PhantomFunctionBits : 2; /* bit position: 0 */
        /* 0x0002 */ unsigned short BusRange : 1; /* bit position: 2 */
        /* 0x0002 */ unsigned short Reserved : 5; /* bit position: 3 */
        /* 0x0002 */ unsigned short StartBusNumber : 8; /* bit position: 8 */
      }; /* bitfield */
      union
      {
        /* 0x0004 */ unsigned short Bdf;
        struct
        {
          /* 0x0004 */ unsigned char SubordinateBus;
          /* 0x0005 */ unsigned char SecondaryBus;
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
      /* 0x0006 */ unsigned short DevicePathLength;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  /* 0x0008 */ wchar_t* DevicePath;
} EXT_IOMMU_DEVICE_ID_PCI, *PEXT_IOMMU_DEVICE_ID_PCI; /* size: 0x0010 */

typedef struct _EXT_IOMMU_DEVICE_ID_ACPI
{
  /* 0x0000 */ const char* ObjectName;
  /* 0x0008 */ unsigned int InputMappingBase;
  /* 0x000c */ unsigned int MappingsCount;
} EXT_IOMMU_DEVICE_ID_ACPI, *PEXT_IOMMU_DEVICE_ID_ACPI; /* size: 0x0010 */

typedef struct _EXT_IOMMU_DEVICE_ID_TEST
{
  /* 0x0000 */ unsigned __int64 UniqueId;
} EXT_IOMMU_DEVICE_ID_TEST, *PEXT_IOMMU_DEVICE_ID_TEST; /* size: 0x0008 */

typedef struct _EXT_IOMMU_DEVICE_ID_GIC
{
  /* 0x0000 */ unsigned int LineNumber;
} EXT_IOMMU_DEVICE_ID_GIC, *PEXT_IOMMU_DEVICE_ID_GIC; /* size: 0x0004 */

typedef struct _EXT_IOMMU_DEVICE_ID
{
  /* 0x0000 */ enum _EXT_IOMMU_DEVICE_TYPE DeviceType;
  union
  {
    /* 0x0008 */ struct _EXT_IOMMU_DEVICE_ID_PCI Pci;
    /* 0x0008 */ struct _EXT_IOMMU_DEVICE_ID_ACPI Acpi;
    /* 0x0008 */ unsigned char IoApicId;
    /* 0x0008 */ unsigned __int64 LogicalId;
    /* 0x0008 */ struct _EXT_IOMMU_DEVICE_ID_TEST Test;
    struct
    {
      /* 0x0008 */ struct _EXT_IOMMU_DEVICE_ID_GIC Gic;
      /* 0x000c */ long __PADDING__[3];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} EXT_IOMMU_DEVICE_ID, *PEXT_IOMMU_DEVICE_ID; /* size: 0x0018 */

