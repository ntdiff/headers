typedef struct _KCLOCK_TIMER_DEADLINE_ENTRY
{
  /* 0x0000 */ unsigned __int64 DueTime;
  /* 0x0008 */ unsigned long TolerableDelay;
  union
  {
    /* 0x000c */ unsigned char TypeFlags;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned char Valid : 1; /* bit position: 0 */
      /* 0x000c */ unsigned char NoWake : 1; /* bit position: 1 */
      /* 0x000c */ unsigned char Unused : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x000d */ char __PADDING__[3];
} KCLOCK_TIMER_DEADLINE_ENTRY, *PKCLOCK_TIMER_DEADLINE_ENTRY; /* size: 0x0010 */

