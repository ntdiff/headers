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

typedef struct _CMSG_CONTENT_ENCRYPT_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long hCryptProv;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
  /* 0x0014 */ void* pvEncryptionAuxInfo;
  /* 0x0018 */ unsigned long cRecipients;
  /* 0x001c */ struct _CMSG_RECIPIENT_ENCODE_INFO* rgCmsRecipients;
  /* 0x0020 */ void* pfnAlloc /* function */;
  /* 0x0024 */ void* pfnFree /* function */;
  /* 0x0028 */ unsigned long dwEncryptFlags;
  union
  {
    /* 0x002c */ unsigned long hContentEncryptKey;
    /* 0x002c */ void* hCNGContentEncryptKey;
  }; /* size: 0x0004 */
  /* 0x0030 */ unsigned long dwFlags;
  /* 0x0034 */ int fCNG;
  /* 0x0038 */ unsigned char* pbCNGContentEncryptKeyObject;
  /* 0x003c */ unsigned char* pbContentEncryptKey;
  /* 0x0040 */ unsigned long cbContentEncryptKey;
} CMSG_CONTENT_ENCRYPT_INFO, *PCMSG_CONTENT_ENCRYPT_INFO; /* size: 0x0044 */

