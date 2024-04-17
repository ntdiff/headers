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

typedef struct _CRYPT_HASH_INFO
{
  /* 0x0000 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x000c */ struct _CRYPTOAPI_BLOB Hash;
} CRYPT_HASH_INFO, *PCRYPT_HASH_INFO; /* size: 0x0014 */

