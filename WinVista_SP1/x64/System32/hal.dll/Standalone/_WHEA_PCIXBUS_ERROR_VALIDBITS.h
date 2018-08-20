typedef union _WHEA_PCIXBUS_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 BusId : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 BusAddress : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 BusData : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 BusCommand : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 CompleterId : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 TargetId : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Reserved : 55; /* bit position: 9 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIXBUS_ERROR_VALIDBITS, *PWHEA_PCIXBUS_ERROR_VALIDBITS; /* size: 0x0008 */

