typedef struct _CRYPT_PROVIDER_REG
{
  /* 0x0000 */ unsigned long cAliases;
  /* 0x0004 */ wchar_t** rgpszAliases;
  /* 0x0008 */ struct _CRYPT_IMAGE_REG* pUM;
  /* 0x000c */ struct _CRYPT_IMAGE_REG* pKM;
} CRYPT_PROVIDER_REG, *PCRYPT_PROVIDER_REG; /* size: 0x0010 */

