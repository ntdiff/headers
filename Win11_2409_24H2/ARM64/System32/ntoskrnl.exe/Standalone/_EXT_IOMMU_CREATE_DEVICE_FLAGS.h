typedef union _EXT_IOMMU_CREATE_DEVICE_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned int AsUINT32;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned int WildCard : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned int ForceCreate : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned int LiveTraffic : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned int DeviceIsReserved : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned int Reserved : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} EXT_IOMMU_CREATE_DEVICE_FLAGS, *PEXT_IOMMU_CREATE_DEVICE_FLAGS; /* size: 0x0004 */

