typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TRANSACTION_ENLISTMENT_PAIR
{
  /* 0x0000 */ struct _GUID EnlistmentId;
  /* 0x0010 */ struct _GUID ResourceManagerId;
} TRANSACTION_ENLISTMENT_PAIR, *PTRANSACTION_ENLISTMENT_PAIR; /* size: 0x0020 */

typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION
{
  /* 0x0000 */ unsigned long NumberOfEnlistments;
  /* 0x0004 */ struct _TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1];
} TRANSACTION_ENLISTMENTS_INFORMATION, *PTRANSACTION_ENLISTMENTS_INFORMATION; /* size: 0x0024 */

