typedef struct _CRYPT_INTERFACE_REG
{
  /* 0x0000 */ unsigned long dwInterface;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned long cFunctions;
  /* 0x0010 */ wchar_t** rgpszFunctions;
} CRYPT_INTERFACE_REG, *PCRYPT_INTERFACE_REG; /* size: 0x0018 */

