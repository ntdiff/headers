typedef union _ARM64_FPSR_REG
{
  union
  {
    /* 0x0000 */ unsigned long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long IOC : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long DZC : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long OFC : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long UFC : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long IXC : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long res0_1 : 2; /* bit position: 5 */
      /* 0x0000 */ unsigned long IDC : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long res0_2 : 19; /* bit position: 8 */
      /* 0x0000 */ unsigned long QC : 1; /* bit position: 27 */
      /* 0x0000 */ unsigned long V : 1; /* bit position: 28 */
      /* 0x0000 */ unsigned long C : 1; /* bit position: 29 */
      /* 0x0000 */ unsigned long Z : 1; /* bit position: 30 */
      /* 0x0000 */ unsigned long N : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} ARM64_FPSR_REG, *PARM64_FPSR_REG; /* size: 0x0004 */

