typedef struct _CRYPT_PROVIDERS
{
  /* 0x0000 */ unsigned long cProviders;
  /* 0x0004 */ wchar_t** rgpszProviders;
} CRYPT_PROVIDERS, *PCRYPT_PROVIDERS; /* size: 0x0008 */

