typedef union _KPRCB_BPB_RETPOLINE_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char RunningNonRetpolineCode : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char IndirectCallsSafe : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char RetpolineEnabled : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char RetpolineStateReserved : 5; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllFlags;
  }; /* size: 0x0001 */
} KPRCB_BPB_RETPOLINE_STATE, *PKPRCB_BPB_RETPOLINE_STATE; /* size: 0x0001 */

