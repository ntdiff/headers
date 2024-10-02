typedef enum _EXT_IOMMU_DEVICE_TYPE
{
  EXT_IOMMU_DEVICE_TYPE_INVALID = 0,
  EXT_IOMMU_DEVICE_TYPE_PCI = 1,
  EXT_IOMMU_DEVICE_TYPE_ACPI = 2,
  EXT_IOMMU_DEVICE_TYPE_IOAPIC = 3,
  EXT_IOMMU_DEVICE_TYPE_LOGICAL = 4,
  EXT_IOMMU_DEVICE_TYPE_TEST = 5,
  EXT_IOMMU_DEVICE_TYPE_MAX = 6,
} EXT_IOMMU_DEVICE_TYPE, *PEXT_IOMMU_DEVICE_TYPE;

typedef union _EXT_IOMMU_DEVICE_ID_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned short AsUSHORT;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short IsAliased : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short Reserved : 15; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0002 */
} EXT_IOMMU_DEVICE_ID_FLAGS, *PEXT_IOMMU_DEVICE_ID_FLAGS; /* size: 0x0002 */

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
        /* 0x0002 */ unsigned short Reserved : 6; /* bit position: 2 */
        /* 0x0002 */ unsigned short StartBusNumber : 8; /* bit position: 8 */
      }; /* bitfield */
      /* 0x0004 */ unsigned short Bdf;
      /* 0x0006 */ unsigned short DevicePathLength;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short* DevicePath;
} EXT_IOMMU_DEVICE_ID_PCI, *PEXT_IOMMU_DEVICE_ID_PCI; /* size: 0x0010 */

typedef struct _EXT_IOMMU_DEVICE_ID_ACPI
{
  /* 0x0000 */ const char* ObjectName;
} EXT_IOMMU_DEVICE_ID_ACPI, *PEXT_IOMMU_DEVICE_ID_ACPI; /* size: 0x0008 */

typedef struct _EXT_IOMMU_DEVICE_ID_TEST
{
  /* 0x0000 */ unsigned __int64 UniqueId;
} EXT_IOMMU_DEVICE_ID_TEST, *PEXT_IOMMU_DEVICE_ID_TEST; /* size: 0x0008 */

typedef struct _EXT_IOMMU_DEVICE_ID
{
  /* 0x0000 */ enum _EXT_IOMMU_DEVICE_TYPE DeviceType;
  /* 0x0004 */ union _EXT_IOMMU_DEVICE_ID_FLAGS Flags;
  union
  {
    /* 0x0008 */ struct _EXT_IOMMU_DEVICE_ID_PCI Pci;
    /* 0x0008 */ struct _EXT_IOMMU_DEVICE_ID_ACPI Acpi;
    /* 0x0008 */ unsigned char IoApicId;
    /* 0x0008 */ unsigned __int64 LogicalId;
    struct
    {
      /* 0x0008 */ struct _EXT_IOMMU_DEVICE_ID_TEST Test;
      /* 0x0010 */ long __PADDING__[2];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} EXT_IOMMU_DEVICE_ID, *PEXT_IOMMU_DEVICE_ID; /* size: 0x0018 */

