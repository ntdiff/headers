typedef struct _HV_HYPERVISOR_HARDWARE_FEATURES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int ApicOverlayAssistInUse : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int MsrBitmapsInUse : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned int ArchitecturalPerformanceCountersInUse : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int SecondLevelAddressTranslationInUse : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int DmaRemappingInUse : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned int InterruptRemappingInUse : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned int MemoryPatrolScrubberPresent : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned int Reserved : 25; /* bit position: 7 */
  }; /* bitfield */
  /* 0x0004 */ unsigned int ReservedEbx;
  /* 0x0008 */ unsigned int ReservedEcx;
  /* 0x000c */ unsigned int ReservedEdx;
} HV_HYPERVISOR_HARDWARE_FEATURES, *PHV_HYPERVISOR_HARDWARE_FEATURES; /* size: 0x0010 */

