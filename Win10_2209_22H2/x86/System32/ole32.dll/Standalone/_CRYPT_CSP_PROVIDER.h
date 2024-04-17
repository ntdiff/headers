typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
  /* 0x0008 */ unsigned long cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x000c */

typedef struct _CRYPT_CSP_PROVIDER
{
  /* 0x0000 */ unsigned long dwKeySpec;
  /* 0x0004 */ wchar_t* pwszProviderName;
  /* 0x0008 */ struct _CRYPT_BIT_BLOB Signature;
} CRYPT_CSP_PROVIDER, *PCRYPT_CSP_PROVIDER; /* size: 0x0014 */

