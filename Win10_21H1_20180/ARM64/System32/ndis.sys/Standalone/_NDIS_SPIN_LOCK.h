typedef struct _NDIS_SPIN_LOCK
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned char OldIrql;
  /* 0x0009 */ char __PADDING__[7];
} NDIS_SPIN_LOCK, *PNDIS_SPIN_LOCK; /* size: 0x0010 */

