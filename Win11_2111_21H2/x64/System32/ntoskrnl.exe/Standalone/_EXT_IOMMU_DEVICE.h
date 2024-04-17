typedef struct _EXT_IOMMU_DEVICE
{
  /* 0x0000 */ void* Context;
  /* 0x0008 */ struct _EXT_IOMMU* Iommu;
  /* 0x0010 */ unsigned __int64 AssociatedDomainId;
  /* 0x0018 */ unsigned short FirmwareDomainId;
  /* 0x001a */ unsigned char FaultReportingEnabled;
  /* 0x001b */ char __PADDING__[5];
} EXT_IOMMU_DEVICE, *PEXT_IOMMU_DEVICE; /* size: 0x0020 */

