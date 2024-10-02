typedef union _AER_BRIDGE_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short UncorrectableErrorMaskRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short UncorrectableErrorSeverityRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short CorrectableErrorMaskRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short AdvancedCapsAndControlRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short SecondaryUncorrectableErrorMaskRW : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short SecondaryUncorrectableErrorSevRW : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned short SecondaryCapsAndControlRW : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned short Reserved : 9; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} AER_BRIDGE_DESCRIPTOR_FLAGS, *PAER_BRIDGE_DESCRIPTOR_FLAGS; /* size: 0x0002 */

