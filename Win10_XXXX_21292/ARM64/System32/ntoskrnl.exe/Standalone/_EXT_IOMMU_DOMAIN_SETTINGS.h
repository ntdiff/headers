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

typedef struct _EXT_IOMMU_DOMAIN_SETTINGS
{
  /* 0x0000 */ unsigned char CoherentTableWalks;
  /* 0x0001 */ unsigned char OutputSize;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0002 */ unsigned char Dirty : 1; /* bit position: 0 */
      /* 0x0002 */ unsigned char Accessed : 1; /* bit position: 1 */
      /* 0x0002 */ unsigned char Reserved0 : 6; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0001 */ Httu;
  /* 0x0008 */ struct _EXT_IOMMU_S1_ARM64_DOMAIN_SETTINGS S1;
  struct
  {
    /* 0x0030 */ unsigned char PageTableRootLevel;
    /* 0x0031 */ unsigned char InputSize;
    /* 0x0038 */ unsigned __int64 PageTableRoot;
  } /* size: 0x0010 */ S2;
} EXT_IOMMU_DOMAIN_SETTINGS, *PEXT_IOMMU_DOMAIN_SETTINGS; /* size: 0x0040 */

