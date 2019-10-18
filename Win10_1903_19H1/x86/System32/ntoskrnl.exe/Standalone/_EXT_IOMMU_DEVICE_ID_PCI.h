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
        /* 0x0002 */ unsigned short BusRange : 1; /* bit position: 2 */
        /* 0x0002 */ unsigned short DevicePathLength : 5; /* bit position: 3 */
        /* 0x0002 */ unsigned short StartBusNumber : 8; /* bit position: 8 */
      }; /* bitfield */
      union
      {
        /* 0x0004 */ unsigned short Bdf;
        struct
        {
          /* 0x0004 */ unsigned char SubordinateBus;
          /* 0x0005 */ unsigned char SecondaryBus;
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0006 */
  }; /* size: 0x0008 */
  /* 0x0008 */ wchar_t* DevicePath;
  /* 0x000c */ long __PADDING__[1];
} EXT_IOMMU_DEVICE_ID_PCI, *PEXT_IOMMU_DEVICE_ID_PCI; /* size: 0x0010 */

