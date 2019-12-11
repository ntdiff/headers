typedef struct _WHEA_PCIX_BUS_VALIDATION_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 ErrorStatusValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ErrorTypeValid : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 BusIdValid : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 BusAddressValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 BusDataValid : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 CommandValid : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 RequestorIdValid : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 CompleterIdValid : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 TargetIdValid : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Reserved : 55; /* bit position: 9 */
  }; /* bitfield */
} WHEA_PCIX_BUS_VALIDATION_BITS, *PWHEA_PCIX_BUS_VALIDATION_BITS; /* size: 0x0008 */

