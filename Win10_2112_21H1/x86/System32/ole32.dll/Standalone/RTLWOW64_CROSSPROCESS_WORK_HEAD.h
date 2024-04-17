struct RTLWOW64_CROSSPROCESS_WORK_HEAD
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long First : 31; /* bit position: 0 */
        /* 0x0000 */ unsigned long HeavyFlush : 1; /* bit position: 31 */
      }; /* bitfield */
      /* 0x0004 */ unsigned long Sequence;
    }; /* size: 0x0008 */
    /* 0x0000 */ volatile __int64 Value;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

