typedef union _AER_ENDPOINT_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short UncorrectableErrorMaskRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short UncorrectableErrorSeverityRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short CorrectableErrorMaskRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short AdvancedCapsAndControlRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short Reserved : 12; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} AER_ENDPOINT_DESCRIPTOR_FLAGS, *PAER_ENDPOINT_DESCRIPTOR_FLAGS; /* size: 0x0002 */

