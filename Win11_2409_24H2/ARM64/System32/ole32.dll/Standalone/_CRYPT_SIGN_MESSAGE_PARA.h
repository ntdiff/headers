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

typedef struct _CRYPT_SIGN_MESSAGE_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwMsgEncodingType;
  /* 0x0008 */ const struct _CERT_CONTEXT* pSigningCert;
  /* 0x0010 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0028 */ void* pvHashAuxInfo;
  /* 0x0030 */ unsigned long cMsgCert;
  /* 0x0038 */ const struct _CERT_CONTEXT** rgpMsgCert;
  /* 0x0040 */ unsigned long cMsgCrl;
  /* 0x0048 */ const struct _CRL_CONTEXT** rgpMsgCrl;
  /* 0x0050 */ unsigned long cAuthAttr;
  /* 0x0058 */ struct _CRYPT_ATTRIBUTE* rgAuthAttr;
  /* 0x0060 */ unsigned long cUnauthAttr;
  /* 0x0068 */ struct _CRYPT_ATTRIBUTE* rgUnauthAttr;
  /* 0x0070 */ unsigned long dwFlags;
  /* 0x0074 */ unsigned long dwInnerContentType;
} CRYPT_SIGN_MESSAGE_PARA, *PCRYPT_SIGN_MESSAGE_PARA; /* size: 0x0078 */

