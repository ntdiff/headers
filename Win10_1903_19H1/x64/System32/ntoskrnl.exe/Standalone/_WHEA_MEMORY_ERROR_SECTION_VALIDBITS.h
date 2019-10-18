typedef union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PhysicalAddress : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 PhysicalAddressMask : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 Node : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Card : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Module : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 Bank : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 Device : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Row : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Column : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 BitPosition : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 ResponderId : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 TargetId : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned __int64 RankNumber : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned __int64 CardHandle : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 ModuleHandle : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned __int64 ExtendedRow : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned __int64 BankGroup : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned __int64 BankAddress : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned __int64 ChipIdentification : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned __int64 Reserved : 42; /* bit position: 22 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_MEMORY_ERROR_SECTION_VALIDBITS, *PWHEA_MEMORY_ERROR_SECTION_VALIDBITS; /* size: 0x0008 */

