typedef struct _CRYPT_PROVIDER_REF
{
  /* 0x0000 */ unsigned long dwInterface;
  /* 0x0008 */ wchar_t* pszFunction;
  /* 0x0010 */ wchar_t* pszProvider;
  /* 0x0018 */ unsigned long cProperties;
  /* 0x0020 */ struct _CRYPT_PROPERTY_REF** rgpProperties;
  /* 0x0028 */ struct _CRYPT_IMAGE_REF* pUM;
  /* 0x0030 */ struct _CRYPT_IMAGE_REF* pKM;
} CRYPT_PROVIDER_REF, *PCRYPT_PROVIDER_REF; /* size: 0x0038 */

