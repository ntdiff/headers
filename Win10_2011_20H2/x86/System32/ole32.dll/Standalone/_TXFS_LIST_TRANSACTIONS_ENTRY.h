typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TXFS_LIST_TRANSACTIONS_ENTRY
{
  /* 0x0000 */ struct _GUID TransactionId;
  /* 0x0010 */ unsigned long TransactionState;
  /* 0x0014 */ unsigned long Reserved1;
  /* 0x0018 */ unsigned long Reserved2;
  /* 0x0020 */ __int64 Reserved3;
} TXFS_LIST_TRANSACTIONS_ENTRY, *PTXFS_LIST_TRANSACTIONS_ENTRY; /* size: 0x0028 */

