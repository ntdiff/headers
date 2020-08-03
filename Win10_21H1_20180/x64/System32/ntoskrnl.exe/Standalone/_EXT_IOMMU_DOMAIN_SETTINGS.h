typedef struct _EXT_IOMMU_DOMAIN_SETTINGS
{
  struct
  {
    /* 0x0000 */ unsigned char PageTableRootLevel;
    /* 0x0001 */ unsigned char InputSize;
    /* 0x0008 */ unsigned __int64 PageTableRoot;
  } /* size: 0x0010 */ S2;
} EXT_IOMMU_DOMAIN_SETTINGS, *PEXT_IOMMU_DOMAIN_SETTINGS; /* size: 0x0010 */

