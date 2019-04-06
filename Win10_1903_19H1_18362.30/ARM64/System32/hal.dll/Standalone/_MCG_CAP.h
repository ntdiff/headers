typedef union _MCG_CAP
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 CountField : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ControlMsrPresent : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 ExtendedMsrsPresent : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 SignalingExtensionPresent : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 ThresholdErrorStatusPresent : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 Reserved : 4; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 ExtendedRegisterCount : 8; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 SoftwareErrorRecoverySupported : 1; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 EnhancedMachineCheckCapability : 1; /* bit position: 25 */
      /* 0x0000 */ unsigned __int64 ExtendedErrorLogging : 1; /* bit position: 26 */
      /* 0x0000 */ unsigned __int64 LocalMachineCheckException : 1; /* bit position: 27 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCG_CAP, *PMCG_CAP; /* size: 0x0008 */

