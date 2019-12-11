typedef struct _LOCK_STATE
{
  /* 0x0000 */ unsigned short LockState;
  /* 0x0002 */ unsigned char OldIrql;
  /* 0x0003 */ char __PADDING__[1];
} LOCK_STATE, *PLOCK_STATE; /* size: 0x0004 */

