typedef struct _IOMMU_PAGE_FAULT_PRIVATE_DATA
{
  /* 0x0000 */ unsigned __int64 Data[2];
  /* 0x0010 */ unsigned char DataSize;
  /* 0x0011 */ char __PADDING__[7];
} IOMMU_PAGE_FAULT_PRIVATE_DATA, *PIOMMU_PAGE_FAULT_PRIVATE_DATA; /* size: 0x0018 */

