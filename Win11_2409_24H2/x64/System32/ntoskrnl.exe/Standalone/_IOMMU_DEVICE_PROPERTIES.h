typedef union _IOMMU_DEVICE_PROPERTIES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long IsThunderbolt : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long DmaCapableAtBoot : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ForceDisableDmaRemapping : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long IsUntrustedPort : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ForceEnableDmaRemapping : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long Rsvd : 27; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} IOMMU_DEVICE_PROPERTIES, *PIOMMU_DEVICE_PROPERTIES; /* size: 0x0004 */

