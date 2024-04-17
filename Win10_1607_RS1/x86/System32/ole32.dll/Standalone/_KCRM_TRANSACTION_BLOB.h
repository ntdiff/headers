typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _KCRM_TRANSACTION_BLOB
{
  /* 0x0000 */ struct _GUID UOW;
  /* 0x0010 */ struct _GUID TmIdentity;
  /* 0x0020 */ unsigned long IsolationLevel;
  /* 0x0024 */ unsigned long IsolationFlags;
  /* 0x0028 */ unsigned long Timeout;
  /* 0x002c */ wchar_t Description[64];
} KCRM_TRANSACTION_BLOB, *PKCRM_TRANSACTION_BLOB; /* size: 0x00ac */

