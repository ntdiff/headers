typedef union _EXT_IOMMU_DEVICE_ID_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned short AsUSHORT;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short IsAliased : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short Reserved : 15; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0002 */
} EXT_IOMMU_DEVICE_ID_FLAGS, *PEXT_IOMMU_DEVICE_ID_FLAGS; /* size: 0x0002 */

