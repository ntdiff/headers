typedef struct _EXT_IOMMU_S1_ARM64_DOMAIN_SETTINGS
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char EnableTranslation : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Reserved : 7; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0001 */ Flags;
  /* 0x0004 */ unsigned int Mair0;
  /* 0x0008 */ unsigned int Mair1;
  /* 0x0010 */ unsigned __int64 PageTableRoot0;
  /* 0x0018 */ unsigned __int64 PageTableRoot1;
  /* 0x0020 */ unsigned char InputSize0;
  /* 0x0021 */ unsigned char InputSize1;
  /* 0x0024 */ unsigned int Asid;
} EXT_IOMMU_S1_ARM64_DOMAIN_SETTINGS, *PEXT_IOMMU_S1_ARM64_DOMAIN_SETTINGS; /* size: 0x0028 */

