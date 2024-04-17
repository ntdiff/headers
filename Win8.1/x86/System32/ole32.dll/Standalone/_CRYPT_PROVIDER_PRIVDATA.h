typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CRYPT_PROVIDER_PRIVDATA
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ struct _GUID gProviderID;
  /* 0x0014 */ unsigned long cbProvData;
  /* 0x0018 */ void* pvProvData;
} CRYPT_PROVIDER_PRIVDATA, *PCRYPT_PROVIDER_PRIVDATA; /* size: 0x001c */

