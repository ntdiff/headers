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

typedef struct _CRYPT_KEY_SIGN_MESSAGE_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwMsgAndCertEncodingType;
  union
  {
    /* 0x0008 */ unsigned long hCryptProv;
    /* 0x0008 */ unsigned long hNCryptKey;
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long dwKeySpec;
  /* 0x0010 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x001c */ void* pvHashAuxInfo;
  /* 0x0020 */ struct _CRYPT_ALGORITHM_IDENTIFIER PubKeyAlgorithm;
} CRYPT_KEY_SIGN_MESSAGE_PARA, *PCRYPT_KEY_SIGN_MESSAGE_PARA; /* size: 0x002c */

