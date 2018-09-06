typedef struct _KSPIN_LOCK_QUEUE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE* volatile Next;
  /* 0x0004 */ unsigned long* volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE; /* size: 0x0008 */

typedef struct _KLOCK_QUEUE_HANDLE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE LockQueue;
  /* 0x0008 */ unsigned char OldIrql;
  /* 0x0009 */ char __PADDING__[3];
} KLOCK_QUEUE_HANDLE, *PKLOCK_QUEUE_HANDLE; /* size: 0x000c */

