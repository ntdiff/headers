typedef union _KSR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long MpwrResume : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULong;
  }; /* size: 0x0004 */
} KSR_FLAGS, *PKSR_FLAGS; /* size: 0x0004 */

