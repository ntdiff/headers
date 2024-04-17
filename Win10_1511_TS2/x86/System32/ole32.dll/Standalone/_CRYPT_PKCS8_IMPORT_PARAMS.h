typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CRYPT_PKCS8_IMPORT_PARAMS
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB PrivateKey;
  /* 0x0008 */ void* pResolvehCryptProvFunc /* function */;
  /* 0x000c */ void* pVoidResolveFunc;
  /* 0x0010 */ void* pDecryptPrivateKeyFunc /* function */;
  /* 0x0014 */ void* pVoidDecryptFunc;
} CRYPT_PKCS8_IMPORT_PARAMS, *PCRYPT_PKCS8_IMPORT_PARAMS; /* size: 0x0018 */

