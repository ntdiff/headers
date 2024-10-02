typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x0018 */

typedef struct _CMSG_CNG_CONTENT_DECRYPT_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
  /* 0x0020 */ void* pfnAlloc /* function */;
  /* 0x0028 */ void* pfnFree /* function */;
  /* 0x0030 */ unsigned __int64 hNCryptKey;
  /* 0x0038 */ unsigned char* pbContentEncryptKey;
  /* 0x0040 */ unsigned long cbContentEncryptKey;
  /* 0x0048 */ void* hCNGContentEncryptKey;
  /* 0x0050 */ unsigned char* pbCNGContentEncryptKeyObject;
} CMSG_CNG_CONTENT_DECRYPT_INFO, *PCMSG_CNG_CONTENT_DECRYPT_INFO; /* size: 0x0058 */

