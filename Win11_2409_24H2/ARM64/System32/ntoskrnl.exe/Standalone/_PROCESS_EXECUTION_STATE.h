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

