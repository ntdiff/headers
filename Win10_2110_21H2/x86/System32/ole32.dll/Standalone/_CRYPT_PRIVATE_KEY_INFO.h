typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x000c */

typedef struct _CRYPT_PRIVATE_KEY_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ struct _CRYPT_ALGORITHM_IDENTIFIER Algorithm;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB PrivateKey;
  /* 0x0018 */ struct _CRYPT_ATTRIBUTES* pAttributes;
} CRYPT_PRIVATE_KEY_INFO, *PCRYPT_PRIVATE_KEY_INFO; /* size: 0x001c */

