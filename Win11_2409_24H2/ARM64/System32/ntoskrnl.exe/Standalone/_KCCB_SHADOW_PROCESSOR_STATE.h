typedef union _KCCB_SHADOW_PROCESSOR_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Idle : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Transitioning : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllState;
  }; /* size: 0x0001 */
} KCCB_SHADOW_PROCESSOR_STATE, *PKCCB_SHADOW_PROCESSOR_STATE; /* size: 0x0001 */

