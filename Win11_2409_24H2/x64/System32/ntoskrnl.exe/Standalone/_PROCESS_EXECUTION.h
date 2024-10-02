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

typedef union _PROCESS_EXECUTION_STATE
{
  union
  {
    /* 0x0000 */ char State;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ProcessFrozen : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char ProcessSwapped : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char ProcessGraphicsFreezeOptimized : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char Reserved : 5; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0001 */
} PROCESS_EXECUTION_STATE, *PPROCESS_EXECUTION_STATE; /* size: 0x0001 */

typedef union _PROCESS_EXECUTION
{
  union
  {
    /* 0x0000 */ volatile long State;
    struct
    {
      /* 0x0000 */ volatile union _PROCESS_EXECUTION_TRANSITION Transition;
      /* 0x0002 */ union _PROCESS_EXECUTION_STATE Current;
      /* 0x0003 */ union _PROCESS_EXECUTION_STATE Requested;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} PROCESS_EXECUTION, *PPROCESS_EXECUTION; /* size: 0x0004 */

