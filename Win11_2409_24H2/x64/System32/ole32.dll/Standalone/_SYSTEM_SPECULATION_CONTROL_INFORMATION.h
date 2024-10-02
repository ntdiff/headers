typedef struct _SYSTEM_SPECULATION_CONTROL_INFORMATION
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BpbEnabled : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long BpbDisabledSystemPolicy : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long BpbDisabledNoHardwareSupport : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long SpecCtrlEnumerated : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long SpecCmdEnumerated : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long IbrsPresent : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long StibpPresent : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long SmepPresent : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long SpeculativeStoreBypassDisableAvailable : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long SpeculativeStoreBypassDisableSupported : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long SpeculativeStoreBypassDisabledSystemWide : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long SpeculativeStoreBypassDisabledKernel : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long SpeculativeStoreBypassDisableRequired : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long BpbDisabledKernelToUser : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned long SpecCtrlRetpolineEnabled : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned long SpecCtrlImportOptimizationEnabled : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned long EnhancedIbrs : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned long HvL1tfStatusAvailable : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned long HvL1tfProcessorNotAffected : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned long HvL1tfMigitationEnabled : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned long HvL1tfMigitationNotEnabled_Hardware : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long HvL1tfMigitationNotEnabled_LoadOption : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned long HvL1tfMigitationNotEnabled_CoreScheduler : 1; /* bit position: 22 */
      /* 0x0000 */ unsigned long EnhancedIbrsReported : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned long MdsHardwareProtected : 1; /* bit position: 24 */
      /* 0x0000 */ unsigned long MbClearEnabled : 1; /* bit position: 25 */
      /* 0x0000 */ unsigned long MbClearReported : 1; /* bit position: 26 */
      /* 0x0000 */ unsigned long ReservedTaa : 4; /* bit position: 27 */
      /* 0x0000 */ unsigned long Reserved : 1; /* bit position: 31 */
    }; /* bitfield */
  } /* size: 0x0004 */ SpeculationControlFlags;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long SbdrSsdpHardwareProtected : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long FbsdpHardwareProtected : 1; /* bit position: 1 */
      /* 0x0004 */ unsigned long PsdpHardwareProtected : 1; /* bit position: 2 */
      /* 0x0004 */ unsigned long FbClearEnabled : 1; /* bit position: 3 */
      /* 0x0004 */ unsigned long FbClearReported : 1; /* bit position: 4 */
      /* 0x0004 */ unsigned long BhbEnabled : 1; /* bit position: 5 */
      /* 0x0004 */ unsigned long BhbDisabledSystemPolicy : 1; /* bit position: 6 */
      /* 0x0004 */ unsigned long BhbDisabledNoHardwareSupport : 1; /* bit position: 7 */
      /* 0x0004 */ unsigned long BranchConfusionStatus : 2; /* bit position: 8 */
      /* 0x0004 */ unsigned long BranchConfusionReported : 1; /* bit position: 10 */
      /* 0x0004 */ unsigned long RdclHardwareProtectedReported : 1; /* bit position: 11 */
      /* 0x0004 */ unsigned long RdclHardwareProtected : 1; /* bit position: 12 */
      /* 0x0004 */ unsigned long Reserved3 : 4; /* bit position: 13 */
      /* 0x0004 */ unsigned long Reserved4 : 3; /* bit position: 17 */
      /* 0x0004 */ unsigned long DivideByZeroReported : 1; /* bit position: 20 */
      /* 0x0004 */ unsigned long DivideByZeroStatus : 1; /* bit position: 21 */
      /* 0x0004 */ unsigned long Reserved5 : 3; /* bit position: 22 */
      /* 0x0004 */ unsigned long Reserved : 7; /* bit position: 25 */
    }; /* bitfield */
  } /* size: 0x0004 */ SpeculationControlFlags2;
} SYSTEM_SPECULATION_CONTROL_INFORMATION, *PSYSTEM_SPECULATION_CONTROL_INFORMATION; /* size: 0x0008 */

