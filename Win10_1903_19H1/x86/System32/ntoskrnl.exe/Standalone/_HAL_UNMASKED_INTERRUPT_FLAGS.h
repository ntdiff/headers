typedef union _HAL_UNMASKED_INTERRUPT_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short SecondaryInterrupt : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short Reserved : 15; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} HAL_UNMASKED_INTERRUPT_FLAGS, *PHAL_UNMASKED_INTERRUPT_FLAGS; /* size: 0x0002 */

