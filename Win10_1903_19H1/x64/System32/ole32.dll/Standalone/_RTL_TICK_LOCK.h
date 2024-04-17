typedef union _RTL_TICK_LOCK
{
  union
  {
    /* 0x0000 */ unsigned __int64 AsULong64;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Busy : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Ticks : 63; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} RTL_TICK_LOCK, *PRTL_TICK_LOCK; /* size: 0x0008 */

