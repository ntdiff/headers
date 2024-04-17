typedef struct _SECURE_SPECULATION_CONTROL_INFORMATION
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long KvaShadowSupported : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long KvaShadowEnabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long KvaShadowUserGlobal : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long KvaShadowPcid : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long MbClearEnabled : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long L1TFMitigated : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long BpbEnabled : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long IbrsPresent : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long EnhancedIbrs : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long StibpPresent : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long SsbdSupported : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long SsbdRequired : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long BpbKernelToUser : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long BpbUserToKernel : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned long Reserved : 18; /* bit position: 14 */
    }; /* bitfield */
  } /* size: 0x0004 */ SecureSpeculationFlags;
} SECURE_SPECULATION_CONTROL_INFORMATION, *PSECURE_SPECULATION_CONTROL_INFORMATION; /* size: 0x0004 */

