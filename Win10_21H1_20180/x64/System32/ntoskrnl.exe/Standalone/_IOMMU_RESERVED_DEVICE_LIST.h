typedef struct _IOMMU_RESERVED_DEVICE_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0008 */ struct _IOMMU_RESERVED_DEVICE* Devices[1];
} IOMMU_RESERVED_DEVICE_LIST, *PIOMMU_RESERVED_DEVICE_LIST; /* size: 0x0010 */

