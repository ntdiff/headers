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

typedef struct _CMSG_CNG_CONTENT_DECRYPT_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
  /* 0x0010 */ void* pfnAlloc /* function */;
  /* 0x0014 */ void* pfnFree /* function */;
  /* 0x0018 */ unsigned long hNCryptKey;
  /* 0x001c */ unsigned char* pbContentEncryptKey;
  /* 0x0020 */ unsigned long cbContentEncryptKey;
  /* 0x0024 */ void* hCNGContentEncryptKey;
  /* 0x0028 */ unsigned char* pbCNGContentEncryptKeyObject;
} CMSG_CNG_CONTENT_DECRYPT_INFO, *PCMSG_CNG_CONTENT_DECRYPT_INFO; /* size: 0x002c */

