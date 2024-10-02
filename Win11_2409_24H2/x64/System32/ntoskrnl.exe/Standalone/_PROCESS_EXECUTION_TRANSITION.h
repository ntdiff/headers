typedef union _PROCESS_EXECUTION_TRANSITION
{
  union
  {
    /* 0x0000 */ volatile short TransitionState;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short InProgress : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short Reserved : 7; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0002 */
} PROCESS_EXECUTION_TRANSITION, *PPROCESS_EXECUTION_TRANSITION; /* size: 0x0002 */

