typedef struct _CRYPT_PROVIDER_REFS
{
  /* 0x0000 */ unsigned long cProviders;
  /* 0x0004 */ struct _CRYPT_PROVIDER_REF** rgpProviders;
} CRYPT_PROVIDER_REFS, *PCRYPT_PROVIDER_REFS; /* size: 0x0008 */

