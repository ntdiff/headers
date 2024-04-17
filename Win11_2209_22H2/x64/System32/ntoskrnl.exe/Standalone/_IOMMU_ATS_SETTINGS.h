typedef union _IOMMU_ATS_SETTINGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char AtsSupported : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char AtsRequired : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Rsvd : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} IOMMU_ATS_SETTINGS, *PIOMMU_ATS_SETTINGS; /* size: 0x0001 */

