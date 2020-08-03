typedef union _ARM64_ESR_ISS_ABORT_REGISTER
{
  union
  {
    /* 0x0000 */ unsigned long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long FSC : 6; /* bit position: 0 */
      /* 0x0000 */ unsigned long WnR : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long pad0_1 : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long CM : 1; /* bit position: 8 */
    }; /* bitfield */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long DFSC : 6; /* bit position: 0 */
        /* 0x0000 */ unsigned long WnR : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned long S1PTW : 1; /* bit position: 7 */
        /* 0x0000 */ unsigned long CM : 1; /* bit position: 8 */
        /* 0x0000 */ unsigned long EA : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned long FnV : 1; /* bit position: 10 */
        /* 0x0000 */ unsigned long SET : 2; /* bit position: 11 */
        /* 0x0000 */ unsigned long res0_3 : 1; /* bit position: 13 */
        /* 0x0000 */ unsigned long AR : 1; /* bit position: 14 */
        /* 0x0000 */ unsigned long SF : 1; /* bit position: 15 */
        /* 0x0000 */ unsigned long SRT : 5; /* bit position: 16 */
        /* 0x0000 */ unsigned long SSE : 1; /* bit position: 21 */
        /* 0x0000 */ unsigned long SAS : 2; /* bit position: 22 */
        /* 0x0000 */ unsigned long ISV : 1; /* bit position: 24 */
      }; /* bitfield */
    } /* size: 0x0004 */ DABORT;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long IFSC : 6; /* bit position: 0 */
        /* 0x0000 */ unsigned long res0_1 : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned long S1PTW : 1; /* bit position: 7 */
        /* 0x0000 */ unsigned long res0_2 : 1; /* bit position: 8 */
        /* 0x0000 */ unsigned long EA : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned long FnV : 1; /* bit position: 10 */
        /* 0x0000 */ unsigned long SET : 2; /* bit position: 11 */
        /* 0x0000 */ unsigned long res0_3 : 12; /* bit position: 13 */
      }; /* bitfield */
    } /* size: 0x0004 */ IABORT;
  }; /* size: 0x0004 */
} ARM64_ESR_ISS_ABORT_REGISTER, *PARM64_ESR_ISS_ABORT_REGISTER; /* size: 0x0004 */

