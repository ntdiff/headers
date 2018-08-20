typedef union _PPM_COORDINATED_SYNCHRONIZATION
{
  union
  {
    /* 0x0000 */ long AsLong;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnterProcessor : 14; /* bit position: 0 */
      /* 0x0000 */ unsigned long ExitProcessor : 14; /* bit position: 14 */
      /* 0x0000 */ unsigned long Transition : 2; /* bit position: 28 */
      /* 0x0000 */ unsigned long Entered : 1; /* bit position: 30 */
      /* 0x0000 */ unsigned long Reserved : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PPM_COORDINATED_SYNCHRONIZATION, *PPPM_COORDINATED_SYNCHRONIZATION; /* size: 0x0004 */

