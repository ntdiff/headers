typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _TRANSACTION_NOTIFICATION
{
  /* 0x0000 */ void* TransactionKey;
  /* 0x0004 */ unsigned long TransactionNotification;
  /* 0x0008 */ union _LARGE_INTEGER TmVirtualClock;
  /* 0x0010 */ unsigned long ArgumentLength;
  /* 0x0014 */ long __PADDING__[1];
} TRANSACTION_NOTIFICATION, *PTRANSACTION_NOTIFICATION; /* size: 0x0018 */

