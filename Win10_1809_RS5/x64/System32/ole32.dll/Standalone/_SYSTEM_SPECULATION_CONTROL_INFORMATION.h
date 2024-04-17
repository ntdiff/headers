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
      /* 0x0000 */ unsigned long Reserved : 18; /* bit position: 14 */
    }; /* bitfield */
  } /* size: 0x0004 */ SpeculationControlFlags;
} SYSTEM_SPECULATION_CONTROL_INFORMATION, *PSYSTEM_SPECULATION_CONTROL_INFORMATION; /* size: 0x0004 */

