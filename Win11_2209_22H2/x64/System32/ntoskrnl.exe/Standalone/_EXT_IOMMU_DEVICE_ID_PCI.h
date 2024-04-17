typedef struct _EXT_IOMMU_DEVICE_ID_PCI
{
  union
  {
    /* 0x0000 */ unsigned __int64 AsUINT64;
    struct
    {
      /* 0x0000 */ unsigned short PciSegmentNumber;
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned short PhantomFunctionBits : 2; /* bit position: 0 */
        /* 0x0002 */ unsigned short Reserved : 6; /* bit position: 2 */
        /* 0x0002 */ unsigned short StartBusNumber : 8; /* bit position: 8 */
      }; /* bitfield */
      /* 0x0004 */ unsigned short Bdf;
      /* 0x0006 */ unsigned short DevicePathLength;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short* DevicePath;
} EXT_IOMMU_DEVICE_ID_PCI, *PEXT_IOMMU_DEVICE_ID_PCI; /* size: 0x0010 */

