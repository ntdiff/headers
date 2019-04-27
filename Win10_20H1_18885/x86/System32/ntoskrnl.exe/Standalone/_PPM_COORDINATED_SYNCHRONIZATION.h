typedef union _PPM_COORDINATED_SYNCHRONIZATION
{
  union
  {
    /* 0x0000 */ long AsLong;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnterProcessor : 12; /* bit position: 0 */
      /* 0x0000 */ unsigned long ExitProcessor : 12; /* bit position: 12 */
      /* 0x0000 */ unsigned long Transition : 2; /* bit position: 24 */
      /* 0x0000 */ unsigned long Entered : 1; /* bit position: 26 */
      /* 0x0000 */ unsigned long EntryPriority : 5; /* bit position: 27 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PPM_COORDINATED_SYNCHRONIZATION, *PPPM_COORDINATED_SYNCHRONIZATION; /* size: 0x0004 */

