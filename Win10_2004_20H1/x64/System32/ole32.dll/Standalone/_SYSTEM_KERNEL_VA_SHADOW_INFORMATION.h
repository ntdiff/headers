typedef struct _SYSTEM_KERNEL_VA_SHADOW_INFORMATION
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long KvaShadowEnabled : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long KvaShadowUserGlobal : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long KvaShadowPcid : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long KvaShadowInvpcid : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long KvaShadowRequired : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long KvaShadowRequiredAvailable : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long InvalidPteBit : 6; /* bit position: 6 */
      /* 0x0000 */ unsigned long L1DataCacheFlushSupported : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long L1TerminalFaultMitigationPresent : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned long Reserved : 18; /* bit position: 14 */
    }; /* bitfield */
  } /* size: 0x0004 */ KvaShadowFlags;
} SYSTEM_KERNEL_VA_SHADOW_INFORMATION, *PSYSTEM_KERNEL_VA_SHADOW_INFORMATION; /* size: 0x0004 */

