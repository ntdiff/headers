typedef union _WHEA_PCIXDEVICE_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 IdInfo : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 MemoryNumber : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 IoNumber : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 RegisterDataPairs : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Reserved : 59; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIXDEVICE_ERROR_VALIDBITS, *PWHEA_PCIXDEVICE_ERROR_VALIDBITS; /* size: 0x0008 */

