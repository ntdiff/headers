typedef struct _WHEA_PCIX_DEV_VALIDATION_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 ErrorStatusValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 IdInfoValid : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 MemoryNumberValid : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 IoNumberValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 RegisterDataPairValid : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Reserved : 59; /* bit position: 5 */
  }; /* bitfield */
} WHEA_PCIX_DEV_VALIDATION_BITS, *PWHEA_PCIX_DEV_VALIDATION_BITS; /* size: 0x0008 */

