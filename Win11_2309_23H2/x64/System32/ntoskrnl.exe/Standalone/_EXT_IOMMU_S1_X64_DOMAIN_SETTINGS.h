typedef struct _EXT_IOMMU_S1_X64_DOMAIN_SETTINGS
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char EnableTranslation : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Blocked : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char EnableDefaultPasid : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char Reserved : 5; /* bit position: 3 */
    }; /* bitfield */
  } /* size: 0x0001 */ Flags;
  /* 0x0008 */ unsigned __int64 PageTableRoot;
} EXT_IOMMU_S1_X64_DOMAIN_SETTINGS, *PEXT_IOMMU_S1_X64_DOMAIN_SETTINGS; /* size: 0x0010 */

