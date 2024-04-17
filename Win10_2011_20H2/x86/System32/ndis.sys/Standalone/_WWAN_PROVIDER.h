typedef struct _WWAN_PROVIDER
{
  /* 0x0000 */ wchar_t ProviderId[7];
  /* 0x0010 */ unsigned long ProviderState;
  /* 0x0014 */ wchar_t ProviderName[21];
  /* 0x0040 */ unsigned long WwanDataClass;
} WWAN_PROVIDER, *PWWAN_PROVIDER; /* size: 0x0044 */

