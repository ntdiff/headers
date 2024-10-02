typedef struct _EXT_IOMMU_DEVICE
{
  /* 0x0000 */ void* Context;
  /* 0x0008 */ struct _EXT_IOMMU* Iommu;
  /* 0x0010 */ struct _EXT_IOMMU_DOMAIN* Domain;
  /* 0x0018 */ unsigned __int64 AssociatedDomainId;
  /* 0x0020 */ unsigned short FirmwareDomainId;
  /* 0x0022 */ unsigned char FaultReportingEnabled;
  /* 0x0023 */ unsigned char IsReservedDevice;
  /* 0x0024 */ long __PADDING__[1];
} EXT_IOMMU_DEVICE, *PEXT_IOMMU_DEVICE; /* size: 0x0028 */

