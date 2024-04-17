typedef struct _EXT_IOMMU_S1_X64_DOMAIN_SETTINGS
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char EnableTranslation : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Reserved : 7; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0001 */ Flags;
  /* 0x0008 */ unsigned __int64 PageTableRoot;
} EXT_IOMMU_S1_X64_DOMAIN_SETTINGS, *PEXT_IOMMU_S1_X64_DOMAIN_SETTINGS; /* size: 0x0010 */

