typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CRYPT_SMIME_CAPABILITY
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_SMIME_CAPABILITY, *PCRYPT_SMIME_CAPABILITY; /* size: 0x000c */

