typedef union _EXT_IOMMU_QC_PREFETCH_SETTINGS
{
  union
  {
    /* 0x0000 */ unsigned char AsUINT8;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char OverridePrefetchSettings : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Cpre : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char DeepPrefetchLength : 2; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
} EXT_IOMMU_QC_PREFETCH_SETTINGS, *PEXT_IOMMU_QC_PREFETCH_SETTINGS; /* size: 0x0001 */

