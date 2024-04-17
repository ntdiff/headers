typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT
{
  /* 0x0000 */ unsigned long PropagationCookie;
  /* 0x0004 */ struct _GUID UOW;
  /* 0x0014 */ struct _GUID TmIdentity;
  /* 0x0024 */ unsigned long BufferLength;
} TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT; /* size: 0x0028 */

