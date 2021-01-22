typedef struct _EXT_IOMMU_FUNCTION_TABLE_EXTENDED
{
  /* 0x0000 */ void* FindDevice /* function */;
  /* 0x0008 */ void* SetDeviceSvmCapabilities /* function */;
  /* 0x0010 */ void* SetDevicePasidTable /* function */;
  /* 0x0018 */ void* GrowPasidTable /* function */;
  /* 0x0020 */ void* SetPasidAddressSpace /* function */;
  /* 0x0028 */ void* FlushTb /* function */;
  /* 0x0030 */ void* FlushDeviceTbOnly /* function */;
  /* 0x0038 */ void* DismissPageFault /* function */;
  /* 0x0040 */ void* GetPageFault /* function */;
  /* 0x0048 */ void* SetMessageInterruptRouting /* function */;
  /* 0x0050 */ void* EnableInterrupt /* function */;
  /* 0x0058 */ void* DisableInterrupt /* function */;
  /* 0x0060 */ void* HandleInterrupt /* function */;
  /* 0x0068 */ void* CheckForReservedRegion /* function */;
  /* 0x0070 */ void* MarkHiberRegions /* function */;
  /* 0x0078 */ void* DrainSvmPageRequests /* function */;
  /* 0x0080 */ void* CancelPageRequests /* function */;
  /* 0x0088 */ void* EnumerateReservedDevices /* function */;
  /* 0x0090 */ void* ProcessReservedDomains /* function */;
  /* 0x0098 */ void* QueryAcpiDeviceMapping /* function */;
  /* 0x00a0 */ void* GetRidAcpiMapCount /* function */;
  /* 0x00a8 */ void* FreePasidTable /* function */;
} EXT_IOMMU_FUNCTION_TABLE_EXTENDED, *PEXT_IOMMU_FUNCTION_TABLE_EXTENDED; /* size: 0x00b0 */

