typedef struct _CRYPT_IMAGE_REG
{
  /* 0x0000 */ wchar_t* pszImage;
  /* 0x0004 */ unsigned long cInterfaces;
  /* 0x0008 */ struct _CRYPT_INTERFACE_REG** rgpInterfaces;
} CRYPT_IMAGE_REG, *PCRYPT_IMAGE_REG; /* size: 0x000c */

