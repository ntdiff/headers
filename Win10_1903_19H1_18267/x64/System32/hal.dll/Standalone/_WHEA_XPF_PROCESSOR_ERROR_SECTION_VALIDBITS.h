typedef union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 LocalAPICId : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 CpuId : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 ProcInfoCount : 6; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 ContextInfoCount : 6; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Reserved : 50; /* bit position: 14 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS, *PWHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS; /* size: 0x0008 */

