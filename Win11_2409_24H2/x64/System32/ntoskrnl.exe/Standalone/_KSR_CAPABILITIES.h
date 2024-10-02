typedef union _KSR_CAPABILITIES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PerennialDatabase : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long SkipSubAllocator : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ExtendedNotifications : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Kseg0Vtl1Mappings64KBAligned : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Vtl1IsolatedDatabase : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long Reserved : 27; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULong;
  }; /* size: 0x0004 */
} KSR_CAPABILITIES, *PKSR_CAPABILITIES; /* size: 0x0004 */

