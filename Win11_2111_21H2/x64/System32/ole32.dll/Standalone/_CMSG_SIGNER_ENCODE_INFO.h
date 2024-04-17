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

typedef struct _CMSG_SIGNER_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _CERT_INFO* pCertInfo;
  union
  {
    /* 0x0010 */ unsigned __int64 hCryptProv;
    /* 0x0010 */ unsigned __int64 hNCryptKey;
  }; /* size: 0x0008 */
  /* 0x0018 */ unsigned long dwKeySpec;
  /* 0x0020 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0038 */ void* pvHashAuxInfo;
  /* 0x0040 */ unsigned long cAuthAttr;
  /* 0x0048 */ struct _CRYPT_ATTRIBUTE* rgAuthAttr;
  /* 0x0050 */ unsigned long cUnauthAttr;
  /* 0x0058 */ struct _CRYPT_ATTRIBUTE* rgUnauthAttr;
} CMSG_SIGNER_ENCODE_INFO, *PCMSG_SIGNER_ENCODE_INFO; /* size: 0x0060 */

