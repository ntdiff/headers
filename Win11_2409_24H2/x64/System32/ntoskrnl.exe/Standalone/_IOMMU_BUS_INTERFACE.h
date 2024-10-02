typedef struct _IOMMU_BUS_INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
  /* 0x0020 */ void* GetSvmCapabilities /* function */;
  /* 0x0028 */ void* EnableSvmCapabilities /* function */;
  /* 0x0030 */ void* DisableSvmCapabilities /* function */;
  /* 0x0038 */ void* GetDeviceProperties /* function */;
  /* 0x0040 */ void* GetDeviceId /* function */;
  /* 0x0048 */ void* GetRootDevice /* function */;
} IOMMU_BUS_INTERFACE, *PIOMMU_BUS_INTERFACE; /* size: 0x0050 */

