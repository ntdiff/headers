typedef struct _CRYPT_PROVIDER_REF
{
  /* 0x0000 */ unsigned long dwInterface;
  /* 0x0004 */ wchar_t* pszFunction;
  /* 0x0008 */ wchar_t* pszProvider;
  /* 0x000c */ unsigned long cProperties;
  /* 0x0010 */ struct _CRYPT_PROPERTY_REF** rgpProperties;
  /* 0x0014 */ struct _CRYPT_IMAGE_REF* pUM;
  /* 0x0018 */ struct _CRYPT_IMAGE_REF* pKM;
} CRYPT_PROVIDER_REF, *PCRYPT_PROVIDER_REF; /* size: 0x001c */

