typedef struct _EXT_IOMMU_FUNCTION_TABLE
{
  /* 0x0000 */ void* ConfigureSettings /* function */;
  /* 0x0008 */ void* Initialize /* function */;
  /* 0x0010 */ void* AllocateDomain /* function */;
  /* 0x0018 */ void* FreeDomain /* function */;
  /* 0x0020 */ void* CreateDevice /* function */;
  /* 0x0028 */ void* DeleteDevice /* function */;
  /* 0x0030 */ void* OwnDevice /* function */;
  /* 0x0038 */ void* ConfigureDeviceFaultReporting /* function */;
  /* 0x0040 */ void* AttachDeviceDomain /* function */;
  /* 0x0048 */ void* DetachDeviceDomain /* function */;
  /* 0x0050 */ void* FlushDomainTb /* function */;
  /* 0x0058 */ void* SyncFlush /* function */;
  /* 0x0060 */ void* CompleteFlush /* function */;
  /* 0x0068 */ void* AllocateRemappingTableEntry /* function */;
  /* 0x0070 */ void* FreeRemappingTableEntry /* function */;
  /* 0x0078 */ void* UpdateRemappingTableEntry /* function */;
  /* 0x0080 */ void* InvalidateRemappingTableEntry /* function */;
  /* 0x0088 */ void* UpdateRemappingDestination /* function */;
  /* 0x0090 */ void* CaptureGlobalCrashdumpState /* function */;
} EXT_IOMMU_FUNCTION_TABLE, *PEXT_IOMMU_FUNCTION_TABLE; /* size: 0x0098 */

