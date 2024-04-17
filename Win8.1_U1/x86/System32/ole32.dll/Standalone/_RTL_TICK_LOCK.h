typedef union _RTL_TICK_LOCK
{
  union
  {
    /* 0x0000 */ unsigned __int64 AsULong64;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Busy : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Initialized : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Reserved : 6; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 Ticks : 56; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} RTL_TICK_LOCK, *PRTL_TICK_LOCK; /* size: 0x0008 */

