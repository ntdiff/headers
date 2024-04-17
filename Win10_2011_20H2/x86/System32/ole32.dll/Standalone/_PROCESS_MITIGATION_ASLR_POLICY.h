typedef struct _PROCESS_MITIGATION_ASLR_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableBottomUpRandomization : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long EnableForceRelocateImages : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long EnableHighEntropy : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long DisallowStrippedImages : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ReservedFlags : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_ASLR_POLICY, *PPROCESS_MITIGATION_ASLR_POLICY; /* size: 0x0004 */

