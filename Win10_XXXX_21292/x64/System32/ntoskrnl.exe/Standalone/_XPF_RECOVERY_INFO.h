typedef struct _XPF_RECOVERY_INFO
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned int NotSupported : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned int Overflow : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned int ContextCorrupt : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned int RestartIpErrorIpNotValid : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned int NoRecoveryContext : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned int MiscOrAddrNotValid : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned int InvalidAddressMode : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned int HighIrql : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned int InterruptsDisabled : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned int SwapBusy : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned int StackOverflow : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned int Reserved : 21; /* bit position: 11 */
    }; /* bitfield */
  } /* size: 0x0004 */ FailureReason;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned int RecoveryAttempted : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned int HvHandled : 1; /* bit position: 1 */
      /* 0x0004 */ unsigned int Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0004 */ Action;
  /* 0x0008 */ unsigned char ActionRequired;
  /* 0x0009 */ unsigned char RecoverySucceeded;
  /* 0x000a */ unsigned char RecoveryKernel;
  /* 0x000b */ unsigned char Reserved;
  /* 0x000c */ unsigned short Reserved2;
  /* 0x000e */ unsigned short Reserved3;
  /* 0x0010 */ unsigned int Reserved4;
} XPF_RECOVERY_INFO, *PXPF_RECOVERY_INFO; /* size: 0x0014 */

