typedef union _XPF_MC_BANK_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ClearOnInitializationRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char ControlDataRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} XPF_MC_BANK_FLAGS, *PXPF_MC_BANK_FLAGS; /* size: 0x0001 */

