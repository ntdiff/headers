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

typedef struct _CMSG_SIGNER_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _CERT_INFO* pCertInfo;
  union
  {
    /* 0x0008 */ unsigned long hCryptProv;
    /* 0x0008 */ unsigned long hNCryptKey;
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long dwKeySpec;
  /* 0x0010 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x001c */ void* pvHashAuxInfo;
  /* 0x0020 */ unsigned long cAuthAttr;
  /* 0x0024 */ struct _CRYPT_ATTRIBUTE* rgAuthAttr;
  /* 0x0028 */ unsigned long cUnauthAttr;
  /* 0x002c */ struct _CRYPT_ATTRIBUTE* rgUnauthAttr;
} CMSG_SIGNER_ENCODE_INFO, *PCMSG_SIGNER_ENCODE_INFO; /* size: 0x0030 */

