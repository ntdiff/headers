typedef union _ARM64_FPCR_REG
{
  union
  {
    /* 0x0000 */ unsigned long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long res0_1 : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long IOE : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long DZE : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long OFE : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long UFE : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long IXE : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long res0_2 : 2; /* bit position: 13 */
      /* 0x0000 */ unsigned long IDE : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned long Len : 3; /* bit position: 16 */
      /* 0x0000 */ unsigned long FZ16 : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned long Stride : 2; /* bit position: 20 */
      /* 0x0000 */ unsigned long RMode : 2; /* bit position: 22 */
      /* 0x0000 */ unsigned long FZ : 1; /* bit position: 24 */
      /* 0x0000 */ unsigned long DN : 1; /* bit position: 25 */
      /* 0x0000 */ unsigned long AHP : 1; /* bit position: 26 */
      /* 0x0000 */ unsigned long res0_3 : 5; /* bit position: 27 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} ARM64_FPCR_REG, *PARM64_FPCR_REG; /* size: 0x0004 */

