typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _WWAN_PROVIDER
{
  /* 0x0000 */ wchar_t ProviderId[7];
  /* 0x0010 */ unsigned long ProviderState;
  /* 0x0014 */ wchar_t ProviderName[21];
  /* 0x0040 */ unsigned long WwanDataClass;
} WWAN_PROVIDER, *PWWAN_PROVIDER; /* size: 0x0044 */

typedef struct _NDIS_WWAN_HOME_PROVIDER
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uStatus;
  /* 0x0008 */ struct _WWAN_PROVIDER Provider;
} NDIS_WWAN_HOME_PROVIDER, *PNDIS_WWAN_HOME_PROVIDER; /* size: 0x004c */

