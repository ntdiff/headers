typedef union _DISPATCHER_CONTEXT_NONVOLREG_ARM64
{
  union
  {
    /* 0x0000 */ unsigned char Buffer[152];
    struct
    {
      /* 0x0000 */ unsigned __int64 GpNvRegs[11];
      /* 0x0058 */ double FpNvRegs[8];
    }; /* size: 0x0098 */
  }; /* size: 0x0098 */
} DISPATCHER_CONTEXT_NONVOLREG_ARM64, *PDISPATCHER_CONTEXT_NONVOLREG_ARM64; /* size: 0x0098 */

