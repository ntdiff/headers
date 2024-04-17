typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CRYPT_TIMESTAMP_PARA
{
  /* 0x0000 */ const char* pszTSAPolicyId;
  /* 0x0004 */ int fRequestCerts;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Nonce;
  /* 0x0010 */ unsigned long cExtension;
  /* 0x0014 */ struct _CERT_EXTENSION* rgExtension;
} CRYPT_TIMESTAMP_PARA, *PCRYPT_TIMESTAMP_PARA; /* size: 0x0018 */

