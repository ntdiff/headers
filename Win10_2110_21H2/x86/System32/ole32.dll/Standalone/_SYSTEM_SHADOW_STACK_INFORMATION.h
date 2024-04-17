typedef struct _SYSTEM_SHADOW_STACK_INFORMATION
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long CetCapable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long UserCetAllowed : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ReservedForUserCet : 6; /* bit position: 2 */
      /* 0x0000 */ unsigned long KernelCetEnabled : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long ReservedForKernelCet : 7; /* bit position: 9 */
      /* 0x0000 */ unsigned long Reserved : 16; /* bit position: 16 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} SYSTEM_SHADOW_STACK_INFORMATION, *PSYSTEM_SHADOW_STACK_INFORMATION; /* size: 0x0004 */

