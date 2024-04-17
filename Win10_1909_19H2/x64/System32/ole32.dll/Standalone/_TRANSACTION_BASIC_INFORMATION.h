typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TRANSACTION_BASIC_INFORMATION
{
  /* 0x0000 */ struct _GUID TransactionId;
  /* 0x0010 */ unsigned long State;
  /* 0x0014 */ unsigned long Outcome;
} TRANSACTION_BASIC_INFORMATION, *PTRANSACTION_BASIC_INFORMATION; /* size: 0x0018 */

