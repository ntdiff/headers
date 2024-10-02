typedef union _AMD64_MXCSR_REG
{
  union
  {
    /* 0x0000 */ unsigned long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long IE : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long DE : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ZE : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long OE : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long UE : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long PE : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long DAZ : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long IM : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long DM : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long ZM : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long OM : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long UM : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long PM : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long RC : 2; /* bit position: 13 */
      /* 0x0000 */ unsigned long FZ : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned long res : 16; /* bit position: 16 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} AMD64_MXCSR_REG, *PAMD64_MXCSR_REG; /* size: 0x0004 */

