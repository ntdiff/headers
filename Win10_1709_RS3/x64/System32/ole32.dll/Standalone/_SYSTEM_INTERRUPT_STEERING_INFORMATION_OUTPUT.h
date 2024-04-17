typedef struct _SYSTEM_INTERRUPT_STEERING_INFORMATION_OUTPUT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Enabled : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} SYSTEM_INTERRUPT_STEERING_INFORMATION_OUTPUT, *PSYSTEM_INTERRUPT_STEERING_INFORMATION_OUTPUT; /* size: 0x0004 */

