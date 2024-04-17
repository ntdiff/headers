typedef union _KSR_CAPABILITIES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PerennialDatabase : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long SkipSubAllocator : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULong;
  }; /* size: 0x0004 */
} KSR_CAPABILITIES, *PKSR_CAPABILITIES; /* size: 0x0004 */

