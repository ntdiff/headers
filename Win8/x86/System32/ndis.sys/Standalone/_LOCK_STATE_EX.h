typedef struct _LOCK_STATE_EX
{
  /* 0x0000 */ unsigned char OldIrql;
  /* 0x0001 */ unsigned char LockState;
  /* 0x0002 */ unsigned char Flags;
} LOCK_STATE_EX, *PLOCK_STATE_EX; /* size: 0x0003 */

