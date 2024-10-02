typedef struct _CRYPT_PROPERTY_REF
{
  /* 0x0000 */ wchar_t* pszProperty;
  /* 0x0008 */ unsigned long cbValue;
  /* 0x0010 */ unsigned char* pbValue;
} CRYPT_PROPERTY_REF, *PCRYPT_PROPERTY_REF; /* size: 0x0018 */

