typedef union _XPF_MCE_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long MCG_CapabilityRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long MCG_GlobalControlRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} XPF_MCE_FLAGS, *PXPF_MCE_FLAGS; /* size: 0x0004 */

