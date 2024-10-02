typedef enum _EXT_IOMMU_KNOWN_IOMMU_TYPE
{
  ExtIommuInvalid = 0,
  ExtIommuAmd = 1,
  ExtIommuIntel = 2,
  ExtIommuSmmuv1 = 3,
  ExtIommuSmmuv2 = 4,
  ExtIommuSmmuv3 = 5,
  ExtIommuIts = 6,
  ExtIommuUnknown = 4096,
} EXT_IOMMU_KNOWN_IOMMU_TYPE, *PEXT_IOMMU_KNOWN_IOMMU_TYPE;

typedef union _EXT_IOMMU_CAPABILITIES
{
  union
  {
    /* 0x0000 */ unsigned __int64 AsUINT64;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 GeneratesMsiInterrupts : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 CoherentTableWalks : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 InterruptsNotSubjectToRemapping : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 InterruptRemapping : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Stage2DmaRemapping : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Svm : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 PcieFunctionBased : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 Stage1DmaRemapping : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 NestedDmaRemapping : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 BroadcastTlbMaintenance : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 ExtendedVmids : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 HardwareAccessFlag : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 HardwareDirtyFlag : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 ExtendedAsids : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned __int64 PartIdWidth : 5; /* bit position: 14 */
      /* 0x0000 */ unsigned __int64 PmgWidth : 4; /* bit position: 19 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} EXT_IOMMU_CAPABILITIES, *PEXT_IOMMU_CAPABILITIES; /* size: 0x0008 */

typedef struct _EXT_IOMMU_FUNCTION_TABLE
{
  /* 0x0000 */ void* ConfigureSettings /* function */;
  /* 0x0008 */ void* Initialize /* function */;
  /* 0x0010 */ void* PrepareForReboot /* function */;
  /* 0x0018 */ void* AllocateDomain /* function */;
  /* 0x0020 */ void* FreeDomain /* function */;
  /* 0x0028 */ void* CreateDevice /* function */;
  /* 0x0030 */ void* DeleteDevice /* function */;
  /* 0x0038 */ void* OwnDevice /* function */;
  /* 0x0040 */ void* ConfigureDeviceFaultReporting /* function */;
  /* 0x0048 */ void* AttachDeviceDomain /* function */;
  /* 0x0050 */ void* DetachDeviceDomain /* function */;
  /* 0x0058 */ void* FlushDomainTb /* function */;
  /* 0x0060 */ void* SyncFlush /* function */;
  /* 0x0068 */ void* CompleteFlush /* function */;
  /* 0x0070 */ void* AllocateRemappingTableEntry /* function */;
  /* 0x0078 */ void* FreeRemappingTableEntry /* function */;
  /* 0x0080 */ void* UpdateRemappingTableEntry /* function */;
  /* 0x0088 */ void* InvalidateRemappingTableEntry /* function */;
  /* 0x0090 */ void* UpdateRemappingDestination /* function */;
  /* 0x0098 */ void* InitializeFirmwareDomain /* function */;
  /* 0x00a0 */ void* ConfigureDomain /* function */;
  /* 0x00a8 */ void* Deinitialize /* function */;
  /* 0x00b0 */ void* CaptureGlobalCrashdumpState /* function */;
  /* 0x00b8 */ void* SetDeviceMpam /* function */;
  /* 0x00c0 */ void* GetDeviceMpam /* function */;
} EXT_IOMMU_FUNCTION_TABLE, *PEXT_IOMMU_FUNCTION_TABLE; /* size: 0x00c8 */

typedef struct _EXT_IOMMU
{
  /* 0x0000 */ void* Context;
  /* 0x0008 */ enum _EXT_IOMMU_KNOWN_IOMMU_TYPE Type;
  /* 0x0010 */ union _EXT_IOMMU_CAPABILITIES Capabilities;
  /* 0x0018 */ unsigned int MaxInputAddressWidth;
  /* 0x001c */ unsigned int MaxIntermediateAddressWidth;
  /* 0x0020 */ unsigned int MaxOutputAddressWidth;
  struct
  {
    /* 0x0024 */ unsigned short PciSegment : 1; /* bit position: 0 */
  } /* size: 0x0002 */ Flags;
  /* 0x0026 */ unsigned short PciSegmentNumber;
  /* 0x0028 */ struct _EXT_IOMMU_FUNCTION_TABLE FunctionTable;
} EXT_IOMMU, *PEXT_IOMMU; /* size: 0x00f0 */

