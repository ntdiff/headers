typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _KCRM_PROTOCOL_BLOB
{
  /* 0x0000 */ struct _GUID ProtocolId;
  /* 0x0010 */ unsigned long StaticInfoLength;
  /* 0x0014 */ unsigned long TransactionIdInfoLength;
  /* 0x0018 */ unsigned long Unused1;
  /* 0x001c */ unsigned long Unused2;
} KCRM_PROTOCOL_BLOB, *PKCRM_PROTOCOL_BLOB; /* size: 0x0020 */

