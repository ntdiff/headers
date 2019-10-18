typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TlgProviderMetadata_t
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ struct _GUID ProviderId;
  /* 0x0011 */ unsigned short RemainingSize;
} TlgProviderMetadata_t, *PTlgProviderMetadata_t; /* size: 0x0013 */

