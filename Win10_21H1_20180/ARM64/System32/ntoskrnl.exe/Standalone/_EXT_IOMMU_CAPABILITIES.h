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
    }; /* bitfield */
  }; /* size: 0x0008 */
} EXT_IOMMU_CAPABILITIES, *PEXT_IOMMU_CAPABILITIES; /* size: 0x0008 */

